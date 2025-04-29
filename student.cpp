//
// Created by User on 31.03.2025.
//

#include "Student.h"

Student::Student() : Person(), studentID("N/A") {}
Student::Student(const std::string& name, int age, const std::string& id)
    : Person(name, age), studentID(id) {}

void Student::display() const {
    std::cout << "[Student] Name: " << name << ", Age: " << age << ", ID: " << studentID;
}

std::string Student::getRole() const {
    return "Student";
}

void Student::sayHello() const {
    std::cout << "Hello, I'm a student!\n";
}

void Student::printDetails() const {
    std::cout << "Student [" << name << ", Age: " << age << ", ID: " << studentID << "]\n";
}


