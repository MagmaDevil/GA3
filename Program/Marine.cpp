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
	cout << "ü�� : " << health << endl;
	cout << "���� : " << defense << endl;
}

Marine::~Marine()
{
}
