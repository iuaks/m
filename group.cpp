//
// Created by User on 31.03.2025.
//

#include "group.h"
#include "student.h"

Group::Group() : groupName("Unknown") {}

Group::Group(std::string name) : groupName(name) {}

void Group::addStudent(const Student& student) {
    students.push_back(student);
}

std::string Group::getGroupName() const {
    return groupName;
}

std::vector<Student> Group::getStudents() const {
    return students;
}

Group::~Group() {}