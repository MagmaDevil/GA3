#include "Firebat.h"
#include <iostream>

using namespace std;

Firebat::Firebat()
{
	health = 50;
	defense = 15;
}

void Firebat::Stat()
{
	cout << "체력 : " << health << endl;
	cout << "방어력 : " << defense << endl;
}

Firebat::~Firebat()
{
}
