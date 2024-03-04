#include<stdio.h>
int main()
{
	char sales_agentname[30];
	float sales_volume,commission;
   	printf("Enter sales_agentname:");
 	fgets(sales_agentname,30,stdin);
 	printf("The Sales Agent Name:");
 	puts(sales_agentname);
 
 	
	printf("\nEnter sales_volume:");
	scanf("%f",&sales_volume);
	
	if(sales_volume>=5000)
	{
		commission=sales_volume*0.15;
		printf("commission=%f\n",commission);
	}
	else if(sales_volume>=4000&&sales_volume<=4999)
	{
		commission=sales_volume*0.12;
		printf("commission=%f\n\n",commission);
	}
	else if(sales_volume>=3000&&sales_volume<=3999)
	{
		commission=sales_volume*0.09;
		printf("commission=%f\n\n",commission);
	}
	else if(sales_volume>=2000&&sales_volume<=2999)
	{
		commission=sales_volume*0.06;
		printf("commission=%f\n\n",commission);
	}
	else
	{
		commission=sales_volume*0.03;
		printf("commission=%f\n\n",commission);
	}
	
	return 0;						
}