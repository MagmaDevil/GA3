#include "Resource.h"

Resource::Resource()
{
	cout << "Created Resource" << endl;
}

void Resource::Share(const shared_ptr<Resource>& pointer)
{
	sharedpointer = pointer;
}

Resource::~Resource()
{
	cout << "Released Resource" << endl;
}
