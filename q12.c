#include <stdio.h>
#include <stdlib.h>


int perimetro (int a){
	return a*4;
}
int main(int argc, char** argv)
{
	int (*px)(int) = &perimetro;
	printf("O perimetro e: %d", px(2));
	return 0;
}

