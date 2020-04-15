//
// Created by CABRIGI on 4/15/2020.
//

#include "Integer.h"

using namespace std;

int main() {
    Integer o1;
    cout << "Ingrese valor para o1: " << endl;
    cin >> o1;
    cout << o1 << endl;
    Integer o2 = 12;
    cout << o2 << endl;
    Integer o3 = o2;
    cout << o3 << endl;
    cout << o2 + o1 << endl;
    cout << o3 - o1 << endl;
    cout << o3 * o1 << endl;
    cout << o3 / o1 << endl;
    //cout << o3 ^ o1 << endl; esta no funciona no se porque
    if(o1 > o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o1 > o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o1 >= o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o1 < o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o1 <= o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o1 != o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o1 == o2) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    return 0;
};

