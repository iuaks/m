//
// Created by User on 31.03.2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
    std::string studentID;
public:
    Student(const std::string& name, int age, const std::string& id);

    void display() const override;
    std::string getID() const;
};

#endif
