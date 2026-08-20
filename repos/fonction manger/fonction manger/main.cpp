#include <stdlib.h>
#include <stdio.h>
#include "aire.h"

/*int main(int argc, const char* argv[])
{
	double resultat;
	resultat = aireRectangle(10.0, 20.0);
	printf("%f\n c'est le resulta !", resultat);
	return 0;
}*/

int incremente();

int main(int argc, char* argv[])
{
	printf("%d\n", incremente());
	printf("%d\n", incremente());
	printf("%d\n", incremente());
	printf("%d\n", incremente());
	
	return 0;
}

int incremente()
{
	static int nombre = 0;

	nombre++;
	return nombre;
}




















/*int triple(int nombre)
{
	return 3 * nombre;
}

int main(int argc, char* argv[])
{
	int nombreEntre = 0;

	printf("Le nombre frr !!\n"); 
	scanf_s("%d", &nombreEntre);

	printf("le triple c'est %d mon ptit gars\n", triple(nombreEntre));

	return 0;
}*/

/*void puni(int nombreDeLignes)
{
	int i;

	for (i = 0; i < nombreDeLignes; i++)
	{
		printf("je dois pas faire caca dans le cartable\n");
	}
}

int main(int argc, char* argv[])
{
	puni(10);

	return 0;
}*/

/*int main(int argc, char* argv[])
{
	printf("rectangle de larg 5 et haut 10. Aire = %f\n", aireRectangle(5, 10));
	printf("rectangle de larg 2.5 et haut 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
	printf("rectangle de larg 4.2 et haut 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));
	
	return 0;
}*/




/*int menu()
{
	int choix = 0;

	while (choix < 1 || choix >4)
	{
		printf("__MENU__\n");
		printf("1 : proute de castor avec sauce au pigon\n");
		printf("2 : le vide de l'existence dans un bol\n");
		printf("3 : un stily de copilation\n");
		printf("4 : une pluie de delice\n");
		printf("Tu Veux QUOI du coup ?\n");
		scanf_s("%d", &choix);
		if (choix < 1 || choix >4)
			printf("le nombre ne figutre pas sur le menu\n");
	}

	return choix;
}

int main(int argc, char* argv[])
{
	switch (menu())
	{
	case 1:
		printf("Vous avais pris le cacastor\n");
		break;
	case 2:
		printf("Vous avais pris le vide qui va vous ronger jusqu'a la fin\n");
		break;
	case 3:
		printf("Vous avais pris stily billy robby\n");
		break;
	case 4:
		printf("Vous avez pris la pluieeeeee ouiiiiiii\n");
		break;
	}

	return 0;
}*/