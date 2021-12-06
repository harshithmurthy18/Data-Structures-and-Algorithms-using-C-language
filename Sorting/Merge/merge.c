//merge sort

#include <stdio.h>
#define N 7 

void merge_sort(int [], int, int);
void merge(int[], int, int, int);


int array[N] = {0};

int main()
{
	
	int Ub = 0, Lb = 0;

	printf("Enter the array elements to sort: (Max size is 7)\n");
	for(int i = 0; i<N; i++)
		scanf("%d", &array[i]);

	Ub = N-1;
	Lb = 0;

	merge_sort(array,Lb,Ub);

	//array after sorting
	printf("Array after sorting is: \n");

	for(int i = 0; i<N; i++)
		printf("%d\t", array[i]);

	return 0;
}

void merge_sort(int array[],int Lb,int Ub)
{
	if(Lb<Ub)
	{
		int mid = (Lb+Ub)/2;

		merge_sort(array, Lb, mid);
		merge_sort(array, mid+1, Ub);
		merge(array, Lb, mid, Ub);
	}
}

void merge(int array[], int Lb, int mid, int Ub)
{
	int b[N] = {0};
	int k = Lb, i = Lb, j = mid+1;

	while(i<=mid && j<=Ub)
	{
		if(array[i]<=array[j])
		{
			b[k] = array[i];
			k++;
			i++;
		}

		else if(array[j]<array[i])
		{
			b[k] = array[j];
			k++;
			j++;
		}
	}

	if(i>mid)
	{
		while(j<=Ub)
		{
			b[k] = array[j];
			k++;
			j++;
		}
	}

	else if(j>Ub)
	{
		while(i<=mid)
		{
			b[k] = array[i];
			k++;
			i++;
		}
	}

	for(int i = Lb; i<=Ub; i++)
		array[i] = b[i];
}	