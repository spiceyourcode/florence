#include <stdio.h>
int main()
{
    float num1, num2, sum;
    printf("enter the first number");
    scanf("%f", &num1);

    printf("enter the first number");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("the first number is=%f\n", num1);
    printf("the second number is =%f\n", num2);

    printf("\nthe sum of the numbers is:", sum);
    return 0;
}