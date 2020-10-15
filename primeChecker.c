#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/* Practice for upcoming test
* checking prime numbers
*/

bool isPrime(int userNum)
{

    for (int i = sqrt(userNum); i > 1; i--)
    {
        if(userNum % i == 0)
	{
		return false;
	}		
    }
    return true;
}

int main()
{
    int userNum;
    printf("Enter a number to check: ");
    scanf("%d\n", &userNum);

    bool prime = isPrime(userNum);

    if(prime)
    {
        printf("\nIs Prime!\n");
    } else
    {
        printf("\n Is not prime!\n");
    }
    return 0;
}
