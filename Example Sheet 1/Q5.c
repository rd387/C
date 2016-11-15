# include <stdio.h>
#define MIN 60
#define HOUR 360
#define DAY 86400


int main ( void ) 

{
int i, d, h, m, s;
int j, k;

i =368997984; 

d= ((i-(i%DAY))/DAY);

j=i%DAY;

h= ((j-(j%HOUR))/HOUR);

k=j%HOUR;

m=((k-(k%MIN))/MIN);

s= k%MIN;



printf ("%d seconds = %d days, %d hours, %d minutes and %d seconds", i, d, h, m, s);

return 0;
}

