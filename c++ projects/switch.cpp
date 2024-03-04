#include <stdio.h>
int main()
{
    int number, mod;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // True if remainder is 0
    mod = number % 2;
    switch (mod)
    {
    case 0:
        printf("%d is an even integer.", number);
        break;
    case 1:
        printf("%d is an odd integer.", number);
        break;

    default:
        printf("invalid number !!");
        break;
        return 0;
    }
}