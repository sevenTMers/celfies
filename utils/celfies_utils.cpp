#include<iostream> 
#include<algorithm>
#include<vector> 
#include<regex>
#include<iterator>
using namespace std;

int len_celfies(string celfies)
{
/**
 * Returns the number of symbols in a given SELFIES string.
 * param selfies: a SELFIES string.
 * return: the symbol length of the SELFIES string.
 *
 * Example:
 * len_selfies("[C][=C][F].[C]")
 * >>> 5
 */
	
	return count(celfies.begin(), celfies.end(), '[') + count(celfies.begin(), celfies.end(), '.');
}

void split_celfies(string celfies)
{
/**
 * Tokenizes a SELFIES string into its individual symbols.
 *
 * :param selfies: a SELFIES string.
 * :return: the symbols of the SELFIES string one-by-one with order preserved.
 *
 * :Example:
 * split_selfies("[C][=C][F].[C]"))
 * >>> ['[C]', '[=C]', '[F]', '.', '[C]']
 */ 
// this will probably need to be optimized with boost:: 

std::regex smiles_re(R"(\[[\w]\]|\[.\w\]|\.)"); 
std::copy( std::sregex_token_iterator(celfies.begin(), celfies.end(), smiles_re, 0),
      std::sregex_token_iterator(),
      std::ostream_iterator<std::string>(std::cout, "\n"));
}

// get_alphabet_from_selfies to be implemented later...maybe 


int main()
{
	split_celfies("[C][=C][F].[C]");

	return 0; 
}
