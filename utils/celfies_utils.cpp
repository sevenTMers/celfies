#include<iostream> 
#include<algorithm>
#include<vector> 
#include<regex>
#include<iterator>

int LenCelfies(string celfies)
{
	
	return count(celfies.begin(), celfies.end(), '[') + count(celfies.begin(), celfies.end(), '.');
}

void SplitCelfies(string celfies)
{

std::regex smiles_re(R"(\[[\w]\]|\[.\w\]|\.)"); 
std::copy( std::sregex_token_iterator(celfies.begin(), celfies.end(), smiles_re, 0),
      std::sregex_token_iterator(),
      std::ostream_iterator<std::string>(std::cout, "\n"));
}

// GetAlphabet to be implemented later (maybe)

/*******************************************************************************
 * 
 * 											LenCelfies 
 *
 * takes in a Celfies string and returns the number of symbols 
 * 
 * Exampe:
 * >>> LenCelfies("[C][=C][F].[C]")
 * >>> 5
 *         
 ******************************************************************************/

/*******************************************************************************
 *
 * 											SplitCelfies
 *
 * Tokenises a Celfie into individual symbols
 *
 * Example:
 *
 * >>> SplitCelfies("[C][=C][F].[C]"))
 * >>> ['[C]', '[=C]', '[F]', '.', '[C]']
 *
 *******************************************************************************/
