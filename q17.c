#include <stdio.h>
#include <stdlib.h>

int *soma(int *x1, int *x2, int n){
		int i;
		int *sum = (int *) malloc(n * sizeof(int));
				for(i = 0; i < n; i++){
			sum[i] += x1[i] + x2[i];
		}
		
return sum;
}

int main(int argc, char** argv)
{
	int *xA, *xB, nA, aux, nB, i;
	printf("Digite o número de elementos do vetor A: ");
	scanf("%d", &nA);
	printf("Digite o número de elementos do vetor B: ");
	scanf("%d", &nB);
	

			if(nA == nB)
				{
		
					xA = malloc(nA*sizeof(int));
					xB = malloc(nB*sizeof(int));
	
		
				for(i = 0; i < nA ; i++)
			{
				printf("Vetor A[%d] = ", i+1);
				scanf("%d", &xA[i]);	  		  		
		}
	
			for(i = 0; i < nB ; i++)
		{
			printf("Vetor B[%d] = ", i+1);
			scanf("%d", &xB[i]);
	}
	
}else
	{
		printf("Vetores não são de mesma ordem");
}

	return 0;
}
