#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 3;
	scanf("%d",&size);

	int *dynamic_array = malloc(sizeof(int)*size);

	for (int i=0; i < size; i++)
	{
		dynamic_array[i] = i;
	printf("value before :%d\n",*(dynamic_array));
	}
	//printf("value before :%d\n",*(dynamic_array));
	free(dynamic_array);	
	
	printf("value after :%d\n",*(dynamic_array));
	return (0);
}
