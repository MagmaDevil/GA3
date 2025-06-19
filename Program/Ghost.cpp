#include "Ghost.h"
#include <iostream>

using namespace std;

Ghost::Ghost()
{
	health = 1;
	defense = 0;
}

void Ghost::Stat()
{
	cout << "체력 : " << health << endl;
	cout << "방어력 : " << defense << endl;
}

Ghost::~Ghost()
{
}
