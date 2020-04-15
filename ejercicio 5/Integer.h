//
// Created by CABRIGI on 4/15/2020.
//

#ifndef POOII_TAREA_1_ENTREGA_14_04_1V1MENUB_INTEGER_H
#define POOII_TAREA_1_ENTREGA_14_04_1V1MENUB_INTEGER_H

#include <iostream>
#include <cmath>

class Integer {
    int value;
public:
    Integer();
    Integer(int _value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int _value);
    operator int();
    friend std::ostream& operator << (std::ostream& os, const Integer& lol);
    friend std::istream& operator >> (std::istream& os, Integer& lol);
    Integer operator+=(int _value);
    Integer operator-(int _value);
    Integer operator-=(int _value);
    Integer operator*(int _value);
    Integer operator*=(int _value);
    Integer operator/(int _value);
    Integer operator^(int _value);
    bool operator>(int _value);
    bool operator>=(int _value);
    bool operator<(int _value);
    bool operator<=(int _value);
    bool operator!=(int _value);
    bool operator==(int _value);
};



#endif //POOII_TAREA_1_ENTREGA_14_04_1V1MENUB_INTEGER_H
