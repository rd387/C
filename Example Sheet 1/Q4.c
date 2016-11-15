# include <stdio.h>

int modulo (int , int ); /* function prototype declaration */ 

int main ( void ) 

{
int i, j, r, x;

i =1239; 

j =67;

x= (i-(i%j))/j;


r= modulo (i,j);

printf ("i / j = %d + %d / %d\n", x, r, j);

return 0;
}

int modulo (int x, int y)

{

return x%y;

}