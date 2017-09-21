//
// Created by William Smith on 4/18/17.
//

#define NDEBUG

#include <iostream>
#include <cassert>


using namespace std;

double division(int a, int b) {
    if( b == 0 ) {
        throw "Division by zero condition!";
    }
    return (a/b);
}

int main () {
    int x = 50;
    int y = 0;
    double z = 0;

    assert(y>0);

    try {
        z = division(x, y);
        cout << z << endl;
    }catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}