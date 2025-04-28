//
// Created by User on 31.03.2025.
//
#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    std::string courseName;
    std::string lecturer;
public:
    Course();
    Course(std::string name, std::string lect);

    std::string getCourseName() const;
    std::string getLecturer() const;

    ~Course();
};

#endif //COURSE_H
