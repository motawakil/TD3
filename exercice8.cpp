#include <iostream>
#include<cmath>
using namespace std;

template <class T>
T carre(T nombre) {
//calculer le carre d'un nombre 
 return pow( nombre , 2); 
}

int main() {

    int nombre1 = 6;
    double nombre2 = 4.5;
//cas de carre d'un nombre  entier 
    cout << "Le carré de " << nombre1 << " est : " << carre(nombre1) << endl;
//cas de carre d'un nombre reel     
    cout << "Le carré de " << nombre2<< " est : " << carre(nombre2) << endl;

    return 0;
}