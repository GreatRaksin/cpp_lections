#include <iostream>
#include <string>
using namespace std;

int for_loop() {
    for (int x = 10; x > 0; x--) {
        cout << x << endl;
    };
}

int while_loop();

float middle() {
    // написать программу, которая посчитает средний балл на контрольной 10 учеников.
    // баллы вводятся с клавиатуры
    int marks, students;
    float mid = 0;

    cout << "Количество учеников: ";
    cin >> students;

    for (int i = 1; i <= students; i++) {
        cout << "Введите оценку " << i << ": ";
        cin >> marks;

        mid += marks;
    }

    cout << "Средний балл: " << mid / students << endl;
}


int sovsem_ne_main() {
    middle();
    return 0;
}