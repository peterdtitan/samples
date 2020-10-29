/* Program to calculate the factorial of a number
* Takes input from user
*/

#include <stdio.h>

int main()
{

	int input, i;
	int fact = 1;

	printf("\nEnter a number: ");
	scanf("%d", &input);

	for(i = 1; i <= input; i++)
	{
		fact = fact * i;
	}

	printf("\nFactorial of %d is %d\n\n",input,fact);

return 0;

}
