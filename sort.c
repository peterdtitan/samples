#include <stdio.h>

/* 
* Program to sort the elements of an array in ascending order
* Array size is defined by user
* Array elements are defined by user
*/

void sort (int a[], int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; ++i)
		for (j = i + 1; j < n; ++j)
			if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
}


int main()
{
	void sort (int a[], int n);

	int i, j, input, size;
	int values[100];
	
	printf("\nEnter an array size (max 100): ");
	scanf("%i", &size);

	printf("\nEnter %i values to sort in ascending order: \n", size);

	for (j = 0; j < size; j++)
		scanf("%i", &values[j]);

	sort (values, size);

	for (i = 0; i < size; i++)
		printf("%i ", values[i]);
		printf("\n");

	return 0;

}
