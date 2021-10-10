#include <iostream>
using namespace std;

int unary() {
    cout << -5 + 7 << endl;
    /* - в данном случае - унарный, потому что действует только на 5.
        + - бинарный, потому что работает с двумя
     */
    return 0;
}

int tern() {
    int age;
    cout << "Введите возраст: ";
    cin >> age;

    /* if (age > 15) {
        cout << "Доступ разрешен! \n";
    } else {
        cout << "Доступ запрещен! \n";
    } */
    string res = age > 15 ? "Доступ разрешен!\n" : "Доступ запрещен\n";
    cout << res;

    return 0;
}

int const_variables() {
    bool isBigClass = false;
    const int classSize = isBigClass ? 30 : 20;
    // т.к. константы могут должны быть инициализированы при объявлении, использовать if/else нельзя
}
