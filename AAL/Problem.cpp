#include "Problem.h"
#include <chrono>
#include <fstream>
#include <time.h>
#include "allegro5/allegro.h"	// tylko do al_rest

void Problem::prepare()
{
	graph.read(sourceFileName);
	solver.setG(&graph);

	drawing.setG(&graph);
	drawing.initialization(screenWidth, screenHeight);

}

void Problem::run()
{
	std::chrono::steady_clock::time_point begin;
	std::chrono::steady_clock::time_point end;

	drawing.draw();
	
	begin = std::chrono::steady_clock::now();
	solver.findSolution();
	end = std::chrono::steady_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count();

	result = *graph.getBestPath();
	drawing.drawPath(&result);
	
	//TODO wywali�:
	al_rest(5);
}

long int Problem::getDuration()
{
	return duration;
}

void Problem::generateData(int gSize, int density, double abroadFactor)
{
	generator.initialize(screenWidth, screenHeight, sourceFileName);
	generator.generateData(gSize, density, abroadFactor);
}

void Problem::test()
{
	generateData(10, 5, 0.2);
	prepare();
	drawing.draw();
	Sleep(2000);
}