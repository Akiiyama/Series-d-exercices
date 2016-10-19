#include <stdio.h>

int main()
{
	int nbr1, nbr2, nbr3;
	printf("Entrez trois nombres: ");
	scanf("%d\t%d %d", &nbr1, &nbr2, &nbr3);
	
	int max = nbr1, min = nbr1;
	
	if (max < nbr2)
		max = nbr2;
	
	if (max < nbr3)
		max = nbr3;

	if (min > nbr2)
		min = nbr2;
		
	if (min > nbr3)
		min = nbr3;

	printf("Le maximum est: %d\n", max);
	printf("Le minumum est: %d\n", min);
	printf("La somme est: %d\n", nbr1 + nbr2 + nbr3);
	printf("Le produit est: %d", nbr1 * nbr2 * nbr3);
}
