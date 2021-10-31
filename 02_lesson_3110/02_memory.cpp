#include <iostream>
using namespace std;

void dynamic_memory() {

    char name[30]; // надеюсь, что мне введут не более 30 значений
    int monster[50];  // надеюсь, что больше 50 монстров сгенерировано не будет
    int polygon[40000]; // укажем не более 40000 полигонов

    // лучше использовать динамически выделенную память
    new int; // переменная с динамически выделенной памятью
    int *ptr = new int;  // для доступа к выделенной памяти создается указатель
    *ptr = 8;
}



int dynamic_variables() {
    int *ptr1 = new int (7); // прямая инициализация
    int *ptr2 = new int {8}; // uniform инициализация (появилась вместе с С++ 11

    delete ptr1;  // высвобождение памяти
    ptr1 = 0; // обнуляю

    int *dynamicArray = new int[3] {1, 2, 3};  // динамические массивы
    int *dynamicArray2 = new int[3] {1, 2, 3};

    delete dynamicArray;  // удалил первый динамический массив
    delete dynamicArray2;  // удалил второй динамический массив

    return 0;
}

