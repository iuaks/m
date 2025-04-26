//
// Created by User on 31.03.2025.
//

#include "Student.h"

Student::Student() : Person(), studentID("N/A") {}
Student::Student(const std::string& n, int a, const std::string& id) : Person(n, a), studentID(id) {}
Student::Student(const Student& other) : Person(other), studentID(other.studentID) {}
Student::Student(Student&& other) noexcept : Person(std::move(other)), studentID(std::move(other.studentID)) {}
Student::~Student() {}

void Student::setStudentID(const std::string& id) { studentID = id; }
std::string Student::getStudentID() const { return studentID; }

void Student::display() const {
    Person::display();
    std::cout << ", ID: " << studentID;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << student.name << " " << student.age << " " << student.studentID;
    return os;
}

std::istream& operator>>(std::istream& is, Student& student) {
    is >> student.name >> student.age >> student.studentID;
    return is;
}

