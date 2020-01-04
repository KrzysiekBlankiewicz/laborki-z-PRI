#include "DrawGraph.h"
#include <iostream>
#include <vector>

using namespace std;

void DrawGraph::setG(Graph* newG)
{
	g = newG;
}

void DrawGraph::draw()
{
	if (g == nullptr || g->getCities()->size() == 0)
		return;
	drawNodesAndEdges();
	show();
}

void DrawGraph::drawPath(Path* path)
{
	std::vector<City*> cities = *(path->getCities());
	int i = 0;
	int j = 1;
	while(j < cities.size())
	{
		al_draw_line(cities[i]->getXPosition(), cities[i]->getYPosition(), cities[j]->getXPosition(), cities[j]->getYPosition(), al_map_rgb(255, 155, 255), 5);
		++i;
		++j;
	}
	show();
}

void DrawGraph::initialization()
{
	al_init();
	al_init_primitives_addon();
	display = al_create_display(800, 600);
	green = al_map_rgb(0, 255, 0);
	red = al_map_rgb(255, 0, 0);
	blue = al_map_rgb(0, 0, 255);
}

bool DrawGraph::drawNodesAndEdges()
{
	vector<bool> visited;
	City* startingCity;
	visited.resize(g->getCities()->size(), false);
	for (auto i : visited)
		i = false;

	for (auto i: *(g->getCities()))
	{
		al_draw_filled_circle(i->getXPosition(), i->getYPosition(), 10, al_map_rgb(255, 0, 0));
		for (auto j : i->edges)
		{
			if(visited[j->getId()] == false)
			al_draw_line(i->getXPosition(), i->getYPosition(), j->getXPosition(), j->getYPosition(), al_map_rgb(0, 0, 255), 5);
		}
		visited[i->getId()] = true;
	}
	startingCity = g->getStartingCity();
	al_draw_filled_circle(startingCity->getXPosition(), startingCity->getYPosition(), 6, al_map_rgb(0, 255, 0));

	/*for (auto j : g->edges)
	{
		al_draw_line(j.first->getXPosition(), j.first->getYPosition(), j.second->getXPosition(), j.second->getYPosition(), al_map_rgb(255, 0, 0), 10);
	}*/

	return true;
}

bool DrawGraph::show()
{
	al_flip_display();
	return true;
}

DrawGraph::DrawGraph()
{
	g = nullptr;
	display = nullptr;
	/*blue = nullptr;
	green = nullptr;
	red = nullptr;*/
}

DrawGraph::~DrawGraph()
{
	al_destroy_display(display);
}
