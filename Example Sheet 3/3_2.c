
#include <stdio.h> 
#define MAX 10 
 
int main(void)
{
	
int d, m, y;
char q;

do {
	printf("Enter the date in the form dd.mm.yyyy \n");

	scanf("%d.%d.%d", &d, &m, &y);

	if (d==1||d==21||d==31)
		printf("\nToday is the %dst of", d);

	else if (d==2||d==22)
		printf("\nToday is the %dnd of", d);

	else if (0<d && d<=31)
		printf("\nToday is the %dth of", d);
	else 
		printf("Invalid");

	char month[12][MAX]={"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", 
	"October", "November", "December"};
		if (0<m && m<12 && y>0)
			printf(" %s, %d", month[m-1], y);
		else if ( 0<m && m<12 && y<0)
			printf(" %s, Invalid", month[m-1]);
		
		else 
			printf(" Invalid, Invalid");
		
	printf("\n If you wish to quit, input Q \n"); 
	fflush(stdin);
	scanf("%c", &q);
	}
	
	while (q!='Q');
	
return 0;
}