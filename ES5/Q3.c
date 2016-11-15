
# include <stdio.h>

int main (void)
{
	int a1,a2,b1,b2;
	char q;
	do {
	printf ("Please enter your line in the form y=ax+b: \n");
	scanf ("y= %dx + %d", &a1, &b1);
	getchar();
	printf ("Please enter your second line: \n");
	scanf ("y= %dx + %d", &a2, &b2);
	getchar();
	
	if(a1==a2 && b1==b2)
	{
		printf("The lines are the same");
	}
	else if (a1==a2)
	{
		printf("The lines do not intersect");
	}
	else 
	{
		int a=a1-a2;
		int b=b2-b1;
		int x=b/a;
		int y=x*a1+b1;
		printf("The lines meet at the point: x=%d y=%d", x,y);
	}
	
	printf("\n If you wish to quit, press Q \n");
	fflush(stdin);
	scanf("%c", &q);
	
	}while(q!='Q'&&q!='q');
	
	
	return 0;
}