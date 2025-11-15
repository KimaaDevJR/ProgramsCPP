/*

Nom du programme : CalculerPrixReduit
But : Calculer le prix réduit résultant
Auteur : Cappellaro Romain
Date de dernière modification : 15/11/2025
Remarques : Procédure

*/

/*

On souhaite élaborer une procédure qui,
à partir d’un prix de départ et d’une réduction exprimée en
pourcentage, calcule le prix réduit résultant.

*/

#include <iostream>
using namespace std;

// Déclaration de la procédure

void prixResultant(float& prixDeDepart, float pourcentage);
// But : Calculer un prix à partir d'un prix de départ et d'un pourcentage de réduction.

int main(void)
{

    // Variables

    float prix;
    float reduction;

    // Traitements

    cout << "Veuillez saisir un prix : ";
    cin >> prix;
    cout << "Veuillez saisir le pourcentage de réduction : ";
    cin >> reduction;
    // Appel de la procédure

    prixResultant(prix, reduction);

    return 0;
}

// Définition de la procédure

void prixResultant(float& prixDeDepart, float pourcentage)
{
    prixDeDepart = prixDeDepart * (1 - pourcentage / 100);
}
