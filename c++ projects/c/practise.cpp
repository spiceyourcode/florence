#include<stdio.h>

int main()
{
	float number, sum ;
	number=1;
	sum= number+=number;


	
	printf("the number is %d " , &number);
	printf("the sum is: %i" ,&sum) ;
	return 0;
}