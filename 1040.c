#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, average, exam, finalAverage;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;

    printf("Media: %.1lf\n", average);

    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &exam);

        printf("Nota do exame: %.1lf\n", exam);

        finalAverage = (average + exam) / 2.0;

        if (finalAverage >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", finalAverage);
    }

    return 0;
}
