#include <stdio.h>


int main(void)
{
	int  z, x=0;
	float a, t;
	printf(" TABELA DE PREÇOS\n           R$\n1-Coca    3,50\n2-Ice     5,80\n3-Guarana 2,10\n4-Suco    1,90\n5-Cafe    0,70\n\n");
	printf("Coloque a numeraçao do item a ser escolhido:");
	scanf("%d", &z);
	
	if(z==1)
	{
		printf("Voce escolheu Coca\n Insira o valor para o pagamento:");
		scanf("%f", &a);
		t = a - 3.50;
	}
	else 
		if(z==2)
		{
			printf("Voce escolheu Ice\n Insira o valor para o pagamento:");
			scanf("%f", &a);
			t = a - 5.80;
		}
		else 
			if(z==3)
			{
				printf("Voce escolheu Guarana\n Insira o valor para o pagamento:");
				scanf("%f", &a);
				t = a - 2.10;
			}
			else 
				if(z==4)
				{
					printf("Voce escolheu Suco\n Insira o valor para o pagamento:");
					scanf("%f", &a);
					t = a - 1.90;
				}
				else 
					if(z==5)
					{
						printf("Voce escolheu cafe\n Insira o valor para o pagamento:");
						scanf("%f", &a);
						t = a - 0.70;
					}
	printf("Seu troco foi %.2f reais na qual o troco sera dado em :\n", t);
	
	while(t>0)
	{
		if(t>=1)
		{
			while(t>=1)
			{
				t = t -1.0;
				x++;
			}
			printf("%d moedas de 1 real\n", x);
		}
		else
			if(t<1 && t>=0.50)
				{	
					while(t<1 && t>=0.50)
					{	
						t = t -0.50;
						x=0;
						x++;
					}
					printf("%d moedas de 50 centavos\n", x);
				}
				else
					if(t<0.50 && t>=0.25)
					{
						while(t<0.50 && t>=0.25)
						{
							t = t -0.25;
							x=0;
							x++;

						}
						printf("%d moedas de 25 centavos\n", x);
					}
					else
						if(t<0.25 && t>=0.10)
						{
							while(t<0.25 && t>=0.10)
							{
								t = t - 0.10;
								x=0;
								x++;
							}
							printf("%d moedas de 10 centavos\n", x);
						}
						else
							if(t<0.10 && t>=0.05)
							{
								while(t<0.10 && t>=0.05)
								{
									t = t - 0.05;
									x=0;
									x++;
								}
								printf("%d moedas de 5 centavos\n", x);
							}

	}

	if(t==0)
		printf("Operacao feita com sucesso!\n");

	return 0;


}
