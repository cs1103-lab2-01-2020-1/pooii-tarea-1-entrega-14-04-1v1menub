//
// Created by CABRIGI on 4/15/2020.
//

#include "Integer.h"
#include "Number.h"

using namespace std;

int main() {
    Integer o1;
    cout << "Ingrese valor para o1: " << endl;
    cin >> o1;
    cout << o1 << endl;
    Integer o2 = 3;
    cout << o2 << endl;
    Integer o3 = o2;
    cout << o3 << endl;
    cout << o2 + o1 << endl;
    cout << o3 - o1 << endl;
    cout << o3 * o1 << endl;
    cout << o3 / o1 << endl;
    cout << (o3 ^ o1) << endl;
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

    //Number<int> i1;
    //i1 = 68;
    //cout << "Ingrese valor de i1: " << endl;
    //cin >> i1;
    //Number<int> i2= 69;
    //cout << i1;




    return 0;
};

