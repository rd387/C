#include <stdio.h>
#include <math.h>
int main()
{
    char q;
    char v='q';
    char w= 'Q';
    int d;
    do{
        printf("Please input the number of decimal places between 1-6: \n");
        scanf("%d", &d);
        getchar();
        float x=1;
        float a=1;
        for(float n=1; n<=10000; n++)
        {
            
            x=x/n;
            a=x+a;
            if(x<pow(0.1,(d+1))) break;
            switch (d)
            {
                case 1: printf("%0.1f \n",a);
                    break;
                case 2: printf("%0.2f \n",a);
                    break;
                case 3: printf("%0.3f \n",a);
                    break;
                case 4: printf("%0.4f \n",a);
                    break;
                case 5: printf("%0.5f \n",a);
                    break;
                case 6: printf("%0.6f \n",a);
                    break;
                default: printf("%0.6f \n",a);
                    break;
                    
            }
            
        }
        
        
        
        printf("\n If you wish to quit, press Q \n");
        fflush(stdin);
        scanf("%s", &q);
        
    } while(q!=v && q!=w);
    
    return 0;
    
}
