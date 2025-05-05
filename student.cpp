//
// Created by User on 31.03.2025.
//

#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& id)
    : Person(name, age), studentID(id) {}

void Student::display() const {
    std::cout << "[Student] " << name << ", Age: " << age << ", ID: " << studentID << std::endl;
}

std::string Student::getID() const {
    return studentID;
}