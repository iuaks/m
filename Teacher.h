//
// Created by User on 28.04.2025.
//

#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"

class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher();
    Teacher(const std::string& name, int age, const std::string& subject);
    void setSubject(const std::string& subject);
    std::string getSubject() const;

    void display() const override;
};



#endif //TEACHER_H