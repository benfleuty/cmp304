//
// Created by ben on 05/04/2022.
//

#ifndef ASSESSMENT_DISEASE_H
#define ASSESSMENT_DISEASE_H

#include "treatment.h"

class disease {
    treatment treatments[];
    int likelyhood;
public:
    void addTreatment(treatment);
    void removeTreatment(treatment);
    treatment* getTreatments(treatment);

    int getLikelyhood();
    void setLikelyhood(int);
};


#endif //ASSESSMENT_DISEASE_H
