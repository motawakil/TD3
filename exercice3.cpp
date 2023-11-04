#include <iostream>
#include<list>
#include<algorithm>

using namespace std ; 

class Personne{
    public:

    string nom ; 
    string prenom ; 
    int age ; 
    Personne(string nom = NULL  , string prenom= NULL , int age = 0  ): nom(nom),prenom(prenom),age(age){}
    bool operator < (const Personne &other){
        if (nom != other.nom) {
        return nom < other.nom; 
        }else {
            return prenom < other.prenom ; 
        }
    }
} ;     
int main() {
 list<Personne>list_persone ; 
 int nombre_personne ; 

 cout<< "Entre la nombre de personne : "; 
cin>> nombre_personne ; 
 string nom, prenom ; 
    int age ; 
 
for(int i = 0 ; i < nombre_personne ; i++ ){
       cout<< "Entre les inforamtion de presonne  " << i+1 <<" : "<< endl ; 
    cout << "nom : " ; cin>> nom ; 
    cout << "prenom : ";  cin>> prenom ; 
    cout<<"age : " ; cin>> age ;  
    list_persone.push_back( Personne(nom , prenom , age)) ;
}
// la fonction pour tri la list de presonne par l'alph 
list_persone.sort(); 
for(const Personne& per :list_persone){
cout<<"nom : " <<per.nom<< " , prenom : "<< prenom  <<", age : "<< age << endl ; 

}
}
