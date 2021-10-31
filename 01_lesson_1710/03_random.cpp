#include <iostream>
#include <cstdlib>
using namespace std;

int randint(int min, int max) {
    srand(time(NULL));

    int r_int = min + rand() % (max - min + 1);
    return r_int;
}

int ochen_ne_main() {
    cout << randint(1, 6) << endl;
    return 0;
}