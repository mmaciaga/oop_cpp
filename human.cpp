//
// Created by Magda Maciąga on 29/10/2025.
//

#include "human.h"

Human::Human() {
    age = 0;
}

Human::~Human() {

}

int Human::isAdult() {

    return age >= 18;
}

void Human::setAge(int newAge) {
    if (age == 0) {
        age = newAge;
    }

}