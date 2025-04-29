//
// Created by User on 26.04.2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include "Printable.h"

class Person {
protected:
    std::string name;
    int age;

public:
    Person();
    Person(const std::string& name, int age);
    virtual ~Person();

    virtual void display() const;
    virtual std::string getRole() const;
    virtual void sayHello() const = 0;
};



#endif //PERSON_H
