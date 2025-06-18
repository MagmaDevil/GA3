#pragma once
#include "Consumable.h"
#include <iostream>

using namespace std;

class Potion : public Consumable
{
private:
	int health;

public:
	Potion();

	~Potion();
};

