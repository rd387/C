

# include <stdio.h> 

int main (void)

{
	int a, b, o;
	char q;
	
	do 
	{
	
printf("Please input any two numbers: \n");



scanf("%d %d", &a, &b);

printf("Please pick an operation: \n 1: + \n 2: - \n 3: * \n 4: / \n 5: modulous  \n");

scanf("%d", &o);

			switch (o)
	{
case 1: 
	printf("Answer: %d \n", a+b);
	break;
	
case 2: 
	printf("Answer: %d \n", a-b);
	break;
	
case 3:
	printf("Answer: %d \n", a*b);
	break;
	
case 4:
	printf("Answer: %d \n", a/b);
	break;
	
case 5: 
	printf("Answer: %d \n", a%b);
	break;
	
default:
	printf("Invalid Input \n");
	break;
	}

printf ("If you wish to return to the start press C \n If you wish to quit, input Q \n"); 
fflush(stdin);
scanf("%s", &q);
	
}  while(q!='Q');


return 0;
}
