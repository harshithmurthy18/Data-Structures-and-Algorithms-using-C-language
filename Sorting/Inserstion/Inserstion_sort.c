//insertion sorting

#include <stdio.h>
#define N 7

int main()
{
	int array[N] = {0};

	printf("Enter the array elements to sort: (Max size is 7)\n");
	for(int i = 0; i<N; i++)
		scanf("%d", &array[i]);

	for(int i  = 1; i<N; i++)
	{
		int temp = 0, j =0;
		temp = array[i];
		j = i-1;

		while(j>=0 && array[j] > temp)
		{
			array[j+1] = array[j];
			j--;
		}

		array[j+1] = temp;
	}

	printf("Array after sorting is: \n");

	for(int i = 0; i<N; i++)
		printf("%d\t", array[i]);

	return 0;
}