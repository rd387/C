# include <stdio.h>
# define MAXD 7

int getd(void);
void read_v(int, double[MAXD]);
void sum(int, double[MAXD], double[MAXD], double[MAXD]);
void printv(int, double[MAXD]);

int main(void)
{
	char q;
	do {
	int d;
	
	double  a[MAXD], b[MAXD], c[MAXD];
	d=getd();
	read_v(d,a);
	read_v(d,b);
	sum(d,a,b,c);
	printf("The sum is: \n");
	printv(d,c);
	
	printf("\n If you wish to quit, press Q \n");
	fflush(stdin);
	scanf("%c", &q);
	
	}while(q!='Q'&&q!='q');
	
	return 0;
}

int getd(void)
{
	int d;
	printf("Please input the number of dimentions for the vectors: \n");
	scanf("%d", &d);
	getchar();
	
	return d;
}

void read_v(int d, double x[MAXD])
{
	printf("Please input the vector: \n");

	for (int i=0; i<d; i++)
	{
		scanf("%lf", &x[i]);
	}
	
}

void sum(int d, double a[MAXD], double b[MAXD], double c[MAXD])
{

	for (int i=0; i<d; i++)
	{
		c[i]=a[i]+b[i];
	}
}

void printv(int d, double c [MAXD])
{
	printf("[ ");
	for (int i=0; i<d; i++)
	{
		printf("%.2f ", c[i]);
	}
	printf("]");
}