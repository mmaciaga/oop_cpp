//
// Created by Magda Maciąga on 29/10/2025.
//

#ifndef LAB03_WORKER_H
#define LAB03_WORKER_H

#include "human.h"
#include <iostream>
using namespace std;

class Worker: public Human {
public:
    Worker();
    virtual ~Worker();
    string jobTitle;
    int salary;
};


#endif //LAB03_WORKER_H