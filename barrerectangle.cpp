/**
 * @brief barrerectangle.cpp
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#include "barrerectangle.h"

/**
 * @brief BarreRectangle::BarreRectangle
 * @param _reference
 * @param _longeur
 * @param _densite
 * @param _alliage
 * @param _largeur
 * @details constructeur de barre rectangle
 */

BarreRectangle::BarreRectangle(const string _reference, const int _longeur, const float _densite, const string _alliage, const int _largeur):
    Barre(_reference,_longeur,_densite,_alliage),
    largeur(_largeur)
{
    cout<<"Constructeur de Barre Rectangle"<<endl;
}
/**
 * @brief BarreRectangle::CalculerSection
 * @return section
 */
int BarreRectangle::CalculerSection()
{

    return longeur*largeur;

}
/**
 * @brief BarreRectangle::CalculerMasse
 * @return Masse
 */
int BarreRectangle::CalculerMasse()
{


    return longeur*CalculerSection()*densite;
}
