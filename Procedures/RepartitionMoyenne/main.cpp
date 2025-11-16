/*

Nom du programme : RepartitionMoyenne
But : A partir d'un tableau donné, calculer le nombre d'étudiants ayant la moyenne ou non.
Auteur : Cappellaro Romain
Date de dernière modification : 16/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

// Struct

struct UnEtudiant
{
    string nom; // nom de l'étudiant
    string prenom; // prénom de l'étudiant
    float note; // note obtenue à l'examen
};
const unsigned int EFFECTIF_S1 = 15;
UnEtudiant notesExamDu15fevrier[EFFECTIF_S1] = {
    { "Almeras", "Valentin", 15 }, { "Gueguen", "Lucie", 8.5 },
    { "Pomeroy", "Thibault", 4.5 }, { "Souchon", "Elodie", 18 },
    { "Besnard", "Emmanuel", 12 }, { "Gaudreau", "Lucien", 0 },
    { "Duret", "Christelle", 10.5 }, { "Laffitte", "Anna", 13 },
    { "Barbier", "Remi", 15 }, { "Blondeau", "Denise", 7 },
    { "Berlioz", "Gabriel", 9.5 }, { "Dupont", "Benjamin", 3 },
    { "Maret", "Ludovic", 13.5 }, { "Boutin", "Alain", 12 },
    { "Dubusisson", "Marie", 19 }
};

// Déclaration de la procédure

void moyenneOuPas(UnEtudiant notesExamDu15fevrier[EFFECTIF_S1], const unsigned int EFFECTIF_S1);
// But :

int main(void)
{

    // Traitements
    // Appel de la procédure

    moyenneOuPas(notesExamDu15fevrier, EFFECTIF_S1);

    return 0;
}

// Définition de la procédure

void moyenneOuPas(UnEtudiant notesExamDu15fevrier[EFFECTIF_S1], const unsigned int EFFECTIF_S1)
{
    short unsigned int countMoyenne = 0;
    short unsigned int countPasMoyenne = 0;

    for (short unsigned int i = 0; i < EFFECTIF_S1; i++)
    {
        if (notesExamDu15fevrier[i].note >= 10)
        {
            countMoyenne++;
        }
        else
        {
            countPasMoyenne++;
        }
    }

    cout << "Il y a " << countMoyenne << " étudiants qui ont la moyenne, et " << countPasMoyenne << " qui ne l'ont pas.";
}