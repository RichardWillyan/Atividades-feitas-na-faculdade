#include<stdio.h>
#include<stdlib.h>

int main()
{
	//decla��o de variaveis
	float L1, L2, L3;
	//declara��o de dados
	printf("\nDigite valor do lado 1:");
	scanf("%f", &L1);
	printf("\nDigite valor do lado 2:");
	scanf("%f", &L2);
	printf("\nDigite valor do lado 3:");
	scanf("%f", L3);
	//testar se o tri�ngulo � v�lido
	if(((L1+L2)<L3)||((L2+L3)<L1)||((L1+L3)<L2)){
		printf("Tri�ngulo n�o � v�lido");}
	else
	//verificar tipo do tri�ngulo
        if((L1=L2)&&(L2=L3)){
		    printf("Tri�ngulo � equil�tero");}
        else
	        if((L1!=L2)&&(L2!=L3)&&(L1!=L3)){
	           printf("Tri�ngulo � escaleno");}
	        else
	            if((L1=L2)&&(L1!=L3)||(L2=L3)&&(L2!=L1)||(L1=L3)&&(L1!=L2)){
                    printf ("Tri�nguloe isoseles");}
		   
	    
    
}
