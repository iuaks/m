//
// Created by User on 26.04.2025.
//

#include "Person.h"

Person::Person(const std::string& name, int age) : name(name), age(age) {}

Person::~Person() {}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}
