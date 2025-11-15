/*

Nom du programme : NombreEmployés
But : Retourner le nombre d'employés habitant dans une ville donnée.
Auteur : Cappellaro Romain
Date de dernière modification : 10/11/2025
Remarques : Fonctions

*/

#include <iostream>
using namespace std;

// Déclaration des structs

struct Adresse
{
    string numRue; // par exemple "2bis"
    string nomRue; // par exemple "allée du Parc Montaury"
    unsigned int codePostal; // par exemple 64600
    string ville; // par exemple "Anglet"
};

struct Personne
{
    string nom; // Le nom de la personne
    string prenom; // Le prénom de la personne
    Adresse adresse; // L'adresse de la personne
};

// Déclaration de la fonction

short unsigned int nbEmployesCodePostal(const Personne employesIUT, int nb);
// But : Retourne le nombre d'employés habitant dans une ville ayant un code postal donné.

int main(void)
{

    // Variables
    Adresse a;
    Personne p;
    const unsigned int NB_EMPLOYES_IUT = 95; // Le nombre d'employés à l'IUT :
    Personne employesIut[NB_EMPLOYES_IUT]; // Liste des employés de l'IUT

    // Traitements

    nbEmployesCodePostal(p, a);
        // Affichage
        return 0;
}

short unsigned int nbEmployesCodePostal(const Personne employesIUT, int nb)
{
    string nomRecherche;
    string prenomRecherche;
    unsigned int nb = 95;

    cout << "Veuillez saisir votre nom : " << endl;
    cin >> nomRecherche;
    cout << "Veuillez saisir votre prénom : " << endl;
    cin >> prenomRecherche;

    for ( unsigned int i = 0 ; i < nb ; i++)
    {
        if (employesIUT[nb].nom == nomRecherche && employesIUT[i].prenom == prenomRecherche)
        {
            return employesIUT[i].adresse;
        }
        
    }
    
};