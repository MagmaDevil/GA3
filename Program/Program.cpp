#include <iostream>

using namespace std;

class Packet
{
private:
	int errorCode = -9999;

public:
	Packet()
	{
		cout << "Created Packet!" << endl;
	}

	unique_ptr<int> uniquePointer = make_unique<int>();

	~Packet()
	{
		cout << "Deleted Packet!" << endl;
	}
};

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

	//unique_ptr<int> uniquePointer = make_unique<int>();

	Packet Packet;

#pragma endregion


#pragma endregion

	return 0;
}