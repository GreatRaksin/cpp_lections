#include <iostream>
using namespace std;

void func(int &x) {  // x - переменная ссылка
    x = 7;  // x изменился
} // x - уничтожился здесь

int testing_2() {
    int x = 10;
    cout << "x = " << x << endl;
    func(x);
    cout << "x = " << x << endl;
    return 0;
}