

# include <stdio.h> 

int main (void)

{
	int i;
	
	do 
	{
	
printf("Please input a wind speed: \n");

scanf("%d", &i);

if (i<1)





printf ("If you wish to return to the start press C \n If you wish to quit, input Q \n"); 
fflush(stdin);
scanf("%s", &q);
	
}  while(q!='Q');


return 0;
}
