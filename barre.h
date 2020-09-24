/**
 * @brief barre.h
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#ifndef BARRE_H
#define BARRE_H
#include <string>

using namespace std;

class Barre
{
public:
    Barre(const string _reference,const int _longeur,const float _densite,const string _alliage);
    void AfficherCaracteristiques();

    ~Barre();


protected:
    string reference;
    int longeur;
    float densite;
    string alliage;
};

#endif // BARRE_H
