#include <stdio.h>

int main()
{
	int nbr_mat;
	printf("Entrer le nombre de matieres: ");
	scanf("%d", &nbr_mat);
	
	float note[nbr_mat];
	int coef[nbr_mat];
	int i;
	printf("\n\t\tMatieres\tNote\t\tCoefficient\n"); // \t sert à tabuler (wow) à afficher plusieurs espaces
	for (i = 0; i < nbr_mat; i++)
	{
		printf("\t\tMatiere %d\t", i + 1);
		scanf("%f\t\t%d", &note[i], &coef[i]);
		
		if (note[i] < 0 || coef[i] < 0)
			i--;
	}
	
	printf("La moyenne est : (");
	
	float somme_note = 0, somme_coef = 0;
	
	for (i = 0; i < nbr_mat; i++)
	{
		printf("%.2f*%d+", note[i], coef[i]);
		somme_note += note[i] * coef[i];
	}
		
	printf("\b)/("); // '\b' est l'équivalent d'un backspace, en gros on supprime le dernier caractère
	for (i = 0; i < nbr_mat; i++)
	{
		printf("%d+", coef[i]);
		somme_coef += coef[i];
	}
	
	printf("\b)=%.2f", somme_note/somme_coef);
				
}
