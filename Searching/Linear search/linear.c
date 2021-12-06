#include <stdio.h>

int main()
{

	int array[7] = {30,50,40,60,70,9050,11};
	int search_element = 0;
	int flag = 0;

	printf("Enter the search element: \n");
	scanf("%d", &search_element);

	for(int i = 0; i<7; i++)
	{
		if(search_element == array[i])
		{
			printf("Element found at: %d index\n", i);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("No elements found\n");

	return 0;
}