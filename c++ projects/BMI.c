#include <stdio.h>
#include <math.h>
int main()
{
	float height, weight, bmi;
	printf("Enter height in metres:");
	scanf("%f", &height);
	printf("Enter weight in kilograms:");
	scanf("%f", &weight);

	bmi = weight / pow(height, 2);

	bmi = weight / (height * height);

	printf("Your Body Mass Index(BMI) is %f\n", bmi);

	if (bmi <= 20)
	{
		printf("Your BMI message is :Lower than normal weight\n");
	}
	else if (bmi >= 20 && bmi <= 25)
	{
		printf("Your BMI mesaage is :Normal weight\n");
	}
	else if (bmi >= 26 && bmi <= 30)
	{
		printf("Your BMI message is :Overweight\n");
	}
	else if (bmi >= 31 && bmi <= 40)
	{
		printf("Your BMI message is :Obese\n");
	}
	else
	{
		printf("Your BMI message is :Extreme obese\n");
	}

	return 0;
}