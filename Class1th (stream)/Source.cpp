#include <iostream>

int packet = 999;

void Swap(int& referenceX, int& referenceY)
{
    int i = referenceX;
    referenceX = referenceY;
    referenceY = i;
}

int main()
{
#pragma region 스트림

    //시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름

    //스트림은 운영 체제에 의해 생성되며, 스트림 자체에 버퍼라는 임시 메모리 공간이 존재

    //std::cout << "League of Legend" << std::endl;
    //std::cout << "Eternal Return" << std::endl;

    //int count;
    //
    //std::cout << "Series : ";
    //std::cin >> count;
    //
    //for(int i = 1; i < count + 1; i++)
    //{
    //    std::cout << "Play station" << " " << i << std::endl;
    //}

#pragma endregion

#pragma region 범위 지정 연산자

    //여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자
    //범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을때 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않는다.

    //int packet = 100;
    //
    //std::cout << "packet 지역 변수의 값 : " << packet << std::endl;
    //std::cout << "packet 전역 변수의 값 : " << ::packet << std::endl;

#pragma endregion

#pragma region 참조자

    //하나의 변수의 또 다른 이름을 지정하는 지정자

    //int x = 10;
    //int& reference = x;
    //reference = 99;
    //std::cout << "x의 값 : " << x << std::endl;
    //std::cout << "reference의 값 : " << reference << std::endl;
    //
    //std::cout << "x의 주소 : " << &x << std::endl;
    //std::cout << "reference의 주소 : " << &reference << std::endl;

    //int x = 1;
    //int y = 2;
    //
    //Swap(x, y);
    //
    //std::cout << "x의 값 : " << x << std::endl;
    //std::cout << "y의 값 : " << y << std::endl;

#pragma endregion

#pragma region 동적 할당

    //int* pointer = new int;
    //*pointer = 10;
    //std::cout << "pointer의 주소 : " << &pointer << std::endl;
    //std::cout << "pointer의 값 : " << *pointer << std::endl;
    //delete pointer;
    //pointer = new int[5];
    //for (int i = 0; i < 5; i++)
    //{
    //    pointer[i] = (i + 1) * 10;
    //    std::cout << "pointer[" << i << "] = " << pointer[i] << std::endl;
    //}
    //
    //delete[] pointer;

#pragma endregion


    return 0;
}