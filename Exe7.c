#include <stdio.h>

int main()
{
	float a, b;
	printf("Pour l'equation ax + b = 0\nEntrez a: ");
	scanf("%f", &a);
	printf("Entrez b: ");
	scanf("%f", &b);
	
	if (a == 0)
	{
		if (b == 0)
			printf("L'equation est correcte quelque soit x");
		
		else
			printf("L'equation est incorrecte quelque soit x");
	}
	else
		printf("La solution est: x = %f", -b/a);
}
