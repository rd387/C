

# include <stdio.h> 

int main (void)
{
printf("Please input any time in the 24hr format: \n");

int h, m, nh;

scanf ("%d:%d", &h, &m);

if (h<=12)
	printf("The time in 12hr format is: %d:%d AM", h, m);
else 
	nh=h-12;
	printf("The time in 12hr format is: %d:%d PM", nh, m);
	

return 0;
}
