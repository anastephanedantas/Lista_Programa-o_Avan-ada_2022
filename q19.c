#include<stdio.h>
#include<locale.h>
#include "gc.h"


void vectorRead (int tam, int *vt);
void vectorWrite (int tam, int *vt);
void vectorPlus (int tam, int *vta, int *vtb, int *vtc);


int main (void){
	 
	setlocale(LC_ALL,"");
	
	int tamanho, *a, *b, *c, i;
	char nomeA[10], nomeB[10], nomeC[10];
	
	printf("Quantos elementos haverá nos vetores: ");
	scanf("%d", &tamanho);
		
		fflush(stdin);
		
		printf("digite o nome do vetor A: ");
		gets(nomeA);
		
		printf("digite o nome do vetor B: ");
		gets(nomeB);
	
		printf("digite o nome do vetor soma: ");
		gets(nomeC);

	a = GC_malloc_ATOMIC(tamanho*sizeof(int));
	b = GC_malloc_ATOMIC(tamanho*sizeof(int));
	c = GC_malloc_ATOMIC(tamanho*sizeof(int));
	
	vectorWrite (tamanho, a); 
	vectorWrite (tamanho, b);
	
	printf("\n");
	
	printf("%s: ", nomeA);
	vectorRead(tamanho, a);
	
	printf("\n");
	
	printf("%s: ", nomeB);
	vectorRead(tamanho, b);
	
	printf("\n");
	
	vectorPlus(tamanho, a, b, c); 
	
	printf("%s: ", nomeC);
	vectorRead(tamanho, c);
	
}


void vectorWrite (int tam, int *vt){
	unsigned int i = 0;
	
	for(i = 0; i < tam; i++){
		vt[i] = (rand()%100);
	}	
}


void vectorRead (int tam, int *vt){
	unsigned int i = 0;
	
	for(i = 0; i < tam; i++){
		printf("%d ", vt[i]);
	}		
}

void vectorPlus(int tam, int *vta, int *vtb, int *vtc){
	int i;
	for(i = 0; i < tam; i++){
		vtc[i] = vta[i] + vtb[i];
	}
	
}