#include <stdio.h>
#include <iostream>
int main()
{
	float length, width;
	double area;
	printf("enter length here:");
	scanf("f", &length);
	printf("enter width here:");
	scanf("f", &width);

	area = length * width;
	printf("The area is %lf", area);
	return 0;
}