//
// Created by CABRIGI on 4/15/2020.
//

#include "Number.h"

template<typename T>
Number<T>::Number() {
}

template<typename T>
Number<T>::Number(T _value) {
    value = _value;
}

template<typename T>
Number<T>::Number(const Number &other) {
    value = other.value;
}

template<typename T>
Number<T> Number<T>::operator=(const Number &other) {
    return value = other.value;
}

template<typename T>
Number<T> Number<T>::operator+(T _value) {
    return value + _value;
}

template<typename T>
Number<T>::operator T() {
    return (T)value;
}

template<typename T>
Number<T> Number<T>::operator+=(T _value) {
    return value += _value;
}

template<typename T>
Number<T> Number<T>::operator-(T _value) {
    return value - _value;
}

template<typename T>
Number<T> Number<T>::operator-=(T _value) {
    return value -= _value;
}

template<typename T>
Number<T> Number<T>::operator*(T _value) {
    return value * _value;
}

template<typename T>
Number<T> Number<T>::operator*=(T _value) {
    return value *= _value;
}

template<typename T>
Number<T> Number<T>::operator/(T _value) {
    return value / _value;
}

template<typename T>
Number<T> Number<T>::operator^(T _value) {
    return pow(value, _value);
}

template<typename T>
bool Number<T>::operator>(T _value) {
    if(value > _value) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
bool Number<T>::operator>=(T _value) {
    if(value >= _value) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
bool Number<T>::operator<(T _value) {
    if(value < _value) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
bool Number<T>::operator<=(T _value) {
    if(value <= _value) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
bool Number<T>::operator!=(T _value) {
    if(value != _value) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
bool Number<T>::operator==(T _value) {
    if(value == _value) {
        return true;
    }
    else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Number &lol) { //no se  cual es el error aca. "Use of class template 'Number' requires template argument"
}

std::istream &operator>>(std::istream &os, Number &lol) {  //no se cual es el error aca. Use of class template 'Number' requires template argumentK
}
