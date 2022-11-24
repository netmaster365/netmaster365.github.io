// jeden do 20.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    for (int i = liczba; i <= 100; i++)
        cout << i << " ";
    return 0;
}