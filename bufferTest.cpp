#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // Try entering aomething like "  34 asdfg "
    // when the integer is requested
    int number;
    string mystr;

    cout <<"Please enter an integer value." <<endl;
    cin >> number;
    cout << "The number was: "<< number << "." <<endl;
    cout << "Please enter a name." << endl;
    //cin.ignore();     // try the program both with and without this line
    getline (cin, mystr);
    cout << "The name was: \"" << mystr << '\"' << endl;

    return 0;
}