//
// Created by ben on 05/04/2022.
//

#include "treatment.h"

int treatment::getCompletion() {
    return this->completion;
}

int treatment::getType() {
    return this->type;
}

int treatment::getEffectiveness() {
    return this->effectiveness;
}

void treatment::setEffectiveness(int input) {
    effectiveness = input;
}

void treatment::setType(int input) {
    type = input;
}
