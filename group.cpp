//
// Created by User on 31.03.2025.
//

#include "Group.h"
#include <iostream>

Group::Group(const std::string& name) : groupName(name) {}

void Group::addStudent(const Student& student) {
    students.push_back(student);
}

void Group::showGroup() const {
    std::cout << "Group: " << groupName << std::endl;
    for (const auto& student : students) {
        std::cout << student << std::endl;
    }
}
