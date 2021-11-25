#ifndef OBJETATOMIQUE_HPP
#define OBJETATOMIQUE_HPP
#include "ObjetAbst.hpp"
#include <string>
using namespace std;

class ObjetAtomique : public ObjetAbst {
private:
    pair<string, int> atom;
public:
    explicit ObjetAtomique(const string&, int);
    string getName() const;
    int getFrequences() const;
};

#endif /* OBJETATOMIQUE_HPP */
