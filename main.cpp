
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Group.h"

int main() {
    Student s1("Maksim", 16, "L1");
    Student s2 = s1;
    Student s3 = std::move(s2);

    std::cout << s1 << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s3 << std::endl;

    Teacher t1("Ivan Stepan", 40, "IT");
    t1.display();
    std::cout << std::endl;

    Group g1("IPZ-23");
    g1.addStudent(s1);
    g1.addStudent(s3);

    std::cout << "Group: " << std::endl;
    g1.showGroup();

    Student s4;
    std::cout << "Enter new student:" << std::endl;
    std::cin >> s4;
    g1.addStudent(s4);

    std::cout << "Group Update: " << std::endl;
    g1.showGroup();

    return 0;
}
