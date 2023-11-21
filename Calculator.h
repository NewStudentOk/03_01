#include <iostream>

class Calculator {
public:
    double num1;
    double num2;

    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double i) {
        if (num1 != 0) {
            this->num1 = i;
            return true;
        } else {
            std::cout << "Неверный ввод" << std::endl;
            std::cout << "Введите num1: ";
            std::cin >> num1;
            set_num1(num1);
            return false;
        }
    }
    bool set_num2(double j) {
        if (num2 != 0) {
            this->num2 = j;
            return true;
        } else {
            std::cout << "Неверный ввод" << std::endl;
            std::cout << "Введите num2: ";
            std::cin >> num2;
            set_num2(num2);
            return false;
        }
    }

};


