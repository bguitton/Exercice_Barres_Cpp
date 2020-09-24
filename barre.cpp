/**
 * @brief barre.cpp
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#include "barre.h"
#include <iostream>
using namespace std;

/**
 * @brief Barre::Barre
 * @param _reference
 * @param _longeur
 * @param _densite
 * @param _alliage
 * @details constructeur de Barre
 */
Barre::Barre(const string _reference, const int _longeur, const float _densite, const string _alliage)
{
    reference=_reference;
    longeur=_longeur;
    densite=_densite;
    alliage=_alliage;
    cout<<"constructeur de Barre"<<endl;
}
/**
 * @brief Barre::AfficherCaracteristiques
 * @details afficher Caractéristiques
 */
void Barre::AfficherCaracteristiques()
{
    cout<<"La référence est : "<<reference<<endl;
    cout<<"La longeur est : "<<longeur<<endl;
    cout<<"La densité est : "<<densite<<endl;
    cout<<"Le nom de l'alliage est : "<<alliage<<endl;
}

Barre::~Barre()
{

}
