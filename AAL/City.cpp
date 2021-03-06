#include "City.h"

City::City()
{
	id = 0;
	xPosition = 0;
	yPosition = 0;
	lootValue = 0;
	lootVolume = 0;
}

City::City(int i, int x, int y, int val, int vol, bool isBorder)
{
	id = i;
	xPosition = x;
	yPosition = y;
	lootValue = val;
	lootVolume = vol;
	border = isBorder;
}

int City::getXPosition()
{
	return xPosition;
}

int City::getId()
{
	return id;
}

int City::getYPosition()
{
	return yPosition;
}

std::string City::getName()
{
	return name;
}

int City::getLootValue()
{
	return lootValue;
}

int City::getLootVolume()
{
	return lootVolume;
}

bool City::isNeighbour(City* potentialNeighbour)
{
	for (auto a : edges)
		if (a == potentialNeighbour)
		{
			return true;
		}
	return false;
}

bool City::isOnBorder()
{
	return border;
}

std::vector<City*>* City::getEgdes()
{
	return &edges;
}

void City::addEdge(City* newNeighbour)
{
	edges.push_back(newNeighbour);
}

double City::getDistance(City* targetCity)
{
	double distance, xDistance, yDistance;
	xDistance = abs(xPosition - targetCity->getXPosition());
	yDistance = abs(yPosition - targetCity->getYPosition());

	distance = sqrt(xDistance*xDistance + yDistance*yDistance);
	return distance;
}
