/**
 * @brief barrerectangle.h
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"
#include <iostream>


class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string _reference, const int _longeur, const float _densite, const string _alliage,const int _largeur);
    int CalculerSection();
    int CalculerMasse();
private:
    int largeur;
};

#endif // BARRERECTANGLE_H
