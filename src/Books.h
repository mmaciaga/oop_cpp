//
// Created by Magda Maciąga on 29/10/2025.
//

#ifndef LAB03_BOOKS_H
#define LAB03_BOOKS_H

#include <iostream>

#include "Items.h"
using namespace std;

class Books: public Items {
    public:
    Books();
    virtual ~Books();
    string genre;
    int numPages;
};


#endif //LAB03_BOOKS_H