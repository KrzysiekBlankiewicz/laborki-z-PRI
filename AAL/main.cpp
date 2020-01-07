#include "Problem.h"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	
	Problem problem;
	problem.generateData(10, 5, 0.2);	// TODO argumenty z linii komend
	problem.prepare();
	problem.run();
	std::cout << problem.getDuration() << std::endl;
	
	/*
	std::ofstream file;
	file.open("output.txt", std::fstream::out);
	if (!file.good())
		std::cout << "uups" << std::endl;
	file << problem.getDuration() << std::endl;

	file.close();
	*/
	return 0;
}