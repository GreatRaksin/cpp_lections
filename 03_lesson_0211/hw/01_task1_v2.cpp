#include <iostream>
using namespace std;

/*
 Представьте, что вы пишете игру, в которой игрок может иметь 3 типа
 предметов: зелья здоровья, факелы и стрелы. Создайте перечисление
 с этими типами предметов и фиксированный массив для хранения количества
 каждого типа предметов, которое имеет при себе игрок (используйте стандартные
 фиксированные массивы, а не std::array). У вашего игрока должны быть при
 себе 3 зелья здоровья, 6 факелов и 12 стрел. Напишите функцию countTotalItems(),
 которая возвращает общее количество предметов, которые есть у игрока. В функции main()
 выведите результат работы функции countTotalItems().
 */

int countTotal(int potion, int torch, int arrows) {  // мы не передаем длину массива, т.к. она уже указана в перечислении
    int items[3];
    int totalItems = 0;
    items[0] = potion;
    items[1] = torch;
    items[2] = arrows;

    for (int i = 0; i < 3; i++) {
        totalItems += items[i];
    }

    /*
    for (int item : items) {
        totalItems += item;
    }*/
    return totalItems;
}


int show() {
    cout << "Player has " << countTotal(3, 6, 12) << " items in total.\n";
    return 0;
}

