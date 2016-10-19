#include <stdio.h>

int main()
{
	float prix = 0;
	int nbr;
	printf("Entrez le nombre de photocopies: ");
	scanf("%d", &nbr);
	
	if (nbr > 10)
	{
		prix = 10 * 0.50;
		nbr -= 10;
		
		if (nbr > 10)
		{
			prix += 10 * 0.30;
			nbr -= 10;
			prix += nbr * 0.25;
		}
		else
			prix += nbr * 0.30;
	}
	else
		prix = nbr * 0.50;
		
	printf("La facture est: %.2f DH", prix);
}
