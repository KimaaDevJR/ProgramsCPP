/*

Nom du programme : ValeurAbsolue
But : Retourne la valeur absolue d'un nombre saisi au clavier
Auteur : Cappellaro Romain
Date de dernière modification : 08/11/2025
Remarques : Fonctions

*/
#include <iostream>
using namespace std;

double valAbsolue(double val1);

int main(void) 
{

    // Variables 

    double valeur1;

    // Traitements

    cout << "Saisissez un nombre : " << endl;
    cin >> valeur1;

    cout << "La valeur absolue de " << valeur1 << " est : " << valAbsolue(valeur1);

    return 0;
}

double valAbsolue(double val1)
{
    return val1 > 0 ? val1: - val1;
}