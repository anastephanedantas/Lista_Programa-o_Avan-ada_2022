#include <stdio.h>
#include <stdlib.h>
#include "gc.h"
#include <assert.h>
#include <time.h>

int main(void){

int i, p2;

	clock_t t1;
	clock_t t2;

	const int size = 100000;
	
		
	t1 = clock();
        for(i = 0; i < size; i++){
            int **p1 = GC_MALLOC(sizeof(int));  
			}
	t1 = clock() - t1;
		printf ("Coletor de lixo: %f s\n",((float)t1)/CLOCKS_PER_SEC);

	t2 = clock();
    for(i = 0; i < size; i++){
        int **p2 = malloc(sizeof(int));
        free(p2);  
		}
	t2 = clock() - t2;
		printf ("Malloc/free....: %f s\n",((float)t2)/CLOCKS_PER_SEC);

 }