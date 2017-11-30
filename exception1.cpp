//
// Created by William Smith on 11/30/17.
//

// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
public:
    virtual const char* what() const throw()
    {
        return "My exception happened";
    }
};

int main () {
    try
    {
        throw myexception();
    }
    catch (myexception& e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}