//
// Created by User on 28.04.2025.
//

#include "Teacher.h"

Teacher::Teacher() : Person(), subject("Unknown") {}
Teacher::Teacher(const std::string& name, int age, const std::string& subject)
    : Person(name, age), subject(subject) {}

void Teacher::display() const {
    std::cout << "[Teacher] Name: " << name << ", Age: " << age << ", Subject: " << subject;
}

std::string Teacher::getRole() const {
    return "Teacher";
}

void Teacher::sayHello() const {
    std::cout << "Good day, I'm a teacher.\n";
}

void Teacher::printDetails() const {
    std::cout << "Teacher [" << name << ", Age: " << age << ", Subject: " << subject << "]\n";
}
