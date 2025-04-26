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
    Group();
    Group(std::string name);

    void addStudent(const Student& student);
    std::string getGroupName() const;
    std::vector<Student> getStudents() const;

    ~Group();
};
#endif //GROUP_H
