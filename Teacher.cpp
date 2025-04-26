//
// Created by User on 26.04.2025.
//

#include "Teacher.h"

Teacher::Teacher() : Person(), subject("Unknown") {}
Teacher::Teacher(const std::string& n, int a, const std::string& s) : Person(n, a), subject(s) {}

void Teacher::setSubject(const std::string& s) { subject = s; }
std::string Teacher::getSubject() const { return subject; }

void Teacher::display() const {
    Person::display();
    std::cout << ", Subject: " << subject;
}
