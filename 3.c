#include <stdio.h>


int main(int argc, char** argv)
{
	
	int INDICE=12,SOMA=0,K=1;
	
	while(K<INDICE)
	{
		K = K + 1;
		SOMA += K;
		K++;
	};
	printf("SOMA=%d",SOMA);
	
	return 0;
}