#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <algorithm>
#include <string>
#include <sstream>
#include "Student.h"
#include "Teacher.h"

const std::string DATA_FILE = "data.txt";
const std::string ADMIN_PASSWORD = "admin123";

void saveToFile(const std::vector<std::shared_ptr<Person>>& people) {
    std::ofstream out(DATA_FILE);
    for (const auto& p : people) {
        if (auto s = dynamic_cast<Student*>(p.get())) {
            out << "Student," << s->getName() << "," << s->getAge() << "," << s->getID() << "\n";
        } else if (auto t = dynamic_cast<Teacher*>(p.get())) {
            out << "Teacher," << t->getName() << "," << t->getAge() << "," << t->getSubject() << "\n";
        }
    }
}

void loadFromFile(std::vector<std::shared_ptr<Person>>& people) {
    std::ifstream in(DATA_FILE);
    std::string line;
    while (getline(in, line)) {
        std::istringstream ss(line);
        std::string type, name, extra, ageStr;

        getline(ss, type, ',');
        getline(ss, name, ',');
        getline(ss, ageStr, ',');
        getline(ss, extra);

        int age = std::stoi(ageStr);

        if (type == "Student") {
            people.push_back(std::make_shared<Student>(name, age, extra));
        } else if (type == "Teacher") {
            people.push_back(std::make_shared<Teacher>(name, age, extra));
        }
    }
}

bool isValidName(const std::string& name) {
    return !name.empty() && std::all_of(name.begin(), name.end(), [](char c) {
        return std::isalpha(c) || std::isspace(c);
    });
}

int inputValidatedAge() {
    std::string input;
    int age = -1;
    while (true) {
        std::cout << "Enter age: ";
        std::getline(std::cin, input);
        try {
            age = std::stoi(input);
            if (age > 0) break;
            else std::cout << "Age must be positive.\n";
        } catch (...) {
            std::cout << "Invalid input. Please enter a number.\n";
        }
    }
    return age;
}

std::string inputValidatedString(const std::string& prompt) {
    std::string input;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (!input.empty()) break;
        std::cout << "Input cannot be empty.\n";
    }
    return input;
}

std::string inputValidatedName(const std::string& prompt) {
    std::string name;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, name);
        if (isValidName(name)) break;
        std::cout << "Invalid name. Only letters and spaces allowed.\n";
    }
    return name;
}

void adminMenu(std::vector<std::shared_ptr<Person>>& people) {
    int choice;
    do {
        std::cout << "\n1. Add Student\n2. Add Teacher\n3. Show All\n4. Save & Exit\n> ";
        std::cin >> choice;
        std::cin.ignore();
        if (choice == 1) {
            std::string name = inputValidatedName("Enter student name: ");
            int age = inputValidatedAge();
            std::string id = inputValidatedString("Enter ID: ");
            people.push_back(std::make_shared<Student>(name, age, id));
        } else if (choice == 2) {
            std::string name = inputValidatedName("Enter teacher name: ");
            int age = inputValidatedAge();
            std::string subject = inputValidatedString("Enter subject: ");
            people.push_back(std::make_shared<Teacher>(name, age, subject));
        } else if (choice == 3) {
            for (const auto& p : people) p->display();
        }
    } while (choice != 4);
    saveToFile(people);
}


void userMenu(const std::vector<std::shared_ptr<Person>>& people) {
    std::cout << "\nAvailable records:\n";
    for (const auto& p : people) p->display();
}

int main() {
    std::vector<std::shared_ptr<Person>> people;
    loadFromFile(people);

    int role;
    std::cout << "1. Administrator\n2. User\n> ";
    std::cin >> role;
    if (role == 1) {
        std::string pass;
        std::cout << "Enter password: ";
        std::cin >> pass;
        if (pass == ADMIN_PASSWORD) {
            adminMenu(people);
        } else {
            std::cout << "Wrong password!\n";
        }
    } else if (role == 2) {
        userMenu(people);
    } else {
        std::cout << "Invalid option.\n";
    }
    return 0;
}
