# include <stdio.h>
# define MAXR 100
# define MAXC 100

void getd(int [2]);
void read_m(int[2], double[MAXR][MAXC]);
void sumr(int [2], double[MAXR][MAXC], double[MAXR]);
void sumc(int [2], double[MAXR][MAXC], double[MAXC]);
void printr(int [2], double[MAXR]);
void printc(int [2], double[MAXC]);

int main(void)
{
	char q; 
	do {
		
	int d[2];
	double  a[MAXR][MAXC], r[MAXR],  c[MAXR];
	getd(d);
	read_m(d,a);
	sumr(d,a,r);
    sumc(d,a,c);
	printf("The sum of the rows is: \n");
	printr(d,r);
	printf("The sum of the columns is: \n");
	printc(d,c);
	printf("\n If you wish to quit, press Q \n");
	scanf("%c", &q);
	getchar();
	
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

void read_m(int d[2], double x[][d[1]])
{
	printf("Please input the Matrix: \n");
	double *p=&x[0][0];
	for (double *i=x; i<(p+d[0]*d[1]); i++)
	{
		scanf("%lf", i);
	}
	fflush(stdin);
	
}

void sumr(int d[2],double a[d[0]][d[1]], double r[d[0]])
{
	double *p=&a[0][0];
	double *q=&r[0];

	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			q=p+j+i*d[1];
			r[i]=r[i]+*q;
		}
	}
	 
	 
}

void sumc(int d[2],double a[d[0]][d[1]], double c[d[1]])
{
	double *p=&a[0][0];
	double *q=&c[0];

	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			q=p+j+i*d[1];
			c[j]=c[j]+*q;
		}
	}
	 
	 
}

void printr(int d[2], double r[d[0]])
{
	for (int i=0; i<d[0]; i++)
	{
		
			printf(" %.2f ", r[i]);
		
			{printf("\n");}
			fflush(stdin);
	}
}


void printc(int d[2], double c [d[1]])
{

		for (int j=0;j<d[1];j++)
		{
			printf(" %.2f ", c[j]);
		}
		
			{printf("\n");}
		
}

