/**
 * @brief barrecarre.cpp
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#include "barrecarree.h"

/**
 * @brief BarreCarree::BarreCarree
 * @param _reference
 * @param _longeur
 * @param _densite
 * @param _alliage
 * @param _cote
 * @details Constructeur de barreCarree
 */
BarreCarree::BarreCarree(const string _reference, const int _longeur, const float _densite, const string _alliage, const int _cote):
    Barre(_reference,_longeur,_densite,_alliage),
    cote(_cote)

{
    cout<<"Constructeur Barre Carrée"<<endl;
}
/**
 * @brief BarreCarree::CalculerSection
 * @return section
 */
int BarreCarree::CalculerSection()
{

    return 4*cote;

}
/**
 * @brief BarreCarree::CalculerMasse
 * @return masse
 */
int BarreCarree::CalculerMasse()
{


    return longeur*CalculerSection()*densite;
}
