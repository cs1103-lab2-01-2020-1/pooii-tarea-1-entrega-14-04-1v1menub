//
// Created by CABRIGI on 4/15/2020.
//

#include "Integer.h"

using namespace std;

int main() {
    Integer o2 = 6;
    cout << o2 << endl;
    Integer o3 = o2;
    cout << o3 << endl;
    Integer o4 = 3;
    cout << o2 + o4 << endl;
    cout << o3 - o4 << endl;
    cout << o3 * o4 << endl;
    cout << o3 / o4 << endl;
    //cout << o3 ^ o4 << endl; // no se pq no funca
    if(o3 > o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o3 > o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o3 >= o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o3 < o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o3 <= o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o3 != o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    if(o3 == o4) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    return 0;
};

