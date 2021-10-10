//
// Created by Demid Raksin on 10/10/21.
//

#include <iostream>
#include <cmath>
using namespace std;

int exchange_var() {
    int x = 5;
    int y = 3;

    auto temp = x;  //  при копирующем присваивании можно попросить компилятор самостоятельно определить тип данных
    x = y;
    y = temp;


    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
};
