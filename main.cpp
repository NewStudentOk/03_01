#include <iostream>
#include "Calculator.h"

int main() {
    Calculator p;

    do {
        std::cout << "Введите num1: ";
        std::cin >> p.num1;
        p.set_num1(p.num1);
        std::cout << "Введите num2: ";
        std::cin >> p.num2;
        p.set_num2(p.num2);
        std::cout << "num1 + num2 = " << p.add() << std::endl;
        std::cout << "num1 - num2 = " << p.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << p.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << p.multiply() << std::endl;
        std::cout << "num1 / num2 = " << p.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << p.divide_2_1() << std::endl;

    } while (true);
}