#include <iostream>
#include <cmath>
using namespace std;

void sizes() {
    cout << "bool:\t\t" << sizeof(bool) << "bytes\n";
    cout << "char:\t\t" << sizeof(char) << "bytes\n";
    cout << "wchar_t:\t\t" << sizeof(wchar_t) << "bytes\n";
    cout << "char16_t:\t\t" << sizeof(char16_t ) << "bytes\n";
    cout << "char32_t:\t\t" << sizeof(char32_t ) << "bytes\n";
    cout << "short:\t\t" << sizeof(short) << "bytes\n";
    cout << "long:\t\t" << sizeof(long) << "bytes\n";
    cout << "int:\t\t" << sizeof(int) << "bytes\n";
    cout << "float:\t\t" << sizeof(float) << "bytes\n";
    cout << "double:\t\t" << sizeof(double) << "bytes\n";
    cout << "long double:\t\t" << sizeof(long double) << "bytes\n";

};

void operations() {
    int z = (2 + (((5 * 3) / 2) * 6));
    cout << pow(3, 5) << endl;  // возведение в степень

    int y = 3 | 5;
    cout << y;
}


