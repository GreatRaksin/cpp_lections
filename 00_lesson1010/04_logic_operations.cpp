#include <iostream>
using namespace std;


void logical_op_or() {
    /*
     * ! - НЕ.
     * && - И
     * || - ИЛИ
     * */

    cout << "Поступление в университет\n";
    float math, physics, mid;
    cout << "Балл по математике:";
    cin >> math;
    cout << "Балл по физике:";
    cin >> physics;
    cout << "Средний балл:";
    cin >> mid;

    if ((mid >= 8) || (math + physics >= 16)) {
        cout << "Вы поступили!\n";
    } else {
        cout << "Вы не поступили!\n";
    };

};

bool logical_op_not(int year) {  // year - параметр функции
    return (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
};