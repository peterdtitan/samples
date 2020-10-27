/* Program to get 5 triangular numbers
* Takes input from user and displays result before proceeding to next input
* Triangular numbers have been treated before
*/

#include <stdio.h>

int main (void)
{

	int n, number, counter, triangularNumber;

	for (counter = 1; counter <= 5; ++counter)
	{
		printf ("\nWhat triangular number do you want to calculate? \n");
		scanf("%i", &number);

		triangularNumber = 0;
	
		for ( n = 1; n <= number; ++n )
			triangularNumber += n;

	printf ("Triangular number of %i is %i\n\n", number, triangularNumber);
	}

return 0;
}
