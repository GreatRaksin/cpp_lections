#include <iostream>
using namespace std;

enum Colors {
    COLOR_RED,  // присваивается 0
    COLOR_GREEN,  // присваивается 1
    COLOR_BLUE,  // присваивается 2
    COLOR_BLACK,  // присваивается 3
};

string switchCase(Colors color) {
    switch(color) {
        case COLOR_RED:
            return "RED";
            break;
        case COLOR_GREEN:
            return "GREEN";
            break;
        case COLOR_BLUE:
            return "BLUE";
            break;
        case COLOR_BLACK:
            return "BLACK";
            break;
        default:
            return "HZ";
            break;
    }
}

int returner() {
    cout << switchCase(COLOR_BLACK) << endl;
    return 0;
}

