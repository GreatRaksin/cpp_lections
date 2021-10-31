#include <iostream>
#include <array>  // подключаю std::array
#include <vector> // подключаю std::vector
using namespace std;

int std_array() {
    int another_array[] = {8, 2, 4, 5};  // здесь длину можно не указывать
    array<int, 4> my_array = {}; // объявляю массив типа int длиной 4 элемента
    // ^ здесь обязательно
    my_array = {0, 1, 2, 3}; // ок
    my_array = {8, 6}; // ок, элементам 2 и 3 присваиваются 0
    // my_array = {0, 1, 3, 5, 7, 9} этого делать нельзя, слишком много элементов

    cout << "1 элемент: " << my_array[1] << endl;
    my_array.at(1) = 7; // элемент массива под индексом 1 - корректный, ему присваиваю 7
    cout << "1 элемент: " << my_array[1] << endl;
    // my_array.at(8) = 15; элемента 8 нет, получим ошибку

    cout << "Длина массива: " << my_array.size() << endl;
}

void std_vector() {
    vector<int> my_dynamic_array;  //  не указываю длину
    vector<int> my_dynamic_array2 = {10, 5, 3, 4, 7};  // не указываю длину
    vector<int> my_dynamic_array3 {10, 8, 5, 2, 3, 5, 1};

    cout << "Длина: " << my_dynamic_array3.size() << endl;

    my_dynamic_array3.resize(9);

    cout << "Длина: " << my_dynamic_array3.size() << endl;

    for (auto &element : my_dynamic_array3) {
        cout << element << ' ';
    }

    cout << "Длина второго: " << my_dynamic_array2.size() << endl;
    my_dynamic_array2.resize(2);
    cout << "Длина второго: " << my_dynamic_array2.size() << endl;

    for (auto &element : my_dynamic_array2) {
        cout << element << ' ';
    }
}

int main() {
    std_vector();
    return 0;
}