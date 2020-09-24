#include "barreronde.h"
#include <iostream>

/**
 * @brief BarreRonde::BarreRonde
 * @param _reference
 * @param _longeur
 * @param _densite
 * @param _alliage
 * @param _diametre
 * @details Constructeur de Barre
 */


BarreRonde::BarreRonde(const string _reference, const int _longeur, const float _densite, const string _alliage, const float _diametre):
Barre(_reference,_longeur,_densite,_alliage),
  diametre(_diametre)

{

    cout<<"Constructeur de Barre rond"<<endl;
}
/**
 * @brief BarreRonde::CalculerSection
 * @return la section
 * @details Calculer la section
 */
int BarreRonde::CalculerSection()
{
    return 3.14*(diametre*diametre)/4;

}
/**
 * @brief BarreRonde::CalculerMasse
 * @return la masse
 *
 */
int BarreRonde::CalculerMasse()
{


    return longeur*CalculerSection()*densite;
}
