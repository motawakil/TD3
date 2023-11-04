#include<iostream>
using namespace std  ; 
//T est define comme char , donc les valeurs sont converties en caractères ASCII  
// d ou le programme va afficher Cordonnes : <2 
//pour que le programme affiche 60 65 il faut changer le type de l'objet p en int 

template <class T> class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord) { x = abs ; y = ord ; }
void affiche () ;
} ;
template <class T> void point<T>::affiche ()
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}



int main() {

point<char> p(60,65) ; 
p.affiche() ; 

    return 0 ;
}


