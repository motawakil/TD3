/*
1- C c1 : on applelons un object de class c1 qui herite du class A et B 
1-1  : class B affiche : "** construction objet B : 1 0 car n = 1 et y = v = 0.0 
1-2 : class A affiche : "** construction objet A : 1 1 car n= p = n1 = 1  et x= 1 
1-3 : class C affiche : "** construction objet C : 3 3 car n = n3 = 3 et p = n1+n2 = 1+2

2 - pour la declaration C c2(10, 11, 12, 5.0) 
2-1 :  class B affiche : "** construction objet B : 1 5 car n = 1 et y = v = 5.0
2-2 :  class A affiche : "** construction objet A : 10 1 car n = p = n1 = 10 et x = 1
2-3 :  class C affiche : "** construction objet C : 12 21 car n = n3 = 12 et p= n1 + n2 = 10+11 = 21 

*/



#include <iostream>

using namespace std ;
class A
{ int n ;
float x ;
public :
A (int p = 2)
{ n = p ; x = 1 ;
cout << "** construction objet A : " << n << " " << x << "\n" ;
}
} ;
class B
{ int n ;
float y ;
public :
B (float v = 0.0)
{ n = 1 ; y = v ;
cout << "** construction objet B : " << n << " " << y << "\n" ;
}
} ;
class C : public B, public A
{ int n ;
int p ;
public :
C (int n1=1, int n2=2, int n3=3, float v=0.0) : A (n1), B(v)
{ n = n3 ; p = n1+n2 ;
cout << "** construction objet C : " << n << " " << p <<"\n" ;
}
} ;
main()
{ C c1 ;
C c2 (10, 11, 12, 5.0) ;
} 