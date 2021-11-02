#include <iostream>
using namespace std;

/* Объявите фиксированный массив со следующими именами: Sasha, Ivan,
 * John, Orlando, Leonardo, Nina, Anton и Molly. Попросите пользователя
 * ввести имя. Используйте цикл foreach для проверки того, не находится ли
 * имя, введенное пользователем, уже в массиве. */

int linear_search() {
    string username;
    bool found = false; // флаговая переменная. Работает как переключатель для программы. Как только ихзменится значение, в программе что-то произойдет
    const string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
    cout << "Введите имя: ";
    cin >> username;

    for (auto &name : names) {
        if (name == username) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << username << " was found" << endl;
    } else {
        cout << username << " wasn't found";
    }
}
