#include <stdio.h>

int main()
{
	int day, month, year;
	
	int max_day = 30;
	
	printf("Entrez le jour, le mois et l'annee: ");
	scanf("%d %d %d", &day, &month, &year);
	
	if (month == 2)
		max_day = 28;
	
	else if ( (month <= 7 && month % 2 == 1) || (month > 7 && month % 2 == 0) )
		max_day = 31;
	
	day += 1;
	
	if (day > max_day) 
	{
		day = 1;
		month += 1;
	}
	
	if (month > 12)
	{
		month = 1;
		year += 1;
	}
	
	printf("La date du lendemain est : %d / %d / %d", day, month, year);
}
