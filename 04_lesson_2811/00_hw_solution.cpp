#include <iostream>
using namespace std;

int multiply_array() {
    int a[4] = {2, 3, 2, 2};
    int mult = 1;
    for (int number : a) {
        mult *= number;
    }
    return mult;
}

int my_factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    int b = 1, i = 2;
    for (; i <= n; i++) {
        b *= i;
    }
    return b;
}

int task_v(int n) {
    int array[11];
    for (int i = 11; i >= 0; i--) {
        array[i] = n % 10;
        n /= 10;
    }

    for (int start = 0; start < 11; ++start) {
        int smallest = start;

        for (int current = start + 1; current < 12; ++current) {
            if (array[current] < array[smallest]) {
                smallest = current;
            }
        }

        swap(array[start], array[smallest]);
    }

    for (int k; k < 12; k++) {
        if (array[k] != 0) {
            cout << array[k];
        }
    }



}

string cows(int cow) {
    string word = "коров";
    cow %= 1000;
    if (cow >= 5 && cow <= 21) {
        word += "";
    }
    else if (cow % 10 == 1) {
        word += "a";
    }
    else if ((cow % 10) >= 2 && (cow % 10) <= 4) {
        word += "ы";
    }
    return word;
}

