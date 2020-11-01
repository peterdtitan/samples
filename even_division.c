#include <stdio.h>

/* Program that accepts two int values
*  Proceeds to check if the first is evenly divisible by the second
*  Prints appropriate message
*/

int main() {

	int value1;
	int value2;

	printf("\nEnter your first integer: ");
	scanf("%i", &value1);

	printf("\nEnter your second integer: ");
	scanf("%i", &value2);

	if (value1 % value2 == 0) 
		printf("\n%i is evenly divisible by %i!\n\n", value1, value2);  
	else
		printf("\n%i can NOT be divided evenly by %i!\n\n", value1, value2);

	
return 0;

}
