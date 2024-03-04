#include<stdio.h>
int main()

{
	float height, weight ,bmi;
	printf("Enter height in Meters:");
	scanf("%f",&height);
	printf("Enter weight in kilograms:");
	scanf("%f",&weight);
	
	bmi=weight/(height*height);
	
	printf("Your body mass index (BMI) is %f\n");
	
	if (bmi<=20)
		
		printf("Your BMI mesage is :lower than normal weight\n");
	
	else if (bmi>=20&&bmi<=25)
		
		printf("your BMI message is :Normalweight\n");
	else if (bmi>=26&&bmi<=30)
		
		printf("your BMI message is : Overweight\n");
	else if (bmi>31&&bmi<=40)
		printf("Your Bmi message is :Obese\n");
	else
		
	
		printf("your bmi message is :Extreme obese\n");
	
	
	return 0;
}