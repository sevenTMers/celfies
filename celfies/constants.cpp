#include <iostream>
#include <map>
using namespace std; 

int main()
{
// reconsider container type later
string elements[118] = {
   "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg",
   "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr",
   "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br",
   "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd",
   "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs", "Ba", "Hf",
   "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi",
   "Po", "At", "Rn", "Fr", "Ra", "Rf", "Db", "Sg", "Bh", "Hs", "Mt",
   "Ds", "Rg", "Cn", "Fl", "Lv", "La", "Ce", "Pr", "Nd", "Pm", "Sm",
   "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Ac", "Th",
   "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md",
   "No", "Lr"
};

string organicSubset[10] = {"B", "C", "N", "O", "S", "P", "F", "Cl", "Br", "I"};

//placeholder code for map
//ToDo
std::map<string, pair<int,int>> aromaticValences; 
aromaticValences["B"] = {3, 0}; 
aromaticValences["Al"] ={3, 0};
aromaticValences["C"] = {4, 0};
aromaticValences["Si"] = {4, 0};
aromaticValences["N"] = {3, 5};
aromaticValences["P"] = {3, 5};
aromaticValences["As"] = {3, 5};
aromaticValences["O"] = {2, 4};
aromaticValences["S"] = {2, 4};
aromaticValences["Se"] = {2, 4};
aromaticValences["Te"] = {2, 4};


string indexAlphabet[16] = {
   "[C]", "[Ring1]", "[Ring2]",
   "[Branch1]", "[=Branch1]", "[#Branch1]",
   "[Branch2]", "[=Branch2]", "[#Branch2]",
   "[O]", "[N]", "[=N]", "[=C]", "[#C]", "[S]", "[P]"
};

//indexCode
   return 0; 
}
