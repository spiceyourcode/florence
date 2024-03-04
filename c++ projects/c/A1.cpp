#include <stdio.h>
#include <string.h>
int main ()
{
    char studentcategory [20];
    int amount = 0;

	
    printf("Enter student category");
    scanf("%s",studentcategory);

    if (strcmp(studentcategory, "needy") == 0)
        amount = 40000;
    else if (strcmp(studentcategory, "special") == 0)
        amount = 40000;
    else if (strcmp(studentcategory, "single") == 0)
        amount = 30000;
    else if (strcmp(studentcategory, "marginalised") == 0)
        amount = 35000;
    else if (strcmp(studentcategory, "other") == 0)
        amount = 10000;
    else 
        amount = 0;
    printf("Amount allocated: %d", amount);
    return 0;
}    