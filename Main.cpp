#include <iostream>
#include "mat.hpp"
using namespace std;

int main()
{
    int length, width;
    char symbol1, symbol2;
    while (1)
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "\nEnter width: ";
        cin >> width;

        cout << "\nEnter symbol1: ";
        cin >> symbol1;
        cout << "\nEnter symbol2: ";
        cin >> symbol2;

        cout << ariel::mat(length, width, symbol1, symbol2) << end1;
    }
    

    return 0;
}