#include <stdio.h>
#include <math.h>
# define MAXR 100
# define MAXC 100

void getd(int);
void read_m(int[2], double[MAXR][MAXC]);
//void GE(int [2], double[MAXR][MAXC], double[MAXR][MAXC]);
void printm(int [2], double[MAXR][MAXC]);

int main(void)
{
	char q; 
	do {
		
	int d;
	double  a[MAXR][MAXC]; //b[MAXR][MAXC];
	getd(d);
	read_m(d,a);
	//trans(d,a,b);
	printf("The T is: \n");
	printm(d,a);
	
	printf("\n If you wish to quit, press Q \n");
	fflush(stdin);
	scanf("%c", &q);
	getchar();
	}while(q!='Q' && q!='q');
	
	return 0;
}

void getd(int d)
{
	printf("Please input the number of equations: \n");
	for (int i=0; i<2; i++)
	{
		scanf("%d", &d[i]);
			getchar();
	}
	
	
}

void read_m(int d[2], double x[][d[1]])
{
	printf("Please input your equations in the form ax+by+cz=d: \n");

	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			scanf("%d+", &x[i][j]);
			getchar();
		}
	}
	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			scanf("%d+", &x[i][j]);
			getchar();
		}
	}
	
	
}

/*void trans(int d[2],double a[d[0]][d[1]], double b[d[1]][d[0]])
{
	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			b[j][i]=a[i][j];
		}
	}
	 
	 
} */

void printm(int d[2], double b [][d[0]])
{
	for (int i=0; i<d[1]; i++)
	{
		
		for (int j=0;j<d[0];j++)
		{
			printf(" %.2f ", b[i][j]);
		}
		
			{printf("\n");}
	}      
}