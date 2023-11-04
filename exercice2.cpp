#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

// Fonction pour afficher une liste d'entiers
void afficherListe(const list<int>& liste) {
    for (const int& nombre : liste) {
        cout << nombre << " ";
    }
    cout << endl;
}


void triABulles(list<int>& liste) {
    int  n = 0 ; 
    n+= liste.size();
    bool echange;
    do {
        echange = false;
        for (auto it = liste.begin(); it != prev(liste.end()); ++it) {
            auto suivant = next(it);
            if (*it > *suivant) {
                swap(*it, *suivant);
                echange = true;
            }
        }
    } while (echange);
}

void triParSelection(list<int>& liste) {
    for (auto it = liste.begin(); it != prev(liste.end()); ++it) {
        auto min_element = it;
        for (auto j = next(it); j != liste.end(); ++j) {
            if (*j < *min_element) {
                min_element = j;
            }
        }
        swap(*it, *min_element);
    }
}


void triParInsertion(list<int>& liste) {
    for (auto it = next(liste.begin()); it != liste.end(); ++it) {
        int element = *it;
        auto j = it;
        while (j != liste.begin() && *prev(j) > element) {
            *j = *prev(j);
            --j;
        }
        *j = element;
    }
}

int main() {
    list<int> liste;

    int n;
    cout << "Entrez la taille de liste  : ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
    cout << "Entrez nombre  " << i+1 << " : ";
        int nombre;
        cin >> nombre;
        liste.push_back(nombre);
    }

    cout << "Liste non triée : ";
    afficherListe(liste);

    list<int> copie_liste = liste; 

   
    triABulles(copie_liste);
    cout << "Tri par bulles : ";
    afficherListe(copie_liste);

   
    copie_liste = liste;

    
    triParSelection(copie_liste);
    cout << "Tri par selection : ";
    afficherListe(copie_liste);

  
    copie_liste = liste;

   
    triParInsertion(copie_liste);
    cout << "Tri par insertion : ";
    afficherListe(copie_liste);

    return 0;
}
