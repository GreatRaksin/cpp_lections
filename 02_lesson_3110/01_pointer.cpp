#include <iostream>
using namespace std;

void pointer_theory() {
    int m = 8;

    cout << "printing m: " << m << endl;
    cout << "printing m address: " << &m << endl;
    cout << "printing m value trough address: " << *&m << endl;

    int *iPointer;  // указатель на какой-то инт
    double *dPointer;  // указатель на какой-то дабл

    char *cPointer1, *cPointer2; //  если создается несколько указателей, звездочку ставим перед каждым
}

void pointer_values() {
    int age = 13;
    int *ptr = &age;  // присваиваю указателю адрес значения 13

    cout << &age << endl;
    cout << ptr << endl;
    cout << "Разыменовываю указатель: " << *ptr << endl;

    // int *ptr1 = 8;  <- низя
    // int *ptr2 = 0x7ffeed9a5a6c;  <- напрямую присваивать адреса низя

    double *dPtr;
    cout << "size of dPtr: " << sizeof(dPtr) << endl;
    // размер указателя зависит от архитектуры исполняемого файла
    // 32х - 4, 64х - 8
}

