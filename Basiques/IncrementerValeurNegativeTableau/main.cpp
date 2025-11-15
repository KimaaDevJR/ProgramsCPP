/*

Nom du programme : IncrementerValeurNegativeTableau
But : Incrémenter de 1 les valeurs négatives d'un tableau
Auteur : Cappellaro Romain
Date de dernière modification : 05/11/2025
Remarques :

*/

#include <iostream>
using namespace std;

int main(void)
{

    // Variables

    const short unsigned int NB_CASES = 5;
    float tabEntier[NB_CASES] = { -10, -4, -4, 7, 15 };

    // Traitements

    for (short unsigned int i = 0; i <= NB_CASES - 1; i++)
    {
        if (tabEntier[i] < 0)
        {
            tabEntier[i] += 1;
        }
    }

    // Affichage du tableau

    for (short unsigned int i = 0; i <= NB_CASES - 1; i++)
    {
        cout << tabEntier[i] << " ";
    }

    return 0;
}