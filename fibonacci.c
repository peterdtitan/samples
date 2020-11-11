// Program to generate the Fibonacci numbers
// Prompts user to enter input and prints up to that amount


#include <stdio.h>

int main (void)
{
	int input;
		printf("Enter an int to print to: ");
		scanf("%i", &input);
		printf("\n");

	int Fibonacci[input], i;
	
	Fibonacci[0] = 0; // by definition
	
	Fibonacci[1] = 1; // ditto

		for ( i = 2; i < input; ++i )
			Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

		for ( i = 0; i < input; ++i )
			printf ("%i\n", Fibonacci[i]);
return 0;
}


