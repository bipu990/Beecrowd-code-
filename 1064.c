#include <stdio.h>
int main()
{
    float x;
    int count = 0;
    float z = 0;
    for (int i=1;i<=6;i++)
    {
        scanf ("%f",&x);
        if (x>0)
        count++;
        if(x>0)
        {
            z = z+x;
        }
    }
    float avg = z/count;

    printf ("%d valores positivos\n",count);
    printf ("%0.1f\n",avg);


    return 0;
}
