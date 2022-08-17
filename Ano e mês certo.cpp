//biblioteca para acentuação
#include <locale.h>
//bibliotecas de comandos
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
//comando para acentuação	

setlocale (LC_ALL, "Portuguese");

//declaração de variáveis
    
	int M, A, FB;
	
//leitura de dados

    cout << "Informe o ano: " << endl;
	cin >> A;
	cout << "Informe o mês: " << endl;
	cin >> M;
	      
//verificar se o ano é bissesxto
	if (A % 400==0){
		cout << "É bissexto" << endl;
		FB=29;
		}
	else
	{
	    if((A % 4==0)&&(A % 100!=0)){
		    cout << "É bissexto" << endl;
		    FB=29;
		}
		else
		{
		    cout << "Não é bissexto" << endl;
			FB=28;
        }		
	}
//informar quantidade de dias do mês	
	switch (M)
	{
		case 1:
			cout << "Este mês possui 31 dias" << endl;
			break;
		case 2:
			if(FB==29){
			   cout << "Este mês possui 29 dias" << endl;}
			else{
				cout << "Este mês possui 28 dias" << endl;
			}    
			break;
		case 3:
			cout << "Este mês possui 31 dias" << endl;
			break;
		case 4:
			cout << "Este mês possui 30 dias" << endl;
			break;
		case 5:
		    cout << "Este mês possui 31 dias" << endl;
			break;
		case 6:
			cout << "Este mês possui 30 dias" << endl;
			break;
		case 7:
		    cout << "Este mês possui 31 dias" << endl;
		    break;
		case 8:
		    cout << "Este mês possui 30 dias" << endl;
		    break;
		case 9: 	
		    cout << "Este mês possui 31 dias" << endl;
			break;
		case 10:
			cout << "Este mês possui 30 dias" << endl;
			break;
		case 11:
			cout << "Este mês possui 31 dias" << endl;
			break;
		case 12:
			cout << "Este mês possui 30 dias" << endl;
			break;                                                                                                                  
        default:
			cout << "Mês inválido" << endl;	
	}
	
	
	
	return 0;
		
}
