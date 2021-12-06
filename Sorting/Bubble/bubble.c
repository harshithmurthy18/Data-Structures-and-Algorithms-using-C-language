//bubble sorting

#include <stdio.h>
#define SIZE 7


int main()
{
	int array[SIZE] = {0};
	int temp;

	printf("Enter the array elements to sort: (Max size is 7)\n");
	for(int i = 0; i<SIZE; i++)
		scanf("%d", &array[i]);

	//sorting logic from here
	for(int i = 0; i<SIZE-1; i++)
	{
		for(int j = 0; j<(SIZE-1)-i; j++)
		{
			if(array[j] > array[j+1])
			{
				//swap logic 
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	printf("Elements after sorting are: \n");

	for(int i = 0; i<SIZE; i++)
		printf("%d\t", array[i]);

}