
#include <iostream>
#include <sstream>
#include "Student.h"
#include "Teacher.h"

int main() {
    Student s1("Maksim", 16, "S001");
    Student s2 = s1;
    Student s3 = std::move(s2);

    std::cout << s1 << std::endl;
    std::cout << s3 << std::endl;

    Teacher t1("Ivan Ivanovich", 40, "IT");
    t1.display();
    std::cout << std::endl;

    Student s4;
    std::cin >> s4;
    std::cout << s4 << std::endl;

    return 0;
}
