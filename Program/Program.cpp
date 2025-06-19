#include <iostream>
#include "Circle.h"
#include "Marine.h"
#include "Firebat.h"
#include"Ghost.h"

using namespace std;

void Position(float x, float y, float z)
{
    cout << "Float Position" << endl;
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Z : " << z << endl << endl;
}

void Position(int x, int y, int z)
{
    cout << "Int Position 3" << endl;
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    cout << "Z : " << z << endl << endl;
}

void Position(int x, int y)
{
    cout << "Int Position 2" << endl;
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl << endl;
}

int main()
{

#pragma region 다형성

    //여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리할 수 있는 기능

    //다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고, 실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma region 함수의 오버로딩

    //같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로 구분하여 여러개를 선언할 수 있는 기능

    //함수의 매개 변수에 전달하는 인수의 형태로 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없다

    //Position(69, 75);
    //Position(4.7f, 10.1f, 5.4f);
    //Position(6, 47, 0);
#pragma endregion

#pragma region 함수의 오버라이딩

    //상위 클래스에 있는 함수를 하위 클래스에서 재정의하여 사용하는 기능

    //함수의 오버라이딩은 하위 클래스에서 함수를 재정의할 때 상위 클래스의 함수 형태와 일치해야 합니다

    //Shape shape;
    //Circle circle;
    //
    //shape.Area();
    //circle.Area();

#pragma endregion

#pragma region 가상 함수

    //상속하는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수

   //가상 함수는 실행 시간에 상위 클래스에 대한 참조로 하위 클래스의 재정의 된 함수 사용 가능

    Terran* pointer = new Marine();
    pointer->Stat();
    delete pointer;

    Terran* pointer = new Firebat();
    pointer->Stat();
    delete pointer;

    Terran* pointer = new Ghost();
    pointer->Stat();
    delete pointer;

#pragma endregion


#pragma endregion


    return 0;
}