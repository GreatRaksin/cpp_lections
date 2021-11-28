#include <iostream>
using namespace std;

/*
 * Классы - собственный тип данных (шаблон)
 * Объекты
 * Методы - функции, определенные внутри класса, способные работать со значениями, который хранит класс
 * Экземпляр - это переменная класса (то, что строится по шаблону)''

Данные класса нужно зашищать от внешнего вмешательства. Чтобы это сделать, я настраиваю уровни доступа:

 1) public -> делает значения полностью открытыми для изменения (программного)
 2) private -> делает значения полностью закрытыми для зименения
 3) protected -> открывает доступ к значениям только для дружественных/дочерних классов

 Контроль доступа к данным осуществляется на уровне класса, а не на уровне экземпляра.
*/

class DateClass {
public:
    int m_day;
    int m_month;
    int m_year;

    void print() {  // определение метода класса
        cout << m_day << "/" << m_month << "/" << m_year << endl;
    }
};

class Car {
public:
    string color;
    string model;
    int wheels;
    string engine;
private:
    double max_speed = 250;

public:
    void run(float speed) {
        if (speed <= max_speed) {
            cout << "Car " << model << " runs with speed " << speed << endl;
        } else {
            cout << "Too fast!" << endl;
        }

    }

    void horn() {
        cout << model << " says: beep-beep" << endl;
    }
};

class Employee {
    public:
    string name;
    int id;
    double salary;

    void about() {
        cout << "Name: " << name << "\nId: " << id << "\nSalary: $" << salary << endl;
    }
};

int main() {
    DateClass today {28, 11, 2021}; // создание экземпляра класса
    Car tesla {};
    tesla.model = "Model S";
    // tesla.max_speed = 1000;  <- менять нельзя, потому что запривачено
    tesla.run(800);
    Employee ivan {"Ivan", 1, 300};
    Employee sarah {"Sarah", 2, 800};

    ivan.about();
    cout << endl;
    sarah.about();
    return 0;
}
