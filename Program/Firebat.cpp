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
	cout << "ü�� : " << health << endl;
	cout << "���� : " << defense << endl;
}

Firebat::~Firebat()
{
}
