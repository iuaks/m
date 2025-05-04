//
// Created by User on 28.04.2025.
//

#include "Teacher.h"

Teacher::Teacher(const std::string& name, int age, const std::string& subject)
    : Person(name, age), subject(subject) {}

void Teacher::display() const {
    std::cout << "[Teacher] " << name << ", Age: " << age << ", Subject: " << subject << std::endl;
}

std::string Teacher::getSubject() const {
    return subject;
}

void Teacher::printDetails() const {
    display();
}