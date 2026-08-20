#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*int nombreDeVies = 5, xp = 6;
	const int NOMBRE_DE_VIES_INITIALES = 5;
	printf("Vous avez %d vie et tu es lvl %d\n", nombreDeVies, xp);
	printf("BAAAAm\n");
	nombreDeVies = 4;
	printf("ah merde pardon je t'avais pas vue, vie restante %d sorry\n\n", nombreDeVies);*/

	/*int age = 0;

	printf("ton age frr ?\n");
	scanf_s("%d", &age);
	printf("ah mais tu as %d ans ! tu es un bebe hahaha\n\n", age);*/

	/*int resultat = 0;
	resultat = 5 + 3;

	printf("5+3= %d\n", resultat);

	double divi = 0;

	divi = 5.0 / 2.0;
	printf("5/2=%lf", divi);*/

	int nombre1 = 0, nombre2 = 0;
	printf("nombre numero 1?\n");
	scanf_s("%d", &nombre1);
	printf("nombre numero 2?\n");
	scanf_s("%d", &nombre2);
	int resultat = nombre1 * nombre2;
	resultat--;
	printf("on mix le tout et on a donne %d!!!", resultat);

	return 0;
}