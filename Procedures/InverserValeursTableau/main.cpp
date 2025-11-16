/*

Nom du programme : InverserValeursTableau
But : Inverser les valeurs d'un tableau donné
Auteur : Cappellaro Romain
Date de dernière modification : 16/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

// Déclaration de la procédure

void inverserTableau(float tab[], short unsigned int NBCASES);

int main(void)
{

    // Variables

    const unsigned short int NB_CASES = 5;
    float tableau[NB_CASES] = { 1, 2, 3, 4, 5 };

    // Traitements
    // Appel de la procédure

    inverserTableau(tableau, NB_CASES);

    // Affichage

    for (short unsigned int i = 0; i < NB_CASES; i++)
    {
        cout << tableau[i] << " " << endl;
    }

    return 0;
}

// Définition de la procédure

void inverserTableau(float tab[], short unsigned int NBCASES)
{
    for (unsigned short int i = 0; i < NBCASES / 2; i++)
    {

        float temp;

        temp = tab[i];
        tab[i] = tab[NBCASES - 1 - i];
        tab[NBCASES - 1 - i] = temp;
    }
}