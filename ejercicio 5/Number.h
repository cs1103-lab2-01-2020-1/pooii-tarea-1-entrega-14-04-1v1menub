//
// Created by CABRIGI on 4/15/2020.
//

#ifndef POOII_TAREA_1_ENTREGA_14_04_1V1MENUB_NUMBER_H
#define POOII_TAREA_1_ENTREGA_14_04_1V1MENUB_NUMBER_H

#include <iostream>
#include <cmath>

template <typename T>
class Number {
    T value;
public:
    Number();
    Number(T _value);
    Number(const Number& other);
    Number operator=(const Number& other);
    Number operator+(T _value);
    operator T();
    Number operator+=(T _value);
    Number operator-(T _value);
    Number operator-=(T _value);
    Number operator*(T _value);
    Number operator*=(T _value);
    Number operator/(T _value);
    Number operator^(T _value);
    bool operator>(T _value);
    bool operator>=(T _value);
    bool operator<(T _value);
    bool operator<=(T _value);
    bool operator!=(T _value);
    bool operator==(T _value);

    template <typename F>
    friend std::ostream& operator << (std::ostream& os, const Number<F>& lol);
    template <typename F>
    friend std::istream& operator >> (std::istream& os, Number<F>& lol);
};


#endif //POOII_TAREA_1_ENTREGA_14_04_1V1MENUB_NUMBER_H
