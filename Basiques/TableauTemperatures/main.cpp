/*

Nom du programme : TableauTemperatures
But : Tableau capable de mémoriser 12 températures, exprimées en degrés Celsius
Créateur : Cappellaro Romain <rcappellaro@iut-bayonne.univ-pau.fr>
Remarques :

*/

#include <iostream>
using namespace std;

int main(void)
{

    // Constante

    const unsigned int NB_TEMP = 12;

    // Variables

    float tableauTemp[NB_TEMP]; // Températures en degrés Celsius
    unsigned int numTempCour;

    for (numTempCour = 0; numTempCour < NB_TEMP; numTempCour++)
    {
        cout << "Entrez vos températures (en degrés Celsius) #" << numTempCour + 1 << " :" << endl;
        cin >> tableauTemp[numTempCour];
    }
    cout << "Vous avez saisi les températures suivantes :" << endl;

    for (numTempCour = 0; numTempCour < NB_TEMP; numTempCour++)
    {
        cout << "Température #" << numTempCour + 1 << " : " << tableauTemp[numTempCour] << "°C" << endl;
    }
    return 0;
}