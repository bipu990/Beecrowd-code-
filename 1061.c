
#include <stdio.h>

int main()
{
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int start, end, total;
    int day, hour, minute, second;

    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf(" Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    start = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    end = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

    total = end - start;

    day = total / 86400;
    total = total % 86400;

    hour = total / 3600;
    total = total % 3600;

    minute = total / 60;
    second = total % 60;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);

    return 0;
}
