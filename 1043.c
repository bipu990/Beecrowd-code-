#include <stdio.h>

float pir (float a,float b,float c)//EKHAEN float use hobe jodi  (int) use kora hoto tahole man gulo int akare asto .
{
    return a+b+c;
}
float trap (float a,float b,float c)
{
    return (1.0/2)*(a + b)*c;
}
int main ()
{
    float x,y,z;
    scanf ("%f %f %f",&x,&y,&z);
    
    if (x+y>z && y+z>x && x+z>y)
    {
        printf ("Perimetro = %.1f\n",pir(x,y,z));
    }
    else
    {
        printf ("Area = %.1f\n",trap(x,y,z));
    }
    
    return 0;
}
