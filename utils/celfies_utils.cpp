#include<iostream> 
#include<algorithm>

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


int main()
{
	len_celfies("[C] [=C].[C]");

	return 0; 
}
