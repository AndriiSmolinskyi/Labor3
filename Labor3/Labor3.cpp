#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Створимо прямокутник" << endl;
    cout << "Задайте розміри" << endl;
    int weight, high;
    cout << "Ширина ";
    cin >> weight;
    cout << "Висота ";
    cin >> high;
    cout << endl;

    for (int i = 0; i < high; i++)
    {

        for (int j = 0; j < weight; j++)
        {
            cout << "*";
        }

        cout << endl;
    }


}