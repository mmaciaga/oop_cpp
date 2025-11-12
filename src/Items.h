//
// Created by Magda Maciąga on 05/11/2025.
//

#ifndef LAB03_ITEMS_H
#define LAB03_ITEMS_H
#include <iostream>

#include "Location.h"
using namespace std;

class Items: public Location {
    public:
    Items();
    virtual ~Items();
    string getTitle;
    string author;

};


#endif //LAB03_ITEMS_H