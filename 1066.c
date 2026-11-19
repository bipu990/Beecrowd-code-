#include <stdio.h>
int main()
{
    int x,y;

    int ev = 0;
    int od = 0;
    int pos = 0;
    int neg = 0;

    for (int i=1;i<=5;i++)
    {
        scanf ("%d",&y);
        if (y%2 == 0 || y==0)
            ev++;
        else 
        od++;
        if (y>0)
        pos++;
        else if (y<0) 
        neg++;
    }

    printf ("%d valor(es) par(es)\n",ev);
    printf ("%d valor(es) impar(es)\n",od);
    printf ("%d valor(es) positivo(s)\n",pos);
    printf ("%d valor(es) negativo(s)\n",neg);
    

    return 0;
}
