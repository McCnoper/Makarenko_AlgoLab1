#include <iostream>
#include <Windows.h>

using namespace std;

enum names {
    aurora,
    atb,
    silpo
};

enum places {
    kyiv,
    odesa,
    lviv
};

struct Store {
    names name;
    places place;
    int area;
    int emlpoyes;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const char* namesM[] = { "aurora", "atb", "silpo" };
    const char* placesM[] = { "kyiv", "odesa", "lviv" };

    int inp = 0;
    Store store1;
    cout << "Введіть назву для магазину: 0 – aurora; 1 – atb; 2 – silpo \n";
    cin >> inp;
    store1.name = static_cast<names>(inp);

    cout << "Введіть місце знаходження для магазину: 0 – kyiv; 1 – odesa; 2 – lviv \n";
    cin >> inp;
    store1.place = static_cast<places>(inp);

    cout << "Введіть площу магазина \n";
    cin >> inp;
    store1.area = inp;

    cout << "Введіть кількість персоналу \n";
    cin >> inp;
    store1.emlpoyes = inp;

    cout << "Назва: " << namesM[store1.name] << endl;
    cout << "Розташування: " << placesM[store1.place] << endl;
    cout << "Площа: " << store1.area << endl;
    cout << "Кількість працівників: " << store1.emlpoyes << endl;
}
