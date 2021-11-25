#include "ObjetAtomique.hpp"
#include <string>
ObjetAtomique::ObjetAtomique(const string& nom, int frequences) : atom(nom, frequences) {}

string ObjetAtomique::getName() const {
    return atom.first;
}

int ObjetAtomique::getFrequences() const {
    return atom.second;
}