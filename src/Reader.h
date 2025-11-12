//
// Created by Magda Maciąga on 29/10/2025.
//

#ifndef LAB03_READER_H
#define LAB03_READER_H
#include "human.h"
#include <iostream>
using namespace std;

class Reader: public Human {
    public:
        Reader();
        virtual ~Reader();
        int booksRead;
        int cardNumber;

};


#endif //LAB03_READER_H

