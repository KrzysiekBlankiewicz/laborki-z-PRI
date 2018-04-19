#ifndef STRUCT_H
#define STRUCT_H

#include<Basket.h>
#include<string>

struct BasketList
{
	Basket* basket;
	BasketList* next;
	
	
};

struct SpendingShedule
{
	std::string category;
	double money;
};
#endif