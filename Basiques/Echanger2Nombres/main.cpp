/* 

Programme : echangeDeuxNombres
But : Echanger deux nombres
Créateur : Cappellaro Romain
Date de dernière modification : 16/09

*/
#include <iostream>
#include <string>
using namespace std;
int main() 
{

// Variables

double nombre1;
double nombre2;

// Traitements

cout << "Quel est votre premier nombre ? : " << endl;
cin >> nombre1; 
cout << "Quel est votre second nombre ? : " << endl;
cin >> nombre2;

cout << "Vos deux nombres échangés sont : " << nombre2 << " et " << nombre1 << endl;

return 0;
}