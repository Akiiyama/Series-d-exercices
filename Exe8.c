#include <stdio.h>
#include <math.h> // sqrt()

int main()
{
	float a, b, c;
	printf("Pour l'equation ax² + bx + c = 0 \nEntrez a: ");
	scanf("%f", &a);
	printf("Entrez b: ");
	scanf("%f", &b);
	printf("Entrez c: ");
	scanf("%f", &c);
	
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				printf("L'equation est correcte quelque soit x");
			
			else
				printf("L'equation est incorrecte quelque soit x");
		}
		else
			printf("La solution est: x = %f", -c/b);
	}
	else
	{
		float delta = b*b - 4 * a * c;
		float sqrt_delta = sqrt(delta); // la fonction sqrt sert a calculer la racine carré d'un nombre,
		
		if (delta > 0)
			printf("La solution est: x = %f ou x = %f", (-b-sqrt_delta)/(2*a), (-b+sqrt_delta)/(2*a));
			
		else if (delta == 0)
			printf("La solution est: x = %f", -b/(2*a));
			
		else
			printf("L'equation est incorrecte quelque soit x");
	}
		
}
