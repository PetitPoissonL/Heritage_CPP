#ifndef OBJETCOMPOSE_HPP
#define OBJETCOMPOSE_HPP
#include "ObjetAbst.hpp"
#include <string>
using namespace std;

class ObjetCompose : public ObjetAbst{
public:
    ObjetCompose(string);
    void operator[](ObjetAtomique& oa);
};

#endif /* OBJETCOMPOSE_HPP */

