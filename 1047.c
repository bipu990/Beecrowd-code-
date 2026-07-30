#include <stdio.h>
int main ()
{
    int a,b,x,y;
    scanf ("%d %d %d %d",&a,&b,&x,&y);
    
    if (a<x && b<y)
    {
        int hour = x-a;
        int min = y-b;
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a>x && b>y)
    {
        int hour = ((24+x)-a)-1;
        int min = ((60-b)+y);
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a<x && b>y)
    {
        int hour = (x-a)-1;
        int min = ((60-b)+y);
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a>x && b<y)
    {
        int hour = ((24+x)-a);
        int min = y-b;
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a==x && b<y)
    {
        int hour = 0;
        int min = y-b;
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a==x && b>y)
    {
        int hour = 23;
        int min = ((60-b)+y);
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a<x && b==y)
    {
        int hour = x-a;
        int min = 0;
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a>x && b==y)
    {
        int hour = (24+x)-a;
        int min = 0;
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    else if (a==x && b==y)
    {
        int hour = 24;
        int min = 0;
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    }
    
    return 0;
}
