#include <stdio.h>
#include <stdlib.h>
#include "BuscaBinaria.h"

int busca_binaria(int *V, int inicio, int final, int VALOR){ 

/*===============================================================
  | A função recebe como parametro o Vetor de numeros inteiros, |
  | o indice de inicio do vetor, o indice do final do vetor     |
  | e o valor a ser procurado                                   |
  ===============================================================*/
	
	int meio = (inicio+final)/2; //realização da escolha do pivô do vetor

	if(inicio > final){ /*condicional de segurança (Evita estouro de memoria e finaliza a
		                  função caso o valor procurado não exista)*/
		return -1;
	}

	if(V[meio] == VALOR){ /*Verifica se o valor procurado esta na posição do pivô do vetor
							(é o caso base da função)*/
		return meio; //retorna a posição onde o valor se encontra
	}

	if(V[meio] < VALOR){ /*Verifica se o valor procurado é maior que o valor
							contido na posição do pivô, caso seja a função 
							passa a procurar à direita do vetor*/
		return busca_binaria(V, meio+1, final, VALOR);
	}
	if(V[meio] > VALOR){ /*Verifica se o valor procurado é menor que o valor
							contido na posição do pivô, caso seja a função 
							passa a procurar à esquerda do vetor*/
		return busca_binaria(V, inicio, meio-1, VALOR);
	}
}