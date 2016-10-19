#include <stdio.h>

int main()
{
	float x, y, z;
	
	printf("Entrez trois nombres: ");
	scanf("%f %f %f", &x, &y, &z);
	
	int i = 0;
	float nbr;
	
	while (i == 0)
	{
		i = 1;
		
		if (x > y)
		{
			i = 0;
			nbr = x;
			x = y;
			y = nbr;
		}
		
		if (y > z)
		{
			i = 0;
			nbr = y;
			y = z;
			z = nbr;
		}
	}
	
	printf("%f < %f < %f", x, y, z);
}
