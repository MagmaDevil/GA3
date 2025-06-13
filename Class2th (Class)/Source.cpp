#include <iostream>

using namespace std;

namespace Japan
{
    int area = 377974;
    void Size()
    {
        cout << "area : " << area << "km" << endl;
    }
}

namespace Korea
{
    int area = 100210;
    void Size()
    {
        cout << "area : " << area << "km" << endl;
    }
}

using namespace Korea;

class GameObject
{
#pragma region 접근 지정자

    //클래스 내부에 포함되어 있는 속성에 접근 범위를 제한하는 지정자
    //public: 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스 외부에서도 접근을 허용하는 지정자

    //protected: 클래스 내부와 자기가 상속하는 클래스까지만 접근을 허용하는 지정자

    //private: 클래스 내부까지만 접근을 허용하는 지정자

#pragma endregion

private:
    int x = 1;
    int y = 2;
    int z = 3;
protected:
    const char* name = "Capsule";
public:
    void Position()
    {
        cout << "x : " << x << endl;
        cout << "y : " << y << endl;
        cout << "z : " << z << endl;
    }

};

void Profile(const char* name = "츠카사", int age = 18)
{
    cout << "아름은 : " << name << ", 나이는 : " << age << endl;
}

int main()
{

#pragma region 이름 공간

    //속성을 구분할 수 있도록 유효 범위를 설정하는 영역

    //Japan::Size();
    //Size();

#pragma endregion

#pragma region 클래스

    //사용자 정의 데이터 유형으로 속성과 함수가 포함되어 있으며 클래스를 통헤 겍ㅊ[ 생성, 접근, 사용하는 집합체
    //클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에 포함되지만, 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않는다

    GameObject GameObject;

    //GameObject.x = 47;
    //
    //cout << "GameObject의 x : " << GameObject.x << endl;

    //GameObject.Position();
    //
    //cout << "GameObject의 크기 : " << sizeof(GameObject) << endl;

#pragma endregion

#pragma region 기본 매개 변수

    //함수의 매개 변수애 값이 전달되지않을때 미리 값을 설정해놓는 매개 변수

    //Profile();
    //Profile("카나데", 18);
    //Profile();
    //Profile("네네", 17);

#pragma endregion



    return 0;
}