
/*Libraries*/
# include <stdio.h> 
# include <math.h>

/*Function declearation*/
int Maximum(int, int, int, int);
int Minimum(int, int, int, int);

/*Main Function*/
int main (void)
{
	int a, b, c, d, m, n;
	char q;
	
	do 
	{

		printf("Please input any 4 numbers: \n");

		scanf ("%d %d %d %d", &a, &b, &c, &d);

		n= Maximum(a,b,c,d);

		m= Minimum(a,b,c,d);                                                                              


		printf("The maximum is: %d \n", n);

		printf("The minimum is: %d \n", m);


printf("If you wish to return to the start press C \n If you wish to quit, input Q \n"); 
fflush(stdin);
scanf("%c", &q);
	
	}while(q!='Q');
	
	return 0;
}
	
/*Function definiton*/
int Maximum( int x, int y, int z, int v)
{
	int max;
	
	max = x;
	
	if (y > max)
	{
		max = y;
	}
	else if (z > max)
	{
		max = z;
	}
	else if (v > max)
	{
		max = v;
	}
	
	return(max);
}
	
int Minimum( int x, int y, int z, int v)
{
	int min;
	
	min = x;
	
	if (y < min)
	{
		min = y;
	}
	else if (z < min)
	{
		min = z;
	}
	else if (v < min)
	{
		min = v;
	}
	
	return(min);
}
	

