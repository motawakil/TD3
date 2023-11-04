#include <iostream> 
using namespace std; 

class Test{ 
public:
 static int tableau[] ; 
public :
 static int division(int indice, int diviseur){ 
 return tableau[indice]/diviseur; 
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() { 
 int x, y;
 
 cout << "Entrez l indice de l entier à diviser: " << endl; 
 try{
    cin >> x ;
    // L'indice du tableau ne peut pas depacer 9 
     if(x >9 || x< 0 ) {
    
           throw "l'indice que vous avez choisi n'est pas valide " ;         
 }

 }
 catch(const char *msg ){
cout<<msg <<endl ;
//affichage du message et arret de programme
return 0 ; 
 }


 cout << "Entrez le diviseur: " << endl; 
 try{
 cin >> y ;
 //le diviseur ne peut pas possede la valeur 0 
 if(y == 0 ){
    throw "impossible de divise sur 0 " ; 
 }
 
 }
 catch(const char *msg2){
cout<<msg2<<endl ; 
return 0 ; 
 }
 cout << "Le résultat de la division est: "<< endl; 
 cout <<Test::division(x,y) << endl; 
 return 0; }