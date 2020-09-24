/**
 * @brief barreronde.h
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(const string _reference, const int _longeur, const float _densite, const string _alliage,const float _diametre);
    int CalculerSection();
    int CalculerMasse();
private:
    float diametre;

};

#endif // BARRERONDE_H
