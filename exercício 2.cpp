#include<stdio.h>
#include<stdlib.h>

int main()
{
	//declação de variaveis
	float L1, L2, L3;
	//declaração de dados
	printf("\nDigite valor do lado 1:");
	scanf("%f", &L1);
	printf("\nDigite valor do lado 2:");
	scanf("%f", &L2);
	printf("\nDigite valor do lado 3:");
	scanf("%f", L3);
	//testar se o triãngulo é válido
	if(((L1+L2)<L3)||((L2+L3)<L1)||((L1+L3)<L2)){
		printf("Triângulo não é válido");}
	else
	//verificar tipo do triângulo
        if((L1=L2)&&(L2=L3)){
		    printf("Triângulo é equilátero");}
        else
	        if((L1!=L2)&&(L2!=L3)&&(L1!=L3)){
	           printf("Triângulo é escaleno");}
	        else
	            if((L1=L2)&&(L1!=L3)||(L2=L3)&&(L2!=L1)||(L1=L3)&&(L1!=L2)){
                    printf ("Triânguloe isoseles");}
		   
	    
    
}
