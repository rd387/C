#include <stdio.h>

int main()
{
	int i;
	int spam[4] = {10, 34, 56, 78};
	
	printf("Element \t Address \t Value \n");
	
	for(i=0; i<4; ++i)
	{
		printf("spam[%d] \t %p \t %d \n", i, &spam[i], spam[i]);
	}
	
	// Array name is pointer to the first element
	printf("spam \t \t %p \n", spam);
	
	// Derefence it
	printf("\n *spam \t \t %d \n", *spam);
	
	// Dereference it
	printf("\n *(spam+2) \t \t %d \n", *(spam+2));
	
	*spam = 4;
	printf("\n *spam \t \t %d \n", *spam);
	
	
	return(0);	
}
