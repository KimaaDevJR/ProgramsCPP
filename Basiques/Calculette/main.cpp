/*

Nom du programme : Calculette
But : Créer un outil de calcul pouvant utiliser les 4 opérations principales.
Créateur : Cappellaro Romain (rcappellaro@iut-bayonne.univ-pau.fr)
Remarques : 

*/
#include <iostream>
using namespace std;

int main(void)
{
    // Variables 
    float val1;
    float val2;
    char oper;
    
    // Traitements 
    // () >> recuperer val1, val2, et oper >> val1, val2, oper
    
        cout << "Entrez votre première valeur : " << endl;
        cin >> val1;
        cout << "Entrez votre seconde valeur : " << endl;
        cin >> val2;
        cout << "Saisissez un operateur valide (+, -, *, /): " << endl;
        cin >> oper;

    // Effectuer le calcul 
    
        switch (oper) 
        {
            case '+' :
                cout << "Resultat : " << val1 + val2 << endl;
            break;
            
            case '-' :
                cout << "Resultat : " << val1 - val2 << endl;
            break;
            
            case '*' : 
                cout << "Resultat : " << val1 * val2 << endl;
            break;
            
            case '/' :
                if (val2 != 0)
                    cout << "Resultat : " << val1 / val2 << endl;
                else 
                    cout << "Division par zero impossible, veuillez ressayer : " << endl;
                    break;
            
            default : 
            cout << "Operateur errone, veuillez reessayer." << endl;
            break;
        }

    return 0;
}
