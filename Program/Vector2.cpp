#include "Vector2.h"
#include <iostream>
using namespace std;

Vector2::Vector2()
{
	cout << "Created Vector2!" << endl;
}

void Vector2::Coodinate(int x, int y)
{
	this->x = x;
	this->y = y;
}

const int& Vector2::X()
{
	return x;
}

const int& Vector2::Y()
{
	return y;
}

const Vector2 & Vector2::operator+(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x + vector2.x;
	clone.y = this->y + vector2.y;

	return clone;
}

const Vector2 & Vector2::operator-(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x - vector2.x;
	clone.y = this->y - vector2.y;

	return clone;
}

const Vector2 & Vector2::operator*(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x * vector2.x;
	clone.y = this->y * vector2.y;

	return clone;
}

const Vector2 & Vector2::operator/(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x / vector2.x;
	clone.y = this->y / vector2.y;

	return clone;
}

const Vector2 & Vector2::operator%(const Vector2 & vector2)
{
	Vector2 clone;

	clone.x = this->x % vector2.x;
	clone.y = this->y % vector2.y;

	return clone;
}

const Vector2 & Vector2::operator++()
{
	this->x++;
	this->y++;
	return *this;
}

const Vector2& Vector2::operator--()
{
	this->x++;
	this->y++;
	return *this;
}

const Vector2 & Vector2::operator++(int)
{
	Vector2 clone;
	clone.Coodinate(x, y);
	this->x++;
	this->y++;
	return clone;
}

const Vector2 & Vector2::operator--(int)
{
	Vector2 clone;
	clone.Coodinate(x, y);
	this->x--;
	this->y--;
	return clone;
}

Vector2::~Vector2()
{
	cout << "release Vector2!" << endl;
}
