#include "Character.h"


Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Partner(const weak_ptr<Character>& pointer)
{
	weakpointer = pointer;
}

Character::~Character()
{
	cout << "Released Character" << endl;
}
