/*

Nom du programme : Echanger2CasesTableau
But : Echanger deux cases d'un tableau
Auteur : Cappellaro Romain
Date de dernière modification : 07/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

// Déclaration de la procédure

void echanger2Cases(float TAB[], short unsigned int& indiceTab1, short unsigned int& indiceTab2);
// But

int main(void)
{

    // Variables

    const short unsigned int NB_CASES = 10;
    float BONJOUR[NB_CASES] = { 15, 100, 200, 300, 400, 500, 666, 777, 888, 999 };
    short unsigned int indice1;
    short unsigned int indice2;

    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        cout << BONJOUR[i] << " " << endl;
    }

    cout << "Veuillez saisir l'indice à échanger : ";
    cin >> indice1;
    cout << "Veuillez saisir l'indice à échanger : ";
    cin >> indice2;

    // Traitements
    // Appel de la procédure

    echanger2Cases(BONJOUR, indice1, indice2);

    for (unsigned int i = 0; i < NB_CASES; i++)
    {
        cout << BONJOUR[i] << " " << endl;
    }

    // Affichage

    return 0;
}

// Définition de la procédure

void echanger2Cases(float TAB[], short unsigned int& indiceTab1, short unsigned int& indiceTab2)
{
    float temp = TAB[indiceTab1];
    TAB[indiceTab1] = TAB[indiceTab2];
    TAB[indiceTab2] = temp;
}