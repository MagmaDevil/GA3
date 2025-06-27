#include <iostream>
#include "Packet.h"
#include "Resource.h"

using namespace std;

int main()
{
#pragma region 스마트 포인터

	//포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며, 경계 확인과 같은 추가 기능을 제공하는 포인터

		//int * ptr2 = nullptr;
		//
		//{ 
		//	int* ptr1 = new int;
		//	ptr2 = ptr1;
		//}
		//
		//*ptr2 = 100;
		//
		//cout << "ptr2 : " << *ptr2 << endl;

#pragma region unique pointer

	//특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어있는 포인터

	//unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	//
	//cout << "Error code : " << uniquePointer->Error() << endl;
	//
	//unique_ptr<Packet> uniqueReference = move(uniquePointer);
	//
	//cout << "Error code : " << uniqueReference->Error() << endl;

#pragma endregion

#pragma region shared pointer

	//하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며, 모든 포인터 객체가 자원 객체를 필요로 하지 않을때 자원 객체를 해제하도록 설계되어 있는 포인터

	//shared_ptr<Resource> oil = make_shared<Resource>();
	//{
	//	shared_ptr<Resource> mineral = oil; 
	//	cout << "Oil use count : " << oil.use_count() << endl;
	//}
	//
	//
	//cout << "Oil use count : " << oil.use_count() << endl;

	

	//oil = move(mineral);

	//cout << "Oil use count : " << oil.use_count() << endl;

	shared_ptr<Resource> oil = make_shared<Resource>();
	shared_ptr<Resource> mineral = make_shared<Resource>();

	oil->Share(mineral);
	mineral->Share(oil);

	cout << "Oil use count : " << oil.use_count() << endl;
	cout << "mineral use count : " << mineral.use_count() << endl;

#pragma endregion

#pragma region weak pointer

	//

#pragma endregion



#pragma endregion

	return 0;
}