#include <stdio.h>
int main()
{
	char std_name[30];
	printf("Enter your name here\n");
	fgets(std_name ,sizeof(std_name), stdin);
	printf("your name is ");
	puts(std_name);
	
}