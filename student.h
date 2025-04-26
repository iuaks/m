//
// Created by User on 31.03.2025.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include "Person.h"

class Student : public Person {
private:
    std::string studentID;

public:
    Student();
    Student(const std::string& name, int age, const std::string& id);
    Student(const Student& other);
    Student(Student&& other) noexcept;
    ~Student();

    void setStudentID(const std::string& id);
    std::string getStudentID() const;

    void display() const override;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
    friend std::istream& operator>>(std::istream& is, Student& student);
};


#endif
