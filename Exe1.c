#include <stdio.h>
int main()
{
	int nbr_mat;
	printf("Entrez le nombre de matieres: ");
	scanf("%d", &nbr_mat);
	
	float note[nbr_mat];
	float somme_coef = 0;
	int i;
	
	for (i = 0; i < nbr_mat; i++)
	{
		printf("Entrez la note de la matiere numero %d: ", i + 1);
		scanf("%f", &note[i]);
	}
	
	int coef;
	float somme_note = 0;
	
	for (i = 0; i < nbr_mat; i++)
	{
		printf("Entrez le coefficient de la matiere numero %d: ", i + 1);
		scanf("%f", &coef);
		note[i] *= coef;
		somme_coef += coef;
		somme_note += note[i];
	}
	
	printf("***\n");
	
	printf("Votre moyenne est: %f", somme_note/somme_coef);
}
