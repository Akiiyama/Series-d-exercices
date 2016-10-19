#include <stdio.h>

int main()
{
	float montant, reduction = 0;
	printf("Entrez le montant de l'achat: ");
	scanf("%f", &montant);
	
	if (montant > 5000)
		reduction = 20;
	
	else if (montant > 3000)
		reduction = 15;
		
	else if (montant > 1000)
		reduction = 10;
		
	printf("Avec la reduction de %.0f %%, Le montant final a payer est: %.2f DH", reduction, montant - montant * reduction / 100);
}
