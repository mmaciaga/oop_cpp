//
// Created by Magda Maciąga on 05/11/2025.
//

#ifndef LAB03_CD_H
#define LAB03_CD_H
#include "Items.h"


class CD: public Items {
    public:
    CD();
    virtual ~CD();
    int lengthCD; //in minutes
};


#endif //LAB03_CD_H