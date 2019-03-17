#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{     
	int num_a,num_b,num_c,delta,x1,x2;
	int q;
	
	do{
		system("cls");
		
		puts ("Digite o coeficiente a");
		scanf("%d",&num_a);
		puts ("\nDigite o coeficiente b");
		scanf("%d",&num_b);
		puts ("\nDigite o coeficiente c");
		scanf("%d",&num_c);
		
		//Delta
		delta = (num_b*num_b) - (4*num_a*num_c);
		
		//Bhaskara
		x1 = ((-num_b) + sqrt(delta)) / 2*num_a;
		x2 = ((-num_b) - sqrt(delta)) / 2*num_a;
		
		
		system("cls");
		
		if(delta < 0 ){
			printf("Delta: %d\n\n",delta);
			printf("A equacao nao possui raizes reais\n\n");
			
		}else if (delta == 0){
			printf("Delta: %d\n\n",delta);
			printf("x1: %d\n\n",x1);
		}else{
			printf("Delta: %d\n\n",delta);
			printf("x1: %d\n\n",x1);
			printf("x2: %d\n\n",x2);
		}
		printf("Nova equacao? (1 = sim / 2 = nao)\n");
		scanf("%d",&q);
		
	}while(q == 1);
	
	return 0;
}

