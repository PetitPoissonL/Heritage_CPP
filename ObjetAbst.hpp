#ifndef OBJETABST_HPP
#define OBJETABST_HPP
#include <vector>
#include <string>
using namespace std;

class ObjetAtomique;

class ObjetAbst {
private:
    string name;
    const static vector<ObjetAtomique&> listObjetAtom;
public:
    string comment;
    static void testObjetAbst();
    static string getAllNames();
    //static vector<int> getAllFrequence();
};

#endif /* OBJETABST_HPP */

