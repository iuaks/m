//
// Created by User on 28.04.2025.
//

#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person {
    std::string subject;
public:
    Teacher(const std::string& name, int age, const std::string& subject);

    void display() const override;
    std::string getSubject() const;
    void printDetails() const;
};
#endif //TEACHER_H