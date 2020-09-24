/**
 * @brief main
 * @details permet d'afficher toute les caratéristque et d'instancier les types de barres
 * @author GUITTON Baptiste
 * @date 24/09/2020
 */
#include <iostream>
#include "barre.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "barrecarree.h"
using namespace std;

int main()
{
    BarreRonde laRonde("1A23",10,2.7,"Aluminium",3);
    BarreRectangle laRectangle("4A56",10,2.7,"Aluminium",4);
    BarreCarree laCarree("7A89",10,2.7,"Aluminium",5);
    laRonde.Barre::AfficherCaracteristiques();
    laCarree.Barre::AfficherCaracteristiques();
    laRectangle.Barre::AfficherCaracteristiques();
    cout<<"La masse  de la Barre rond est : "<<laRonde.CalculerMasse()<<endl;
    cout<<"La masse de la Barre carrée est : "<<laCarree.CalculerMasse()<<endl;
    cout<<"La masse de la Barre rectangle est : "<<laRectangle.CalculerMasse()<<endl;

    return 0;
}
