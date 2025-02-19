#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char x = 0;
    cout << "Введіть число або символ: ";
    cin >> x;
    if(isdigit(x)) {
        cout << "Було введено цифру";
    }
    else {
        cout << "Було введено символ";
    }
}
