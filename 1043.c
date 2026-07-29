#include <stdio.h>

float pir (int a,int b,int c)
{
    return a+b+c;
}
float trap (int a,int b,int c)
{
    return (1.0/2)*(a + b)*c;
}
int main ()
{
    float x,y,z;
    scanf ("%f %f %f",&x,&y,&z);
    
    if (x+y>z && y+z>x && x+z>y)
    {
        printf ("Perimetro = %.1f",pir(x,y,z));
    }
    else
    {
        printf ("Area = %.1f",trap(x,y,z));
    }
    
    return 0;
}
