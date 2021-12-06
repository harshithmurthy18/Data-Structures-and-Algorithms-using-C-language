//selection sorting

#include <stdio.h>
#define N 7 

int main()
{
	int array[N] = {0};

	printf("Enter the array elements to sort: (Max size is 7)\n");
	for(int i = 0; i<N; i++)
		scanf("%d", &array[i]);


	for(int i = 0; i<N-1; i++)
	{
		int temp = 0;
		int min = i;

		for (int j = i+1; j<N; j++)
		{
			if(array[j]<array[min])
			{
				min = j;
			}
		}

		if(min!=i)
		{
			//swapping
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}


	printf("Array after sorting is: \n");

	for(int i = 0; i<N; i++)
		printf("%d\t", array[i]);
	return 0;
}