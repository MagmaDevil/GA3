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
	cout << "ü�� : " << health << endl;
	cout << "���� : " << defense << endl;
}

Ghost::~Ghost()
{
}
