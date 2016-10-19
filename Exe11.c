#include <stdio.h>

int main()
{
	int nbr1, nbr2;
	
	printf("Entrez les deux nombres: ");
	scanf("%d %d", &nbr1, &nbr2);
	
	if (nbr1 == 0 && nbr2 == 0) 
		printf("0");
		
	else if (nbr1 >= 0 && nbr2 >= 0)
		printf("+");
		
	else if (nbr1 <= 0 && nbr2 <= 0)
		printf("-");
	
	else // si les deux nombres ont un signe different 
	{
		int pos = nbr1, neg = nbr1;
		
		if (nbr1 < 0)
			pos = nbr2; 
			
		else
			neg = nbr2;
		
		if (pos > neg * -1)
			printf("+");
		
		else if (pos == neg * -1)
			printf("0");
		
		else
			printf("-");
	}
}
