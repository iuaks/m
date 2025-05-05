//
// Created by User on 26.04.2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& name, int age);
    virtual ~Person();

    std::string getName() const;
    int getAge() const;

    virtual void display() const = 0;
};

#endif //PERSON_H
