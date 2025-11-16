/*

Nom du programme : NombresPremiersEratosthène
But : Parcourir un tableau composé de true, et, selon si l'indice est un nombre premier ou non, le rendre false.
Auteur : Cappellaro Romain (et un peu Chat tho)
Date de dernière modification : 16/11/2025
Remarques : Procédures

*/

#include <iostream>
#include <math.h>
using namespace std;

// Déclaration de la procédure

void eratosthene(bool tableau[], const unsigned int NBCASES);
// But :

int main(void)
{

    // Variables

    const unsigned int NB_CASES = 500;
    bool tab[NB_CASES];

    // Traitements

    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        tab[i] = true;
    }

    tab[0] = false;
    tab[1] = false;

    // Appel de la procédure

    eratosthene(tab, NB_CASES);

    // Affichage

    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        if (tab[i] == true)
        {
            cout << i << " " << endl;
        }
    }

    return 0;
}

// Définition de la procédure
void eratosthene(bool tableau[], const unsigned int NBCASES)
{
    double limite = sqrt(NBCASES);
    for (unsigned int i = 2; i <= limite; i++)
    {
        if (tableau[i] == true)
        {
            for (unsigned int multiple = i * i; multiple < NBCASES; multiple += i)
            {
                tableau[multiple] = false;
            }
        }
    }
}
