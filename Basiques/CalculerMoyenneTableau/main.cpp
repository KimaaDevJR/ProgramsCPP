/*

Nom du programme : CalculerMoyenneTableau
But : Calculer la moyenne des valeurs contenues dans un tableau
Auteur : Cappellaro Romain
Date de dernière modification : 05/11/2025
Remarques :

*/

#include <iostream>
using namespace std;

int main(void)
{

    // Variables

    const unsigned short int NB_CASES = 15;
    float tab[NB_CASES] = { 1, 14, 35, 53.5, 23, 1, 53, 4, 45, 15, 14, 11, 454, 23, 23 };
    float moyenne;
    float somme;

    // Traitements
    // Initialisation de somme

    somme = 0;

    // Calculer la somme

    for (short unsigned int i = 0; i <= NB_CASES - 1; i++)
    {
        somme = somme + tab[i];
    }

    // Calcul de la moyenne

    moyenne = somme / NB_CASES;
    cout << "La moyenne du tableau est : " << moyenne;
    return 0;
}