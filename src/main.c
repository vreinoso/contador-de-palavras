/* EA879 - Tarefa 1: Contador de Palavras 
   Este programa recebera uma serie de caracteres representando palavras em sua
   entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
   numero de palavras separadas que recebeu e, apos, encerrar.
   Vitoria Reinoso RA 149057
 */

#include <stdio.h>

int main() {
	char c_atual=1, c_anterior=0;
	int n = 1, simb = 0; 

	
	//escaneia caracter a caracter ate o fim da linha
	while (c_atual != '\n') {
    
		scanf("%c", &c_atual);
    
		// sinaliza se o caracter eh um simbolo, espaco ou pontuacao (tabela ASCII).
		if(c_atual>=32 && c_atual<=47){ 
   			simb=1;
     		}
		
		//conta uma palavra se o caracter atual eh uma letra ou numero e o anterior eh uma pontuacao
		else if(((simb==1) && (c_atual != '\n')) && (!((c_atual>=48 && c_atual<=57) && (c_anterior == '.' ||  c_anterior == ',')))){
        		n++;
      			simb = 0;
      		}
		
		else{
       			simb = 0; //para nao contar um float duas vezes
     		}

    		c_anterior = c_atual; //salva caracter anterior para comparacao na proxima iteracao

	}
  
	printf("%d\n", n); //imprime o valor n de palavras da frase

	return 0;
}
