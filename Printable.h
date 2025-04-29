//
// Created by User on 29.04.2025.
//

#ifndef PRINTABLE_H
#define PRINTABLE_H

class Printable {
public:
    virtual void printDetails() const = 0;
    virtual ~Printable() = default;
};

#endif //PRINTABLE_H
