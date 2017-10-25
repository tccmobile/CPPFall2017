//
// Created by William Smith on 10/25/17.
//

#include "Child.h"

Child::Child(const string &name, int age, bool happy) : name(name), age(age), happy(happy) {}

const string &Child::getName() const {
    return name;
}

void Child::setName(const string &name) {
    Child::name = name;
}

int Child::getAge() const {
    return age;
}

void Child::setAge(int age) {
    Child::age = age;
}

bool Child::isHappy() const {
    return happy;
}

void Child::setHappy(bool happy) {
    Child::happy = happy;f
}

void Child::plays() {
    if (!Child::isHappy()){
        Child::setHappy(true);
    } else {
        Child::setHappy(false);
    }

}
