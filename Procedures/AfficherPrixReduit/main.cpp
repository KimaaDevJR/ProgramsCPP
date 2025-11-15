/*

Nom du programme : AfficherPrixReduit
But : Afficher le nouveau prix d'un produit, a partir d'un prix de départ et d'une réduction exprimée en pourcentage.
Auteur : Cappellaro Romain
Date de dernière modification : 12/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

// Déclaration de la procédure
void prixApresReduction(float &prixBase, float reduc);
// But : Calculer un prix à partir d'un prix de départ et d'un pourcentage de réduction.
int main(void)
{

    // Variables

    float prixDeBase;
    float reduction;

    // Traitements
    // (ecran) << l'utilisateur saisit les valeurs << prixDeBase, reduction

    cout << "Veuillez saisir un prix : ";
    cin >> prixDeBase;
    cout << "Veuillez saisir le pourcentage : ";
    cin >> reduction;

    // Appel de la procédure

    prixApresReduction(prixDeBase, reduction);

    // Affichage

    cout << prixDeBase;

    return 0;
}

// Définition de la procédure

void prixApresReduction(float &prixBase, float reduc)
{
    prixBase = prixBase * (1 - reduc / 100);
}