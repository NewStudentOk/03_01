#include <iostream>

#pragma once

class Calculator {
private:
    double num1 = 1;
    double num2 = 1;
public:
    Calculator() {
        num1 = 1;
        num2 = 1;
    }


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

    bool set_num1(double num1) {
        if (num1 == 0)
            return false;
        else {
            this->num1 = num1;
            return true;
        }
    }

    bool set_num2(double num2) {
        if (num2 == 0)
            return false;
        this->num2 = num2;
        return true;
    }

};


