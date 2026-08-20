#include <stdlib.h>
#include <stdio.h>


int main()
{
	/*int age = 67;
	if (age > 18 && age < 25 || age == 67)
	{
		printf("bien venu dans le bar exclu\n");
	}
	else if (age > 10)
	{
		printf("degage du bar!!!\n");
	}
	else
	{
		printf("gougougaga");
	}*/

	/*if (1)
	{
		printf("c'est vrai");
	}
	else
	{
		printf("c'est faux");
	}*/
	/*int maj = 1;

	if (maj)
	{
		printf("c'est ok");
	}
	else
	{
		printf("oula !!");
	}*/

	/*int choixMenu = 0;
	while (choixMenu > 4 || choixMenu==0)
	{
		printf("===menu===\n1. Royal cool\n2. Mama Burger\n3. Appa Burger\n4. Frite petit soeur\n Donnez le nombre de votre repas\n");
		scanf_s("%d", &choixMenu);
		switch (choixMenu)
		{
		case 1:
			printf("Royal cool bon choix elle arrive tout de suite\n");
			break;
		case 2:
			printf("Mama burger ? ok je le donne...\n");
			break;
		case 3:
			printf("Appa burger !! ok je prepare la sauce secrete\n");
			break;
		case 4:
			printf("Frite mmmh tu vas les manger\n");
			break;
		default:
			printf("c'est pas dans la liste ou c'est pas le nombre du plat\n");
			break;
		}
	}
	return 0;*/

	int age = 10;
	int *pointeurSurAge = &age;

	printf("%d", *pointeurSurAge);

	return 0;
}