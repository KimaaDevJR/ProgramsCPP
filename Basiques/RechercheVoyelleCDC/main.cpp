/*

Nom du programme : RechercheVoyelleTableau
But : Rechercher la première voyelle dans un tableau
Auteur : Cappellaro Romain
Date de dernière modification : 05/11/2025
Remarques :

*/

#include <iostream>
using namespace std;

int main(void)
{

    // Variables

    bool trouve;
    short unsigned int indiceLettre;
    short unsigned int dernierIndice;
    short unsigned int posVoyelle;
    string chaine = "Lr festival a commencé, comme d'habitude, par la grande parade";

    // Traitements
    // Initialisation des variables

    trouve = false;
    dernierIndice = (chaine.size() - 1);
    indiceLettre = 0;

    // Rechercher l'indice

    while (trouve == false)
    {
        if (indiceLettre > dernierIndice)
        {
            break;
        }
        // Verifier si indiceLettre est une voyelle
        else if (chaine[indiceLettre] == 'a' || chaine[indiceLettre] == 'e' || chaine[indiceLettre] == 'i' || chaine[indiceLettre] == 'o' || chaine[indiceLettre] == 'u' || chaine[indiceLettre] == 'y')
        {
            trouve = true;
            posVoyelle = indiceLettre + 1;
            break;
        }
        else
        {
            indiceLettre = indiceLettre + 1;
        }
    }

    // Affichage

    if (trouve == true)
    {
        cout << "La voyelle se trouve à : " << posVoyelle;
    }
    else
    {
        cout << "Aucune voyelle trouvée";
    }

    return 0;
}