//
// Created by User on 28.04.2025.
//

#ifndef TEACHER_H
#define TEACHER_H
#pragma once
#include "Person.h"
#include "Printable.h"

class Teacher final : public Person, public Printable {
private:
    std::string subject;

public:
    Teacher();
    Teacher(const std::string& name, int age, const std::string& subject);

    void display() const override;
    std::string getRole() const override;
    void sayHello() const override;
    void printDetails() const override;
};


#endif //TEACHER_H