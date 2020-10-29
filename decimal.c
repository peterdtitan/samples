/* Program to demonstrate functionality of decimal point before width spec in printf
* Enter different values to test
* Try to determine the function
*/

#include <stdio.h>

int main (void)
{
	
	int dollars, cents, count;
	
	for ( count = 1; count <= 3; ++count ) 

	{
	printf ("Enter dollars: ");
	scanf ("%i", &dollars);
	
	printf ("Enter cents: ");
	scanf ("%i", &cents);

	printf ("$%i.%.2i\n\n", dollars, cents);
	}

	return 0;
}

