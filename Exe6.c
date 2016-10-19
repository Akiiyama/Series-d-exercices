#include <conio.h>
#include <stdio.h>

int main()
{
	int nbr1, nbr2;
	
	printf("Entrez le premier nombre: ");
	scanf("%d", &nbr1);
	
	printf("Entrez le deuxieme nombre: ");
	scanf("%d", &nbr2);
	
	if (nbr1 == 0 || nbr2 == 0)
		printf("Le produit de ces deux nombres est nul");
	
	else if ( (nbr1 < 0 && nbr2 < 0) || (nbr1 > 0 && nbr2 > 0) )
		printf("Le produit de ces deux nombres est positif");
		
	else
		printf("Le produit de ces deux nombres est negatif");
		
	getch();
}
