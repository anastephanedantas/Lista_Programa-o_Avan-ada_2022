#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv)
{
	int value, i, valor1, valor2, aux, aux2;
	float *pV;
	
	printf("Número de valores do vetor: ");
	scanf("%d", &value);
	
	pV = malloc(value*sizeof(float));
	
	for (i = 0; i<value; i++){
		printf("Valor para Posicao [%d]:", i+1);
		scanf("%f", &pV[i]);
	}
	
	for (valor1 = 0; valor1<value; valor1++){
		for(valor2 = 0; valor2<value; valor2++){
			if(valor1 == 0)
				{
				if(pV[valor1]>pV[valor2])
					{
						 aux = pV[valor2];
	  				     pV[valor2]= pV[valor1];
	  			         pV[valor1] = aux;
				}
				
					else
						{
					  if((pV[valor1] < pV[valor2]) && (pV[valor1] < pV[valor1-1]) ){
					        aux = pV[valor2];
					        pV[valor2] = pV[valor1];
					        pV[valor1] = aux;
					      }
				}
			}
		}
	}
	
	printf("Ordem crescente dos valores: \n");
		for (aux2 = 0; aux2<value; aux2++){
   	   	   printf("%f \n", pV[aux2]);
}

	free(pV);
	return 0;
}
