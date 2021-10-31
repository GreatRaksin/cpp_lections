#include <iostream>
#include <cstring>  // работа с C-строчками
using namespace std;

void c_string() {
    char my_string[255] = "string";  // C-string  - в конце ставится zero-teminator
    cout << my_string << " has " << sizeof(my_string) << " characters" << endl;
    for (int i = 0; i < sizeof(my_string); ++i) {
        cout << my_string[i] << endl;
    }

    my_string[1] = 'p';
    cout << my_string;

    cout << my_string << " has " << strlen(my_string) << " letters" << endl;

}

int part_1_3110() {
    c_string();
    return 0;
}