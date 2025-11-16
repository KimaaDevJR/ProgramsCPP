/*

Nom du programme : CompterValeursPositivesTableau
But : Compter les valeurs positives d'un tableau
Auteur : Cappellaro Romain
Date de dernière modification : 16/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

// Déclaration de la procédure

void compterValeurs(float tab[], short unsigned int NBCASES, short unsigned int count);
// But : Compter les valeurs positives d'un tableau donné

int main(void)
{

    // Variables

    const short unsigned int NB_CASES = 10;
    float tableau[NB_CASES] = { -5, -7, -7, 14, 24, -7, -95, -87, 4, -7 };
    short unsigned int compteur = 0;

    // Traitements
    // Appel de la procédure

    compterValeurs(tableau, NB_CASES, compteur);

    // Affichage
    return 0;
}

// Définition de la procédure

void compterValeurs(float tab[], short unsigned int NBCASES, short unsigned int count)
{
    for (short unsigned int i = 0; i < NBCASES; i++)
    {
        if (tab[i] > 0)
        {
            cout << tab[i] << " " << endl;
            count++;
        }
    }

    cout << "Il y a " << count << " valeurs positives dans ce tableau.";
}