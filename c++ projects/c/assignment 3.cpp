#include<stdio.h>
int main() 

{
	char sales_agentname[30];
	float sales_volume,commission;
	printf("Enter sales_agentname:");
	
	fgets(sales_agentname,30,stdin);
	
	printf("The Sales Agent name:%c\n",sales_agentname);
	puts(sales_agentname);
	
	printf("Enter Sales Volume:");
	scanf("%f",&sales_volume);
	
	if(sales_volume>=5000)
		
		commission=sales_volume*15/100;
		printf("commission=%f",commission);
			
	else if(sales_volume>=4000&&sales_volume<=4999)
		
		commission=sales_volume*12/100;
	printf("commission=%f\n",commission);
	else if(sales_volume>=3000&&sales_volume<=3999)
		commission=sales_volume*9/100;
	printf("commission=%f\n",commission);
	else if(sales_volume>=2000&&sales_volume<=2999)
		commission=sales_volume*6/100;
	printf("commission=%f\n",commission);
	else
	{
		commission=sales_volume*3/100;
		printf("commission=%f\n",commission);
	}
		return 0;
}