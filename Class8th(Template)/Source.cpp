#include <iostream>

using namespace std;

template <typename T>
bool same(T left, T right)
{
	return left == right;
	//return (bool)(left == right);
}

template <>
bool same(const char* left, const char* right)
{
	return strlen(left) == strlen(right);
}

template <typename T>
class Container
{
private:
	T list[5];
	int index;
public:
	Container()
	{
		index = 0;

		for (int i = 0; i < 5; i++)
		{
			list[i] = NULL;
		}
	}

	void Push(T data)
	{
		if (index >= 5)
		{
			cout << "Index out of range!" << endl;
		}
		else
		{
			list[index++] = data;
		}
	}

	const T& operator[] (const int index)
	{
		return list[index];
	}
};

int main()
{

#pragma region 템플릿

	// 데이터 형식에 의존하지 않고 하나의 값이 여러 다른 데이터 형식을 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는 기능

	//same("A", "A");		//(char, char)
	//cout << same("A", "A") << endl;
	//
	//same(10, 2);         //(int, int)
	//cout << same(10, 2) << endl;
	//
	//same(5.75f, 1.25f);	//(float, float)
	//cout << same(5.75f, 1.25f) << endl;
	//
	//same(1.5, 3.8);	//(float, float)
	//cout << same(1.5, 3.8) << endl;



#pragma endregion

#pragma region 템플릿 특수화

	//특정한 자료형에 대해 다르게 처리하고 싶은 경우 특정한 자료형만 다른 형식으로 동작시키는 기능

		//same("ACE", "HOME");
		//cout << same("ACE", "HOME") << endl;
		//
		//same("ACE", "LOL");
		//cout << same("ACE", "LOL") << endl;

#pragma endregion

#pragma region 클래스 템플릿

	//Container<int> Container;

	//Container.Push(10);
	//Container.Push(20);
	//Container.Push(30);
	//Container.Push(40);
	//Container.Push(50);
	//Container.Push(60);
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << Container[i] << endl;
	//}

#pragma endregion


	return 0;
}