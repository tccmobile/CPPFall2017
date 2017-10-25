//
// Created by William Smith on 10/25/17.
//

#ifndef CPP_STUDENTS_CHILD_H
#define CPP_STUDENTS_CHILD_H

#include <string>
using namespace std;

class Child {
private:
    string name;
    int age;
    bool happy;

public:
    Child(const string &name, int age, bool happy);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    bool isHappy() const;

    void setHappy(bool happy);

    void plays();


};


#endif //CPP_STUDENTS_CHILD_H
