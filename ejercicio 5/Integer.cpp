//
// Created by CABRIGI on 4/15/2020.
//

#include "Integer.h"

#include "Integer.h"

Integer::Integer() {
}

Integer::Integer(int _value) {
    value = _value;
}

Integer::Integer(const Integer &other) {
    value = other.value;
}

Integer Integer::operator=(const Integer &other) {
    value = other.value;
}

Integer Integer::operator+(int _value) {
    return value + _value;
}

Integer::operator int() {
    return (int)this-> value;
}

std::ostream &operator<<(std::ostream &os, const Integer &lol) {
    os << lol.value;
    return os;
}

std::istream &operator>>(std::istream &os, const Integer &lol) {
    os >> lol.value;
    return os;
}

Integer Integer::operator+=(int _value) {
    return value += _value;
}

Integer Integer::operator-(int _value) {
    return value - _value;
}

Integer Integer::operator-=(int _value) {
    return value -= _value;
}

Integer Integer::operator*(int _value) {
    return value * _value;
}

Integer Integer::operator*=(int _value) {
    return value *= _value;
}

Integer Integer::operator/(int _value) {
    return value / _value;
}

Integer Integer::operator^(int _value) {
    int xd = value;
    for(int i = 0; i < _value; i++) {
        xd *= value;
    }
    return xd;
}

bool Integer::operator>(int _value) {
    if(value > _value) {
        return true;
    }
    else {
        return false;
    }
}

bool Integer::operator>=(int _value) {
    if(value >= _value) {
        return true;
    }
    else {
        return false;
    }
}

bool Integer::operator<(int _value) {
    if(value < _value) {
        return true;
    }
    else {
        return false;
    }
}

bool Integer::operator<=(int _value) {
    if(value <= _value) {
        return true;
    }
    else {
        return false;
    }
}

bool Integer::operator!=(int _value) {
    if(value != _value) {
        return true;
    }
    else {
        return false;
    }
}

bool Integer::operator==(int _value) {
    if(value == _value) {
        return true;
    }
    else {
        return false;
    }
}