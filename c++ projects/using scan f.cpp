#include <stdio.h>
int main(int argc, char **argv)
{
	char std_name[30];
	printf("Enter your name here:");
	scanf("%s", &std_name);
	printf("Your name is %s", std_name);
	return 0;
}