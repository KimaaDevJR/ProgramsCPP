/*

Nom du programme : MoyenneTableau
But : Calculer la moyenne d'un tableau à l'aide d'une fonction
Auteur : Cappellaro Romain
Date de dernière modification : 09/11/2025
Remarques : Fonctions

*/

#include <iostream>
using namespace std;

// Déclaration de la fonction

float moyTableau(const float TAB_A_VERIFIER[], short unsigned int NB_CASES, float moy, float somme);

int main(void)
{

    // Variables

    short unsigned int NB_CASES = 8;
    const float TABLEAU_VERIF[NB_CASES] = { 14, 10, 5, 14, 5, 20, 15, 16 };
    float moyenne = 0;
    float somme = 0;

    // Traitements

    moyenne = moyTableau(TABLEAU_VERIF, NB_CASES, moyenne, somme);

    // Affichage

    cout << "La moyenne est de : " << moyenne;

    return 0;
}

// Définition de la fonction

float moyTableau(const float TAB_A_VERIFIER[], short unsigned int NB_CASES, float moy, float som)
{
    for (short unsigned int i = 0; i < NB_CASES; i++)
    {
        som += TAB_A_VERIFIER[i];
        moy = som / NB_CASES;
    }

    return moy;
}
