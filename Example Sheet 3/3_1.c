
# include <stdio.h> 

int Maximum(int, int, int);
int Minimum(int, int, int);


 int main (void)
{
char q;
int a, b, c, n, m, ab, md;

	do 
	{
	printf("Input 3 numbers separated by a space: \n");
	scanf("%d %d %d", &a, &b, &c);
	
		n= Maximum(a,b,c);
		m= Minimum(a,b,c);
	
	if (a!=n && a!=m)
		md=a;
	if (b!=n && b!=m)
		md=b;
	if (c!=n && c!=m)
		md=c;
		
	printf("Sort in Ascending or Descending Order: \n 1: Ascending \n 2: Descending \n");
	fflush(stdin);
	scanf("%d", &ab);
	
	switch (ab)
	{
		case 1: 
		{
			printf(" \n %d %d %d", m, md,n);
		break;
		}
		
		case 2: 
		{
			printf("\n %d %d %d", n, md, m);
		break;
		}
	}
	
	printf("\n If you wish to return to the start press C \n If you wish to quit, input Q \n"); 
	fflush(stdin);
	scanf("%c", &q);
	
	}while(q!='Q');

return 0;
}


int Maximum( int x, int y, int z)
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
	else 
	{
		max=x;
	}
	
	return(max);
}
	
int Minimum( int x, int y, int z)
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
	
	return(min);
}
	

