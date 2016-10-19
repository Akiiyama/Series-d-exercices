#include <stdio.h>

int main()
{
	float prod_A = 5.00, prod_B = 2.50, prod_C = 3.00, prod_D = 10.00, prod_E = 7.00f;
	float ttva = 0.20, pht = 0;
	
	
	int nbr, somme_prod = 0;

	printf("Entrez le nombre de produit A: ");
	scanf("%d", &nbr);
	pht += prod_A * nbr;
	somme_prod += nbr;
	
	printf("Entrez le nombre de produit B: ");
	scanf("%d", &nbr);
	pht += prod_B * nbr;
	somme_prod += nbr;
	
	printf("Entrez le nombre de produit C: ");
	scanf("%d", &nbr);
	pht += prod_C * nbr;
	somme_prod += nbr;
	
	printf("Entrez le nombre de produit D: ");
	scanf("%d", &nbr);
	pht += prod_D * nbr;
	somme_prod += nbr;
	
	printf("Entrez le nombre de produit E: ");
	scanf("%d", &nbr);
	pht += prod_E * nbr;
	somme_prod += nbr;
	
	printf("Le prix hors taxe est: %f\n", pht);
	printf("La taxe sur la valeur ajoutee est: %f\n", ttva * somme_prod);
	printf("Le prix toutes taxes comprises est: %f", pht + ttva * somme_prod);
}
