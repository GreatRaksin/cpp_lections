#include <iostream>
using namespace std;

// передача по значению
void foo(int y) {
    cout << "y = " << y << endl;
    y = 15;
    cout << "y = " << y << endl;
}

int vladimir() {

    int x = 8;
    cout << "x = " << x << endl;
    foo(x);
    cout << "x = " << x << endl;
    return 0;
}

