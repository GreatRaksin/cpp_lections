#include <iostream>
#include <cmath>
using namespace std;

void getSinCos(double deg, double &sinOut, double &cosOut) {
    // sin() и cos() принимаю радианы, а не градусы, поэтому конвертируем:
    double rad = deg * M_PI / 180.0; // перевод
    sinOut = sin(rad);
    cosOut = cos(rad);
}

int smth() {
    double sin;
    double cos;

    // функция getSinCos() возвращает sin и cos  в переменные sin и cos
    getSinCos(30.0, sin, cos);

    cout << "The sin is " << sin << endl;
    cout << "The cos is " << cos << endl;
    return 0;
}

