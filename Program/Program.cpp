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
    const char * name;
public:
    Card() = default;
    Card(const Card & clone)
    {
        grade = clone.grade;
        name = clone.name;
    }
    void Profile(char grade, const char * name)
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

    Card card1;
    card1.Profile('A', "Alpha");

    Card cloneCard(card1);
    card1.Stat();
    cloneCard.Stat();
#pragma endregion


    return 0;
}