//
// Created by Magda Maciąga on 29/10/2025.
//

#ifndef LAB03_HUMAN_H
#define LAB03_HUMAN_H
#include <iostream>
using namespace std;


class Human {
private:
    int age;
public:
    Human();
    virtual ~Human();
    void setAge(int newAge);
    int isAdult();
    int pesel;
    string firstName;
    string lastName;

};


#endif //LAB03_HUMAN_H