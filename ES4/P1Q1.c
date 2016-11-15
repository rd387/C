#include <stdio.h>

int main (void)
{
	int i,t;
	char q;
do {
	
	do {
	printf("Please input a postive integer value: \n");
	scanf("%d", &i);
	fflush(stdin);
	} while(i<=0);
  	
	printf("Input a task number: \n 1. Write a C program that prints out all numbers between 1 and n. \n");
	printf("2. Write a C program that prints out all letters of the alphabet. \n");
	printf("3. Write a C program that prints out all odd numbers between 1 and n in reverse order.\n");
	printf("4. Write a C program that prints out the individual digits of an integer number and calculates their sum.\n");
	printf("5. Write a C program that checks whether a number is prime. \n");
	printf("6. Write a C program that prints out all factors of a number. \n");
	printf("7. Write a C program that checks whether a number is perfect. \n");
     scanf("%d", &t);
     fflush(stdin);
	
	switch(t)
	{
	case 1: 
	{
		for(int n=1; i<=n; i++) printf("%d ", i);
		break;
	}
	case 2: 
	{
		char L[26]={'a','b','c','d','e','f','g','h','i','j','k','l',
		'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		if(i>26) i=26;
			
		for(int n=0;n<i;n++)
		{
			printf("%c \n", L[n]);
		} 
		break;
	}
	case 3:
	{
		for(int n=1;n<=i;n+=2)
		{
			printf("%d", n);
		}
		break;
	}
	case 4:
	{ int d, sum;
	sum=0;
		do{ 
		d=i%10;
		sum+=d;
		printf("%d ",d);
		i=i/10;	
		} while (i!=0);
		printf("\n %d", sum);
		break;
	}
	case 5:
	{
	int d;
		for( d = 2; d <= i /2; d ++)
		if( i%d==0)
			goto done ;
			done :
			if( d <= i /2)
			printf ("\n %d is not a prime number", i ) ;
			else
			printf ("%d is prime \n", i ) ;
		break;
	}
	case 6:
	{ 
	int d;
		for( d = 2; d<i; d++)
		{
		if (i%d==0) 
		{printf("%d ", d);}
		}
		if(d==i) 
		{printf("%d is prime", i);}
		
	break;
	}
	case 7:
	{
		int d, sum;
		sum=0;
		for( d = 1; d<i; d++)
		{
		if (i%d==0) 
		{sum+=d;}
		}
		if(sum==i) 
			{printf("%d is perfect", i);}
		else 
			printf("%d is not perfect", i);
	}
	}
 printf("\n If you wish to quit, press Q \n");
 fflush(stdin);
 scanf("%c", &q);

    } while(q!='Q'&&q!='q');

return 0;
}