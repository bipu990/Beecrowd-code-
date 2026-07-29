#include <stdio.h>

int main()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    
    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        float per = x + y + z;
        printf("Perimetro = %0.1f\n", per);
    }
    else 
    {
        float area = ((x + y) * z) / 2.0;
        printf("Area = %0.1f\n", area);
    }
    
    return 0;
}
