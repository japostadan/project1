#include <stdio.h>
#include "test2.h"

int main()
{
	vector_h first;
		first.x = 7.0f; 
		first.y = 5.0f;
	vector_h second;
		second.x= 1.0f;
		second.y= 1.0f;
	
	Add(&first,&second);
	printf("first.x = %f, first.y = %f",
			first.x,
			first.y);

	return (0);
}
