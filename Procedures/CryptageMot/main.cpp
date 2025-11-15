/*

Nom du programme : CryptageMot
But : Encoder un mot saisi par l'utilisateur selon un tableau de correspondance des caractères.
Auteur : Cappellaro Romain
Date de dernière modification : 07/11/2025
Remarques : Procédures

*/

#include <iostream>
using namespace std;

void remplacerCaractere(string& motApresCodage, unsigned short int indiceDansMot, char carApresCodage);

int main(void)
{

    // Constantes

    const short unsigned int TAILLE_TABLES_CODAGE = 62;

    const char TABLE_CLAIR[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };

    const char TABLE_CODE[] = {
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        '5', '6', '7', '8', '9', '0', '1', '2', '3', '4'
    };

    // Variables

    string motAvantCodage;
    string motApresCodage;
    short unsigned int indiceDansMot;
    short unsigned int indiceDansTable;
    char carAvantCodage;
    char carApresCodage;
    bool caractereTrouve;

    // Traitements
    // (ecran) << Saisir le mot << motAvantCodage

    cout << "Veuillez saisir le mot à encoder.";
    cin >> motAvantCodage;

    // Coder le mot
    // Initialiser le mot

    motApresCodage = motAvantCodage;

    // Coder chaque caractère du mot

    for (indiceDansMot = 0; indiceDansMot < motAvantCodage.size() - 1; indiceDansMot++)
    {
        // Initialiser la recherche

        carAvantCodage = motAvantCodage[indiceDansMot];
        caractereTrouve = false;
        indiceDansTable = 0;

        // Recherche du caractère courant

        while (caractereTrouve == false || indiceDansTable < TAILLE_TABLES_CODAGE)
        {
            if (caractereTrouve == true || indiceDansTable >= TAILLE_TABLES_CODAGE)
            {
                break;
            }
            if (TABLE_CLAIR[indiceDansTable] == carAvantCodage)
            {
                carApresCodage = TABLE_CODE[indiceDansTable];
                caractereTrouve = true;
            }

            indiceDansTable = indiceDansTable + 1;
        }

        // Encoder le caractère courant si nécessaire

        if (caractereTrouve == true)
        {
            remplacerCaractere(motApresCodage, indiceDansMot, carApresCodage);
        }
    }

    // Afficher le mot codé

    cout << "Resultat du codage : " << motApresCodage;

    return 0;
}

void remplacerCaractere(string& motApresCodage, unsigned short int indiceDansMot, char carApresCodage)
{
    motApresCodage[indiceDansMot] = carApresCodage;
}