//
// Created by User on 26.04.2025.
//

#include "Person.h"

Person::Person() : name("Unknown"), age(0) {}
Person::Person(const std::string& n, int a) : name(n), age(a) {}
Person::Person(const Person& other) : name(other.name), age(other.age) {}
Person::Person(Person&& other) noexcept : name(std::move(other.name)), age(other.age) {}

Person::~Person() {}

void Person::setName(const std::string& n) { name = n; }
std::string Person::getName() const { return name; }

void Person::setAge(int a) { age = a; }
int Person::getAge() const { return age; }

void Person::display() const {
    std::cout << "Name: " << name << ", Age: " << age;
}
