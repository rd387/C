#include <stdio.h> 
int main(void)
{
	int i, j;
	float x, y;
	
	i= 20; 
	j= -198;
	x= -1.2e-5;
	y= 2.718281828459045;
	
	printf("i, j, x, y = %-6.4i %-6i %.8e %4.4e\n",i,j,x,y);
	
	return 0;
	}