/**
 * @brief barrecarree.h
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
#include <iostream>

class BarreCarree : public Barre
{
public:
    BarreCarree(const string _reference, const int _longeur, const float _densite, const string _alliage,const int _cote);
    int CalculerSection();
    int CalculerMasse();
private:
    int cote;
};

#endif // BARRECARREE_H
