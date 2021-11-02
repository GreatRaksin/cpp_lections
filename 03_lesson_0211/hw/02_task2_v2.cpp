#include <iostream>
using namespace std;

/* Объявите фиксированный массив со следующими именами: Sasha, Ivan,
 * John, Orlando, Leonardo, Nina, Anton и Molly. Попросите пользователя
 * ввести имя. Используйте цикл foreach для проверки того, не находится ли
 * имя, введенное пользователем, уже в массиве. */

bool search_name(string username) {
    bool found = false; // флаговая переменная. Работает как переключатель для программы. Как только ихзменится значение, в программе что-то произойдет
    const string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};

    for (auto &name : names) {
        if (name == username) {
            found = true;
            break;
        }
    }

    return found;
}

int testing() {
    if (search_name("Галя")) {
        cout << "Was found!\n";
    } else {
        cout << "Wasn't found!\n";
    }
    return 0;
}