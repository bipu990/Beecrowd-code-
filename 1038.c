#include <stdio.h>
int main ()
{
    int x;
    float y;
    scanf ("%d %f",&x,&y);
    
    switch (x)
    {
        case 1:
        {
            float total = y*4.0;
            printf ("Total: R$ %.2f\n",total);
            break ;
        }
        case 2:
        {
            float total = y*4.5;
            printf ("Total: R$ %.2f\n",total);
            break ;
        }
        case 3:
        {
            float total = y*5.0;
            printf ("Total: R$ %.2f\n",total);
            break ;
        }
        case 4:
        {
            float total = y*2.0;
            printf ("Total: R$ %.2f\n",total);
            break ;
        }
        case 5:
        {
            float total = y*1.5;
            printf ("Total: R$ %.2f\n",total);
            break ;
        }
    }
    
    return 0;
}
