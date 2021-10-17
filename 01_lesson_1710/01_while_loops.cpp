#include <iostream>
using namespace std;

int while_loop() {
    int x = 10;
    while (x > 0) {  // определение цикла
        cout << x << endl;
        x -= 1;
    }
}

int lines_of_numbers() {
    int counter = 1;
    while (counter <= 50) {
        // вывожу числа меньше 10 (перед каждым числом будет 0)
        if (counter < 10) {
            cout << "0" << counter << " ";
        } else {
            cout << counter << " ";
        }

        if (counter % 10 == 0) {
            cout << endl;
        }

        ++counter;
    }
    return 0;
};

int stair_of_number() {
    int out_counter = 1;
    while (out_counter <= 5) {

        int inner_counter = 1;
        while (inner_counter <= out_counter) {
            cout << inner_counter++ << " ";
        }
        cout << endl;

        ++out_counter;
    }
};

int reverse_stair_of_number() {
    int out_counter = 5;
    while (out_counter >= 1) {

        int inner_counter = out_counter;
        while (inner_counter >= 1) {
            cout << inner_counter-- << " ";
        }
        cout << endl;

        --out_counter;
    }
};

int forest() {
    // цикл на 5 повторений (потому 5 строк)
    int out_counter = 1;
    while (out_counter <= 5) {
        // числа будут появляться в порядке убывания с 5
        int inner_counter = 5;

        while (inner_counter >= 1) {
            // первое число в строке совпадает с номером строки,
            // поэтому числа должны выводить только если число меньше номера ряда,
            // иначе нужно выводить пробелы
            if (inner_counter <= out_counter) {
                cout << inner_counter << " ";
            } else {
                cout << "  ";
            }
            --inner_counter;
        }
        cout << endl;
        ++out_counter;
    }
}

int ne_main() {
    forest();
    return 0;
}