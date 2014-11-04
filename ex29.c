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

	return 0;
}
					
