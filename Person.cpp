//
// Created by User on 26.04.2025.
//

#include "Person.h"

Person::Person() : name("Unknown"), age(0) {}
Person::Person(const std::string& n, int a) : name(n), age(a) {}
Person::~Person() {
    std::cout << "Person destructor called\n";
}

void Person::display() const {
    std::cout << "Name: " << name << ", Age: " << age;
}

std::string Person::getRole() const {
    return "Person";
}
