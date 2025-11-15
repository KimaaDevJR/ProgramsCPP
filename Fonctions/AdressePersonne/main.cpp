/*

Nom du programme : AdressePersonne
But : Afficher l'adresse d'une personne
Auteur : Cappellaro Romain
Date de dernière modification : 09/11/2025
Remarques : Fonctions

*/
#include <iostream>
using namespace std;

// Déclaration de la fonction

// Déclaration des structs

struct Adresse
{
    string numRue;
    string nomRue;
    unsigned int codePostal;
    string ville;
};

struct Personne
{
    string nom;
    string prenom;
    Adresse adresse;
};

Adresse saisirAdressePerso(Personne &p);

int main(void)
{
    Personne p;
    Adresse adressePerso = saisirAdressePerso(p);

    cout << p.nom << " " << p.prenom << " habite au : " << p.adresse.numRue << " " << p.adresse.nomRue << ", " << p.adresse.codePostal << " " << p.adresse.ville << ".";
    
    return 0;
}

Adresse saisirAdressePerso(Personne &p)
{
    cout << "Saisissez votre nom : " << endl;
    cin >> p.nom;
    cout << "Saisissez votre prénom : " << endl;
    cin >> p.prenom;
    cout << "Saisissez le numéro de votre habitation : " << endl;
    cin >> p.adresse.numRue;
    cin.ignore();
    cout << "Saisissez le nom de votre rue : " << endl;
    getline(cin, p.adresse.nomRue);
    cout << "Saisissez le code postal de votre ville : " << endl;
    cin >> p.adresse.codePostal;
    cout << "Saisissez le nom de votre ville : " << endl;
    cin >> p.adresse.ville;

    return p.adresse;

}