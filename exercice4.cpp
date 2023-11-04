#include<iostream>
#include <iterator>
#include <set>

using namespace std ; 

bool affiche(set<int> s , int nombre){
    set<int>::iterator itr2;
    int cont = 0 ; 
 
 return s.find(nombre) != s.end();

}


int main(){
set<int > s1 ; 
int i ; 
for(i = 0 ; i<= 10 ; i++){
s1.insert(i) ; 
}
set<int >::iterator itr;

for(itr = s1.begin() ; itr!= s1.end() ; itr++){
    cout<<*itr <<endl ; 
}
int choix = affiche(s1 ,10) ; 

switch(choix){
    case 0 :
    cout<<"la valeur n'existe pas" <<endl ; 
    break; 
    case 1 :
    cout<<"la valeur existe" <<endl ; 
    break ; 
}


    return 0 ; 
}