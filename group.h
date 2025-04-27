//
// Created by User on 31.03.2025.
//

#ifndef GROUP_H
#define GROUP_H

#include <vector>
#include <string>
#include "Student.h"

class Group {
private:
    std::string groupName;
    std::vector<Student> students;

public:
    Group(const std::string& name);
    void addStudent(const Student& student);
    void showGroup() const;
};

#endif //GROUP_H
