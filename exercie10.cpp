#include<iostream>
//Exercice 10
using namespace std ; 
class Personne{
public :
Personne(string name , string date , string prenom):name(name ) , date_naissance(date) , prenom(prenom) 
{}

string affiche() const{
    cout<<"le nom du person est " << name <<endl   ;
    cout<<"le prenom du person est " << prenom <<endl ;
        cout<<"la date de naissance du person est " << date_naissance  ;
}
    private :
    string name  ; 
    string date_naissance ; 
    string prenom ; 
}  ; 



int main(){
Personne p("el maimouni " , "05/12/2003" , "motaouakel" ) ; 
cout<<p.affiche() <<endl ; 


    return 0 ;
}