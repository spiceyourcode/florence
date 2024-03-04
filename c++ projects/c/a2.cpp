#include <stdio.h>

#include <math.h>
 
int main()
{
    float weight, height, bmi;
 
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in cm: ");
    scanf("%f", &height);
 
    //Calculate BMI
    height = height / 100; //Convert height to meters
    bmi = weight / pow(height, 2);
 
    //Check BMI status
    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 25)
    {
        printf("Normal");
    }
    else if (bmi > 25)
    {
        printf("Overweight");
    }
 
    return 0;
};