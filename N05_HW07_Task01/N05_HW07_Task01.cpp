// N05_HW07_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MODE 1

#if !defined MODE
#error MODE is not defined
#endif
#if MODE == 1
    int add(int x, int y) {
        return x + y;
    }
#endif

int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "������� � ������ ����������" << std::endl;
#elif MODE == 1
    
    int x, y;
    std::cout << "������� � ������ ������" << std::endl;
    std::cout << "������� ����� 1: " ;
    std::cin >> x;
    std::cout << "������� ����� 2: " ;
    std::cin >> y;
    std::cout << "��������� ��������: "<< add(x, y) << std::endl;
#else
    std::cout << "����������� �����. ���������� ������" << std::endl;
#endif
}


