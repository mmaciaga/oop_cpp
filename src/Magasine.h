//
// Created by Magda Maciąga on 05/11/2025.
//

#ifndef LAB03_MAGASINE_H
#define LAB03_MAGASINE_H
#include "Items.h"
#include <iostream>
using namespace std;

class Magasine: public Items{
    public:
    Magasine();
    ~Magasine();
    int numPages;
};


#endif //LAB03_MAGASINE_H