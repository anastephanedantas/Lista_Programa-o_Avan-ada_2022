#include <stdio.h>
#include <stdlib.h>

float value[] = {1.5, 5, 2, 40, 25};

int compare (const void * a, const void * b)
{
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}


int main(int argc, char** argv)
{
	
	int i;
	qsort(value, 5, sizeof(float), compare);
	for(i = 0; i < 5; i++)
		{
			printf("%f\n", value[i]);
	}
	return 0;
}