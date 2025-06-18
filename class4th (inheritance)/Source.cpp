#include <iostream>
#include "../Program/Potion.h"
using namespace std;



int main()
{
#pragma region 상속

    //상위 클래스의 속성을 하위 클래스가 사용할수있도록 설정하는 기능

    //클래스의 상속관계에서 상위는 하위의 속성을 사용 못 하며 하위는 상위의 메모리가 포함된 상태로 메모리의 크기가 결정된다

    Consumable consumable;
    Potion potion;

#pragma endregion

    return 0;
}