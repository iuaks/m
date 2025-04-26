//
// Created by User on 31.03.2025.
//

#include "Course.h"

Course::Course() : courseName("Undefined"), lecturer("Unknown") {}

Course::Course(std::string name, std::string lect) : courseName(name), lecturer(lect) {}

std::string Course::getCourseName() const {
    return courseName;
}

std::string Course::getLecturer() const {
    return lecturer;
}

Course::~Course() {}
