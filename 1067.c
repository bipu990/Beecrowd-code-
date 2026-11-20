#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int i = 1;

    while (i <= x)
    {
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}
