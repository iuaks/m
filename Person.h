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
    Person();
    Person(const std::string& name, int age);
    Person(const Person& other);
    Person(Person&& other) noexcept;
    virtual ~Person();

    void setName(const std::string& name);
    std::string getName() const;

    void setAge(int age);
    int getAge() const;

    virtual void display() const;
};




#endif //PERSON_H
