#include <stdio.h>

int main()
{
	int age, ancien, salaire;
	printf("Entrez l'age du licencie: ");
	scanf("%d", &age);
	printf("Entrez l'anciennete du licencie par annee: ");
	scanf("%d", &ancien);
	printf("Entrez le dernier salaire du licencie: ");
	scanf("%d", &salaire);
	
	int indemnite = 0;
	
	if (ancien > 10)
		indemnite = salaire * ancien;
		
	else if (ancien > 0)
		indemnite = salaire * ancien / 2;
		
	if (age > 49)
		indemnite += 5 * salaire;
	
	else if (age > 45)
		indemnite += 2 * salaire;
		
	printf("L'indemnite du cadre liciencie est: %d DH", indemnite);
}
