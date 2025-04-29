//
// Created by User on 31.03.2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include "Person.h"
#include "Printable.h"

class Student : public Person, public Printable {
private:
    std::string studentID;

public:
    Student();
    Student(const std::string& name, int age, const std::string& id);

    void display() const override;
    std::string getRole() const override;
    void sayHello() const override;
    void printDetails() const override;
};

#endif
