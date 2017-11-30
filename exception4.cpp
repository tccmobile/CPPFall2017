//
// Created by William Smith on 11/30/17.
//

#include <iostream>
using namespace std;

int main()
{
    try {
        try  {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw;   //Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}