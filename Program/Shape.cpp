#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
	cout << "Created Shape" << endl << endl;
}

void Shape::Area()
{
	cout << "Shape Formula" << endl << endl;
}

Shape::~Shape()
{
	cout << "Release Shape" << endl << endl;
}
