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
#pragma region ���� ������

    //Ŭ���� ���ο� ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� ������
    //public: Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ���� �ܺο����� ������ ����ϴ� ������

    //protected: Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ������ ����ϴ� ������

    //private: Ŭ���� ���α����� ������ ����ϴ� ������

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

void Profile(const char* name = "��ī��", int age = 18)
{
    cout << "�Ƹ��� : " << name << ", ���̴� : " << age << endl;
}

int main()
{

#pragma region �̸� ����

    //�Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� ����

    //Japan::Size();
    //Size();

#pragma endregion

#pragma region Ŭ����

    //����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ� ������ Ŭ������ ���� ����[ ����, ����, ����ϴ� ����ü
    //Ŭ������ ��� Ŭ���� ���ο� �ִ� ������ Ŭ������ �޸� ������ ���Ե�����, ���� ������ �Լ��� �޸𸮴� Ŭ���� ������ ���Ե��� �ʴ´�

    GameObject GameObject;

    //GameObject.x = 47;
    //
    //cout << "GameObject�� x : " << GameObject.x << endl;

    //GameObject.Position();
    //
    //cout << "GameObject�� ũ�� : " << sizeof(GameObject) << endl;

#pragma endregion

#pragma region �⺻ �Ű� ����

    //�Լ��� �Ű� ������ ���� ���޵��������� �̸� ���� �����س��� �Ű� ����

    //Profile();
    //Profile("ī����", 18);
    //Profile();
    //Profile("�׳�", 17);

#pragma endregion



    return 0;
}