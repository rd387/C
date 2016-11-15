#include <stdio.h>
#include <math.h>

double fx (double);
double fxd (double);
int main()
{
    char q;
    char v='q';
    char w= 'Q';
    int d;
    double x;
    double x1;
    double x2;
    do{
        printf("Please input the number of decimal places between 1-6: \n");
        scanf("%d", &d);
        getchar();
        printf("Please input the first intial value: \n");
        printf("Note: Turning points at x=0 and -0.82488: \n");
        scanf("%lf", &x1);
        getchar();
        printf("Please input the second intial value: \n");
        scanf("%lf", &x2);
        getchar();
        double a;
        for(double n=0; n<=100; n++)
        {
            a=fx(x1)*((x1-x2))/(fx(x1)-fx(x2));
            x=x1-a;
            x2=x1;
            x1=x;
            // printf("%Lf \t %Lf \t %Lf \t %Lf", x,a,fx(x), fxd(x));
            if(fabs(a)<pow(0.1,(d+1))) break;
            switch (d)
            {
                case 1: printf("%0.1lf \n",x);
                    break;
                case 2: printf("%0.2lf \n",x);
                    break;
                case 3: printf("%0.3lf \n",x);
                    break;
                case 4: printf("%0.4lf \n",x);
                    break;
                case 5: printf("%0.5lf \n",x);
                    break;
                case 6: printf("%0.6lf \n",x);
                    break;
                default: printf("%0.6lf \n",x);
                    break;
                    
            }
            
        }
        
        
        
        printf("\n If you wish to quit, press Q o q \n");
		printf("Press any other key to find other roots.\n");
        fflush(stdin);
        scanf("%s", &q);
        getchar();
        
    } while(q!=v && q!=w);
    
    return 0;
    
}


double fx (double x)
{
    double f_x= pow(x,5)-0.5*pow(x,3)+x*sin(x)-0.4;
    
    return f_x;
}

double fxd (double x)
{
    double f_xd=5*pow(x,4)-1.5*pow(x,2)-sin(x)+x*cos(x);
    
    return f_xd;
}


