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
#pragma region ��Ʈ��

    //�ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧

    //��Ʈ���� � ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶�� �ӽ� �޸� ������ ����

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

#pragma region ���� ���� ������

    //���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������
    //���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ����� ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʴ´�.

    //int packet = 100;
    //
    //std::cout << "packet ���� ������ �� : " << packet << std::endl;
    //std::cout << "packet ���� ������ �� : " << ::packet << std::endl;

#pragma endregion

#pragma region ������

    //�ϳ��� ������ �� �ٸ� �̸��� �����ϴ� ������

    //int x = 10;
    //int& reference = x;
    //reference = 99;
    //std::cout << "x�� �� : " << x << std::endl;
    //std::cout << "reference�� �� : " << reference << std::endl;
    //
    //std::cout << "x�� �ּ� : " << &x << std::endl;
    //std::cout << "reference�� �ּ� : " << &reference << std::endl;

    //int x = 1;
    //int y = 2;
    //
    //Swap(x, y);
    //
    //std::cout << "x�� �� : " << x << std::endl;
    //std::cout << "y�� �� : " << y << std::endl;

#pragma endregion

#pragma region ���� �Ҵ�

    //int* pointer = new int;
    //*pointer = 10;
    //std::cout << "pointer�� �ּ� : " << &pointer << std::endl;
    //std::cout << "pointer�� �� : " << *pointer << std::endl;
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