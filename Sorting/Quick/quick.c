//quick sort

#include <stdio.h>
#define N 7 

void quicksort(int[], int, int);
int partion(int[], int, int);

int main()
{
	int lb = 0, ub = 0;
	int array[N] = {0};

	printf("Enter the array elements to sort: (Max size is 7)\n");
	for(int i = 0; i<N; i++)
		scanf("%d", &array[i]);

	lb=0;
	ub=N-1;

	quicksort(array, lb, ub);

	printf("Array after sorting is: \n");

	for(int i = 0; i<N; i++)
		printf("%d\t", array[i]);
	return 0;
}



void quicksort(int array[], int lb, int ub)
{
	if(lb<ub)
	{
		int loc  = partion(array, lb, ub);
		quicksort(array, lb, (loc-1));
		quicksort(array, (loc+1), ub);
	}
}

int partion(int array[], int lb, int ub)
{
	int pivot = array[lb];
	int start = lb;
	int end = ub;

	while(start < end)
	{	
		while(array[start] <= pivot)
			start++;

		while(array[end] > pivot)
			end--;

		if(start < end)
		{
			int temp = 0;
			//swap array[start] and array[end]
			temp = array[start];
			array[start] = array[end];
			array[end] = temp;
		}
	}
	//swap array[lb] with array[end] - we will update the pivot here
	int temp = 0;
	temp = array[end];
	array[end] = array[lb];
	array[lb] = temp;

	return end;
}