//biblioteca para acentua��o
#include <locale.h>
//bibliotecas de comandos
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
//comando para acentua��o	

setlocale (LC_ALL, "Portuguese");

//declara��o de vari�veis
    
	int M, A, FB;
	
//leitura de dados

    cout << "Informe o ano: " << endl;
	cin >> A;
	cout << "Informe o m�s: " << endl;
	cin >> M;
	      
//verificar se o ano � bissesxto
	if (A % 400==0){
		cout << "� bissexto" << endl;
		FB=29;
		}
	else
	{
	    if((A % 4==0)&&(A % 100!=0)){
		    cout << "� bissexto" << endl;
		    FB=29;
		}
		else
		{
		    cout << "N�o � bissexto" << endl;
			FB=28;
        }		
	}
//informar quantidade de dias do m�s	
	switch (M)
	{
		case 1:
			cout << "Este m�s possui 31 dias" << endl;
			break;
		case 2:
			if(FB==29){
			   cout << "Este m�s possui 29 dias" << endl;}
			else{
				cout << "Este m�s possui 28 dias" << endl;
			}    
			break;
		case 3:
			cout << "Este m�s possui 31 dias" << endl;
			break;
		case 4:
			cout << "Este m�s possui 30 dias" << endl;
			break;
		case 5:
		    cout << "Este m�s possui 31 dias" << endl;
			break;
		case 6:
			cout << "Este m�s possui 30 dias" << endl;
			break;
		case 7:
		    cout << "Este m�s possui 31 dias" << endl;
		    break;
		case 8:
		    cout << "Este m�s possui 30 dias" << endl;
		    break;
		case 9: 	
		    cout << "Este m�s possui 31 dias" << endl;
			break;
		case 10:
			cout << "Este m�s possui 30 dias" << endl;
			break;
		case 11:
			cout << "Este m�s possui 31 dias" << endl;
			break;
		case 12:
			cout << "Este m�s possui 30 dias" << endl;
			break;                                                                                                                  
        default:
			cout << "M�s inv�lido" << endl;	
	}
	
	
	
	return 0;
		
}
