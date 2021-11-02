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

enum ItemTypes {
    ITEM_HEALTH_POTION,
    ITEM_TORCH,
    ITEM_ARROW,
    MAX_ITEMS,
};

int countTotalItems(int *items) {  // мы не передаем длину массива, т.к. она уже указана в перечислении
    int totalItems = 0;
    for (int i = 0; i < MAX_ITEMS; ++i) {
        totalItems += items[i];
    }
    return totalItems;
}


int main1() {
    int items[MAX_ITEMS] = {3, 6, 12};
    cout << "Player has " << countTotalItems(items) << " items in total.\n";
    return 0;
}

