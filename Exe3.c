#include <conio.h>
#include <stdio.h>

int main()
{
	float pht, ttva, pttc;
	int nbr;
	
	printf("Entrez le prix hors taxes: ");
	scanf("%f", &pht);
	
	printf("Entrez le nombre d'articles: ");
	scanf("%d", &nbr);
	
	printf("Entrez le taux de TVA: ");
	scanf("%f", &ttva);
	
	pttc = nbr * pht * (1 + ttva);
	
	printf("Le prix toutes taxes est: %f", pttc);
	
	getch();
}
