#include <iostream>
using namespace std;

void for_loop_max() {
    const int numStud = 8;
    int scores[numStud] = {67, 88, 34, 89, 56, 54, 100, 58};
    int maxScore = 0;

    for (int student = 0; student < numStud; ++student) {
        if (scores[student] > maxScore) {
            maxScore = scores[student];
        }
    }

    cout << "The best score is: " << maxScore << endl;
}

//  for (объявление_элемента : массив) {
//      стейтмент;
//}

void foreach_loop() {
    int math[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 83, 97, 101 };
    for (auto number : math) {  // итерации по массиву math
        cout << number << ' '; // number - копия текущего элемента массива
    }

    for (auto &number : math) {  // итерации по массиву math
        cout << number << ' '; // number - ссылка на текущий элемент массива, без копирования
    }
}

void for_vs_while() {
    int i1 = 0;
    while (i1 < 10) {
        ++i1;
    }

    int i2 = 0;
    for (; i2 < 10; ) {
        ++i2;
    }
}

void foreach_max() {
    const int numStud = 8;
    int scores[numStud] = {67, 88, 34, 89, 56, 54, 100, 58};
    int maxScore = 0;

    for (auto &score : scores) {
        if (score > maxScore) {
            maxScore = score;
        }
    }

    cout << "The best score is: " << maxScore << endl;
}


