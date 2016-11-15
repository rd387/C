# include <stdio.h>
# define MAXR 7
# define MAXC 7

void getd(int [2]);
void read_m(int[2], double[MAXR][MAXC]);
void sum(int [2], double[MAXR][MAXC], double[MAXR][MAXC], double[MAXR][MAXC]);
void printm(int [2], double[MAXR][MAXC]);

int main(void)
{
	char q; 
	do {
		
	int d[2];
	double  a[MAXR][MAXC], b[MAXR][MAXC], c[MAXR][MAXC];
	getd(d);
	read_m(d,a);
	read_m(d,b);
	sum(d,a,b,c);
	printf("The sum is: \n");
	printm(d,c);
	
	printf("\n If you wish to quit, press Q \n");
	fflush(stdin);
	scanf("%c", &q);
	
	}while(q!='Q' && q!='q');
	
	return 0;
}

void getd(int d[2])
{
	printf("Please input the number of rows and columns for the matrix, separated by a space: \n");
	for (int i=0; i<2; i++)
	{
		scanf("%d", &d[i]);
			getchar();
	}
	
	
}

void read_m(int d[2], double x[MAXR][MAXC])
{
	printf("Please input the Matrix: \n");

	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			scanf("%lf", &x[i][j]);
		}
	}
	
}

void sum(int d[2], double a[MAXR][MAXC], double b[MAXR][MAXC], double c[MAXR][MAXC])
{

	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

void printm(int d[2], double c [MAXR][MAXC])
{
	for (int i=0; i<d[0]; i++)
	{
		
		for (int j=0;j<d[1];j++)
		{
			printf(" %.2f ", c[i][j]);
		}
		
			{printf("\n");}
	}
}