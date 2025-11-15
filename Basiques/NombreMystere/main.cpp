/*

Nom du programme : NombreMystere
But : Créer un jeu consistant a trouver un nombre aléatoire, compris entre 0 et 20
Date de dernière modification : 05/11/2025
Auteur : Cappellaro Romain
Remarques : Probablement pas optimal avec la décrémentation de nbErreurs dans l'avant dernier else if, je me suis un peu emmêlé les pinceaux mais ca fonctionne, en respectant + ou - l'algorithme.

*/

#include <iostream>
using namespace std;

int main(void)
{

    // Variables

    short unsigned int nbMystere; // Nombre mystère que l'utilisateur doit trouver
    short unsigned int nbSaisi; // Nombre saisi par l'utilisateur
    short unsigned int nbEssais; // Nombre d'essai(s) réalisé(s) par le joueur au cours de la partie (max 2)
    short unsigned int nbErreurs; // Nombre d'erreur(s) réalisé(es) par le joueur au cours de la partie (max 1)
    bool gagne = false; // Booléen servant à savoir si la partie a été remportée ou non.

    // Traitements

    // Initialisation des compteurs et du nombre mystère

    nbEssais = 0;
    nbErreurs = 0;
    nbMystere = 8;

    // Jouer la partie

    for (nbErreurs = 0; nbErreurs < 2; nbErreurs++)
    {
        cout << "Saisissez un nombre" << endl;
        cin >> nbSaisi;
        nbEssais++;

            if (nbSaisi > nbMystere && nbErreurs == 0)
        {
            cout << "Il ne vous reste qu'une chance !" << endl;
        }
        else if (nbSaisi > nbMystere && nbErreurs == 1)
        {
            break;
        }
        else if (nbSaisi < nbMystere)
        {
            nbErreurs--;
        }
        else if (nbSaisi == nbMystere)
        {
            gagne = true;
            break;
        }
    }

    // Affichage

    if (gagne == true)
    {
        cout << "Vous avez trouvé le chiffre mystère en " << nbEssais << " coups !";
    }
    else
    {
        cout << "Perdu";
    }

    return 0;
}