
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <vector>

void printInfo(const Person& person) {
    person.display();
    std::cout << "\nRole: " << person.getRole() << std::endl;
    person.sayHello();
}

int main() {
    Person* p1 = new Student("Maksym", 16, "S001");
    Person* p2 = new Teacher("Ivan Ivanovych", 45, "Informatyka");

    std::cout << "\n-- Dynamic Polymorphism via pointers --" << std::endl;
    p1->display(); std::cout << std::endl;
    p2->display(); std::cout << std::endl;

    std::cout << "\n-- Polymorphism via reference --" << std::endl;
    printInfo(*p1);
    printInfo(*p2);

    std::cout << "\n-- Interface usage --" << std::endl;
    std::vector<Printable*> list;
    list.push_back(new Student("Olha", 18, "S002"));
    list.push_back(new Teacher("Mariia Ivanivna", 50, "Matematyka"));

    for (auto p : list) {
        p->printDetails();
        delete p;
    }

    std::cout << "\n-- Static binding problem --" << std::endl;
    Person p3 = Student("Inna", 20, "S003");
    p3.display();

    delete p1;
    delete p2;
    return 0;
}
