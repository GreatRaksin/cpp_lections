#include <iostream>
using namespace std;

int test() {
    int a = 3, b = 5;  // объявление сразу нескольких переменных
    uint8_t c = 45; //  только беззначные числа (8 бит)
    /*
     * int - целые числа
     * bool - логические значения
     * float - десятичные дроби (4 бит)
     * double - десятичные дроби (8 бит)
     * char - символ
     * string - строки
     * void - простейшее значение, не имеющее типа данных
     */

    return 5 * 2 / 12 % 3;
};

void emptyFunction() {
    // пустая функция
};

int table();
int tern();
void logical_op_or();
bool logical_op_not(int year);

int hello() {
    int x = 5; // копирующая инициализация
    int y(5);  // прямая инициализация

    table();
    tern();
    logical_op_or();
    cout << logical_op_not(2100) << endl;
    // year - аргумент

    cout << "Hello, World! \n";
    return 0;
}
