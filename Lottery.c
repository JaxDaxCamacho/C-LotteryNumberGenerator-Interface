#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int input=0,numGerados[5],estGerados[2],numInseridos[5],estInseridos[2],nif=0,val=0,cval=0,i,u;

int opcao2(){
	int i,x;
	for(i=0;i<5;i++)
		{printf("insira o %i numero, entre 1 e 50 \n",i+1);
			scanf("%i",&x);
			if(x>=1 && x<=50)
			{
			    for(i=0;i<5;i++)
		{printf("insira o %i numero, entre 1 e 50 \n",i+1);
			scanf("%i",&x);
			for(u=0;u<5;u++)
			{
				while(x==numInseridos[u]){
					printf("numero repetido, insira outro numero");
					scanf("%i",&x);
				}
			}
			numInseridos[i]=x;
		}
		
			}else return 0;
		}
	for(i=0;i<2;i++)
		{printf("insira a %i estrela, entre 1 e 12 \n",i+1);
			scanf("%i",&x);
			for(u=0;u<2;u++)
			{
				while(x==estInseridos[u]){
					printf("numero repetido, insira outro numero");
					scanf("%i",&x);
				}
			}
			estInseridos[i]=x;
		}
		
	printf("a chave introduzida foi : \n (numeros) ");
	for(i=0;i<5;i++)
		{printf("%i ",numInseridos[i]);}
	printf("(estrelas)");
	for(i=0;i<2;i++)
		{printf("%i ",estInseridos[i]);}
	return 1;
}


void opcao3() {
	int i,x;
	time_t t;
	srand((unsigned) time(&t));

	for ( i = 0; i < 5; i++ ) {
			x = rand() % 50;
			for(u=i;u>=0;u--)
			{
				while(x==numGerados[u]){
					printf("numero repetido, a correr outro...");
					x = rand() % 50;
				}
			}
			numGerados[i]=x;
}
		for ( i = 0; i < 2; i++ ) {
			srand(time(0));
			x = rand() % 12;
			for(u=0;u<2;u++)
			{
				while(x==estGerados[u]){
					printf("estrela repetida, a correr outro...");
					x = rand() % 12;
				}
			}
			estGerados[i]=x;
}
	printf("a chave gerada foi : \n (numeros) ");
	for(i=0;i<5;i++)
		{printf("%i ",numGerados[i]);}
	printf("(estrelas)");
	for(i=0;i<2;i++)
		{printf("%i ",estGerados[i]);}	 
}

int main (){

printf("Bem vindo ao Euromilhões \n Insira um numero para navegar no menu \n \n 1-Introduzir NIF \n 2-Preencha a chave do Euromilhões \n 3-Gere a Chave do Euromilhões \n 4- Prémios \n 5-Sair");

while ( input != 5 ){
		scanf("%i",&input);
		switch ( input ) {
			
			case 1: 
				printf("Introduza o seu NIF: \n "); 
				scanf("%i", &nif);
				printf("NIF inserido: %i",nif);
				break;
			
			case 2: printf("Insira a sua chave do Euromilhoes: \n (Composta por 5 numeros e 2 estrelas): \n"); 
						val=opcao2();
						if(val==0){
							printf("numero inserido invalido, vamos voltar para o Menu");
							input=2;break;
						}else printf("numero inserido valido, Parabens!");break;

			break;
			
			case 3: 
			
				printf("A chave do euromilhoes e: \n");
				opcao3();
				 
				
				break;
			
			case 4: 
				printf("1.º Premios - 12.000.000€: \n"); 
				printf("2.º Premios - 1400.245€: \n");
				printf("3.º Premios - 234.650€: \n");
				printf("4.º Premios - 1400.12€: \n");
				printf("5.º Premios - 145.88€: \n");
				break;
						
		}
		
	}		
	
	printf("Obrigado pela preferencia... Volte Sempre! :)");
	
	return 0;
	
}