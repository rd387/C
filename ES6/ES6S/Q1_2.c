# include <stdio.h>
# define MAXR 100
# define MAXC 100

void getd(int [2]);
void read_m(int[2], double*);
void trans(int [2], double[MAXR][MAXC], double[MAXR][MAXC]);
void printm(int [2], double[MAXR][MAXC]);

int main(void)
{
	char q; 
	do {
		
	int d[2];
	double  a[d[0]][d[1]], b[d[1]][d[0]];
	getd(d);
	read_m(d,&a[0][0]);
	trans(d,a,b);
	printf("The Transpose is: \n");
	printm(d,b);
	
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

void read_m(int d[2], double *x)
{
	printf("Please input the Matrix: \n");
	for (double *i=x; i<(x+d[0]*d[1]); i++)
	{
		scanf("%lf", i);
	}
	
}

void trans(int d[2],double a[d[0]][d[1]], double b[d[1]][d[0]])
{
	double *p=&a[0][0];
    double *q=&b[0][0];
	for (int i=0; i<d[0]; i++)
	{
		for (int j=0;j<d[1];j++)
		{
			q=p+j+i*d[1];
			b[j][i]=*q;
		}
	}
	 
	 
}

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

