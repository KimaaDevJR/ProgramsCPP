/*

Nom du programme : VerifNotes
But : Vérifie si une note saisie au clavier est une note (doit être comprise entre 0 et 20)
Auteur : Cappellaro Romain
Date de dernière modification : 08/11/2025
Remarques : Fonctions

*/
#include <iostream>
using namespace std;

bool verifNotes(double note);
// But :

int main(void)
{

    // Variables

    double noteAVerifier;

    // Traitements

    cout << "Saisissez le nombre à vérifier : ";
    cin >> noteAVerifier;

    // Affichage

    if (verifNotes(noteAVerifier))
    {
        cout << "Le nombre vérifié est bien une note.";
    }
    else
    {
        cout << "Le nombre vérifié n'est pas une note";
    }

    return 0;
}

bool verifNotes(double note)
{
    return note >= 0 && note <= 20 ? true : false;
}