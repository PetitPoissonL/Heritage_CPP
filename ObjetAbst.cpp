#include <iostream>
#include <string>
#include "ObjetAbst.hpp"
#include "ObjetAtomique.hpp"
#include <vector>
using namespace std;
// Construisez ici l'inventaire global des pièces disponibles,
// avec un vecteur contenant les 4 objets Atomiques, A,B,C,D ayant respectivement des frequences 2,25,50,100

const vector<ObjetAtomique&> ObjetAbst::listObjetAtom{&ObjetAtomique("A",2), &ObjetAtomique("B",25), &ObjetAtomique("C",50), &ObjetAtomique("D",100)};

string ObjetAbst::getAllNames() {
    string s = "";
    for(int i=0; i<listObjetAtom.size(); i++){
        s += listObjetAtom[i].getName();
    }
    return s;
}
/*
vector<int> ObjetAbst::getAllFrequence() {
    vector<int> v;
    for(int i=0; i<listObjetAtom.size(); i++){
        v.push_back(listObjetAtom[i].getAllFrequence());
    }
    return v;
}
*/
void ObjetAbst::testObjetAbst(){
    //TODO Test2

    // ------------ Test 2 ---------
    // montrez ici qu'on ne peut plus ajouter d'objetAtomique à l'inventaire initial 
    // c.a d. essayez d'en ajoutez dans une ligne que vous laisserez en commentaire
    //
    //listObjetAtom.push_back(ObjetAtomique("E",1000));
    //
    // Expliquez en qqs phrases, et mettez en évidence en MAJUSCULE ce qui dans le type a empéché l'action de se faire
    //
    //

    //TODO Test3

    // ------------ Test 3 ---------
    // montrez ici comment réduire le stock d'une unité pour toutes les pièces disponibles

    // récupérez ensuite séparément le vecteur des fréquences 
    vector<int> v_freq;
    // a completer
    if (v_freq==vector<int>{1,24,49,99}) cout << "- ok decroissance frequence" << endl;
    else cout << "PB DECROISSANCE FREQUENCE" << endl;
    // puis remettez ici les fréquences en l'état

    //TODO: Test4

    // ------------ Test 4 -----------
    // vous allez tenter ici de modifier tous les noms et commentaires en leur ajoutant "_mod"
    // ca doit être impossible pour les noms, mais possible pour les commentaires
    // n'affichez rien, et laissez en commentaire la ligne qui échoue
    // nous la testerons en la décommantant
    // code :
    // 
    // Expliquez ici en formant une phrase compréhensible, ce qui dans les types 
    // permet de répondre précisément à la spécification précédente
    // (utilisez des majuscules pour faire ressortir les mots clés significatifs) 
 
}



