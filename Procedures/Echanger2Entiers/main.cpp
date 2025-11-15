/*

Nom du programme : Echanger2Entiers
But : Echanger deux entiers
Auteur : Cappellaro Romain
Date de dernière modification : 07/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

// Déclaration de la procédure

void echanger2Valeurs(unsigned int &nb1, unsigned int &nb2, unsigned int &copieNb1);
int main(void)
{

    // Variables

    unsigned int nombre1;
    unsigned int nombre2;
    unsigned int copieNombre1;

    // Traitements

    cout << "Veuillez saisir un nombre : ";
    cin >> nombre1;
    cout << "Veuillez saisir un nouveau nombre : ";
    cin >> nombre2;

    copieNombre1 = nombre1;

    // Appel de la procédure

    echanger2Valeurs(nombre1, nombre2, copieNombre1);

    // Affichage

    cout << nombre1 << " " << nombre2;

    return 0;
}
 
// Définition de la procédure

void echanger2Valeurs(unsigned int &nb1, unsigned int &nb2, unsigned int &copieNb1)
{
    copieNb1 = nb1;
    nb1 = nb2;
    nb2 = copieNb1;
}