#include <iostream>

using namespace std;

class Unit
{
private:
    static int count;

public:
    Unit()
    {
        cout << "Created Unit!" << endl;
    }

    ~Unit()
    {
        count++;
        cout << "Kill count : " << count << endl;
    }
};

int Unit::count = 0;

class Card
{
private:
    char grade;
    const char* name;
public:
    Card() = default;
    Card(const Card& clone)
    {
        grade = clone.grade;
        name = clone.name;
    }
    void Profile(char grade, const char* name)
    {
        //this는 자기자신을 가리키는 포인터 변수
        this->grade = grade;
        this->name = name;
    }

    void Stat()
    {
        cout << "Grade : " << grade << endl << "Name : " << name << endl;
    }
};

class Item
{
private:
    int* price = nullptr;

public:
    Item(int value)
    {
        if (price == nullptr)
        {
            price = new int;
        }
        *price = value;
    }


    Item(const Item& copy)
    {
        price = new int;
        *price = *copy.price;
    }
    ~Item()
    {
        delete price;
    }
};

int main()
{

#pragma region 생성자

    //클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 틋구한 멤버 함수

    //생성자는 객체가 생성될 때 단 한 번만 호출되며, 반환명이 존재하지 않아서 호출되기 전에는 메모리가 할당되지 않는다

    //Unit unit;
#pragma endregion

#pragma region 소멸자

    //객체가 소멸될때 자동으로 실행되는 클래스의 멤버 함수

    //객체가 메모리에서 해제될때 단 한 번만 호출되며, 소멸자는 매개 변수를 생성하여 사용할 수 없다 

    //Unit * marine = new Unit;
    //Unit * firebat = new Unit;
    //delete marine;
    //delete firebat;

#pragma endregion

#pragma region 복사 생성자

    //같은 객체를 복사하여 생성시킬때 호출되는 생성자입니다.

    //복사 생성자를 정의 하지 않고, 객체를 복사하면 기본 복사 생성자가 호출되어 얕은 복사로 복사된다.

    //Card card1;
    //card1.Profile('A', "Alpha");
    //
    //Card cloneCard(card1);
    //card1.Stat();
    //cloneCard.Stat();

#pragma endregion

#pragma region 얕은 복사

    //객체를 복사할 때 주소값을 복사하여 같은 메모리 공간을 가리키게 하는 복사

    //얕은 복사는 같은 갹체가 서로 같은 메모리 공간을 참조하고 있기 때문에 하나의 객체로 값을 변경하면 서로 참조된 객체도 영향을 받는다

    //int * pointer1 = new int;
    //int * pointer2 = pointer1;
    // 
    //*pointer1 = 100;
    //
    //cout << "pointer1의 값 : " << pointer1 << endl;
    //cout << "pointer2의 값 : " << pointer2 << endl;
    //cout << "pointer1가 가리키는 값 : " << *pointer1 << endl;
    //cout << "pointer2가 가리키는 값 : " << *pointer2 << endl;
    //
    //delete pointer1;

#pragma endregion

#pragma region 깊은 복사

    //객체를 복사할 때 참조 값이 아닌 객체 자체로 복사하여 서로 다른 메모리를 생성하는 복사

    //Item part(10000);
    //
    //Item copy = part;

#pragma endregion


    return 0;
}