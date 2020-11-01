// Program to generate a table of prime numbers
// Value is entered by user
// Table is printed from 2 to input - 1

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int p, d;
	int input;
	bool isPrime;

	printf("\nEnter value to print up to: ");
	scanf("%i", &input);
	printf("\n");

	for ( p = 2; p <= input; ++p ) {
		isPrime = true;

	for ( d = 2; d < p; ++d )
		if ( p % d == 0 )
			isPrime = false;

		if ( isPrime != false )
			printf ("%i ", p);

}
	printf ("\n\n");

return 0;
}
