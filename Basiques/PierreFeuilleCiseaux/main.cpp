/*

Nom du programme : PierreFeuilleCiseaux
But : Déterminer le vainqueur d'une manche du jeu "Pierre Feuille Ciseaux"
Auteur : Cappellaro Romain
Date de dernière modification : 05/11/2025
Remarques :

*/

#include <iostream>
using namespace std;

int main(void)
{

    // Variables

    string choixJ1; // Choix du Joueur 1
    string choixJ2; // Choix du Joueur 2
    string vainqueur; // Variable contenant le vainqueur de la manche.

    // Traitements
    // (ecran) >> SaisirChoixJoueurs >> choixJ1 & choix J2

    cout << "Saisir le choix du Joueur 1 (Pierre / Feuille / Ciseaux) : " << endl;
    cin >> choixJ1;
    cout << "Saisir le choix du Joueur 2 (Pierre / Feuille / Ciseaux) : " << endl;
    cin >> choixJ2;

    // DeterminerGagnant

    if (choixJ1 == choixJ2)
    {
        vainqueur = "Egalite";
    }
    else if (choixJ1 == "Pierre" && choixJ2 == "Ciseaux" || choixJ1 == "Ciseaux" && choixJ2 == "Feuille" || choixJ1 == "Feuille" && choixJ2 == "Pierre")
    {
        vainqueur = "Joueur 1 remporte la manche !";
    }
    else
    {
        vainqueur = "Joueur 2 remporte la manche !";
    }

    // Affichage vainqueur >> (ecran)

    cout << vainqueur;

    return 0;
}