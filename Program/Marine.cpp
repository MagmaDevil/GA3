#include "Marine.h"
#include <iostream>

using namespace std;

Marine::Marine()
{
	health = 100;
	defense = 50;
}

void Marine::Stat()
{
	cout << "체력 : " << health << endl;
	cout << "방어력 : " << defense << endl;
}

Marine::~Marine()
{
}
