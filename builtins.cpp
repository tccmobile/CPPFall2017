#include <string>
#include <iostream>

using namespace std;

int main()
{
    string a("abcd efg");
    string b("xyz ijk");
    string c;

    cout << a << " " << b << endl;                        // Output: abcd efg xyz ijk

    cout << "String empty: "    << c.empty()    << endl;  // String empty: 1
    // Is string empty? Yes it is empty. (TRUE)
    c = a + b;                                            // concatenation
    cout << c << endl;                                    // abcd efgxyz ijk
    cout << "String length: "   << c.length()   << endl;  // String length: 15
    cout << "String size: "     << c.size()     << endl;  // String size: 15
    cout << "String capacity: " << c.capacity() << endl;  // String capacity: 15
    cout << "String empty: "    << c.empty()    << endl;  // String empty: 0
    // Is string empty? No it is NOT empty. (FALSE)
    string d = c;
    cout << d << endl;                                    // abcd efgxyz ijk

    // First character: a
    cout << "First character: " << c[0] << endl;          // Strings start with index 0 just like C.

    string f("    Leading and trailing blanks      ");
    cout << "String f:" << f << endl;
    cout << "String length: " << f.length() << endl;      // String length: 37
    cout << "String f:" << f.append("ZZZ") << endl;       // String f:    Leading and trailing blanks      ZZZ
    cout << "String length: " << f.length() << endl;      // String length: 40

    string g("abc abc abd abc");
    cout << "String g: " << g << endl;                    // String g: abc abc abd abc
    cout << "Replace 12,1,\"xyz\",3: " << g.replace(12,1,"xyz",3) << endl;  // Replace 12,1,"xyz",3: abc abc abd xyzbc
    cout << g.replace(0,3,"xyz",3) << endl;               // xyz abc abd xyzbc
    cout << g.replace(4,3,"xyz",3) << endl;               // xyz xyz abd xyzbc
    cout << g.replace(4,3,"ijk",1) << endl;               // xyz i abd xyzbc
    cout << "Find: " << g.find("abd",1) << endl;          // Find: 6
    cout << g.find("qrs",1) << endl;

    string h("abc abc abd abc");
    cout << "String h: " << h << endl;
    cout << "Find \"abc\",0: " << h.find("abc",0) << endl; // Find "abc",0: 0
    cout << "Find \"abc\",1: " << h.find("abc",1) << endl; // Find "abc",1: 4
    cout << "Find_first_of \"abc\",0: " << h.find_first_of("abc",0) << endl; // Find_first_of "abc",0: 0
    cout << "Find_last_of \"abc\",0: " << h.find_last_of("abc",0) << endl;   // Find_last_of "abc",0: 0
    cout << "Find_first_not_of \"abc\",0: " << h.find_first_not_of("abc",0) << endl;  // Find_first_not_of "abc",0: 3
    cout << "Find_first_not_of \" \": " << h.find_first_not_of(" ") << endl;  // Find_first_not_of " ": 0
    cout << "Substr 5,9: " << h.substr(5,9) << endl;       // Substr 5,9: bc abd ab
    cout << "Compare 0,3,\"abc\": " << h.compare(0,3,"abc") << endl;  // Compare 0,3,"abc": 0
    cout << "Compare 0,3,\"abd\": " << h.compare(0,3,"abd") << endl;  // Compare 0,3,"abd": -1
    cout << h.assign("xyz",0,3) << endl;                   // xyz
    cout << "First character: " << h[0] << endl; // Strings start with 0 // First character: x

    return 0;
}

