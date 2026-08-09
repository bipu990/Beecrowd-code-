#include <stdio.h>
int main()
{
    float x;
    scanf ("%f",&x);
    
    if (x>= 0 &&  x<= 400)
    {
         float m = x*(15.0/100);
         float n =  x+m;
         printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 15 %\n",n,m);
    }

    else if (x>= 400.01 &&  x<= 800)
    {
         float m = x*(12.0/100);
         float n = x+m;
         printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 12 %\n",n,m);
    }

    else if (x>= 800.01 &&  x<= 1200)
    {
        float m = x*(10.0/100);
        float n = x+m;
        printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 10 %\n",n,m);
    }
    
    else if (x>= 1200.01 &&  x<= 2000)
    {
         float m = x*(7.0/100);
         float n = x+m;
         printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 7 %\n",n,m);
    }
   
    else if (x>= 2000)
    {
         float m = x*(4.0/100);
         float n = x+m;
         printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: 4 %\n",n,m);
    }

    
    
    return 0;
}
