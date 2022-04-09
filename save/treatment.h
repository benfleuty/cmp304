//
// Created by ben on 05/04/2022.
//

#ifndef ASSESSMENT_TREATMENT_H
#define ASSESSMENT_TREATMENT_H


class treatment {
    int completion;
    int type;
    int effectiveness;
public:
    int getCompletion();

    enum type {
        cure, suppression, management
    };

    int getType();

    void setType(int);

    int getEffectiveness();

    void setEffectiveness(int);
};


#endif //ASSESSMENT_TREATMENT_H
