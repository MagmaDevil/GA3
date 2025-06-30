#include <iostream>
#include <thread>
using namespace std;


void Update()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Update!" << endl;
	}
}

void Renderer()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Renderer!" << endl;
	}
}

int main()
{

#pragma region 스레드

	//프로세스내에서 실행되는 한나의 작업 단위

	thread thread1(Update);
	thread thread2(Renderer);

	for (int i = 0; i < 5; i++)
	{
		cout << "Main!" << endl;
	}

	thread1.join();
	thread2.join();

#pragma endregion


	return 0;
}