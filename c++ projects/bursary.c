#include <stdio.h>
int main()
{
    float mark1, mark2, mark3, sum, avg;
    printf("enter marks obtained in 3 subjects: ");
    scanf("%f%f%f", &mark1, &mark2, &mark3);
    sum = mark1 + mark2 + mark3;
    avg = sum / 3;
    printf("\ngrade = ");
    if (avg >= 91 && avg <= 100)
    {
        printf("A");
    }
    else if (avg >= 81 && avg < 91)
    {
        printf("A-");
    }
    else if (avg >= 71 && avg < 81)
    {
        printf("B+");
    }
    else if (avg >= 61 && avg < 71)
    {
        printf("B");
    }
    else if (avg >= 51 && avg < 61)
    {
        printf("C+");
    }
    else if (avg >= 41 && avg < 51)
    {
        printf("C");
    }
    else if (avg >= 33 && avg <= 41)
    {
        s
            printf("C+");
    }
    else if (avg >= 21 && avg < 33)
    {
        printf("D");
    }
    else if (avg >= 0 && avg < 21)
    {
        printf("E");
    }
    else
    {
        printf("invalid!");
    }
    return 0;
}
