#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *c1;
	remove("Personagens\\Trey\\Conflagracao1.txt");
	c1 = fopen("Personagens\\Trey\\Conflagracao1.txt", "w");
	fprintf(c1, "1");	
	fclose(c1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Trey.\n>> Habilidade: 1 - Conflagração.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\Conflagracao1.txt");
	c1 = fopen("Personagens\\Trey\\Conflagracao1.txt", "w");
	fprintf(c1, "0");	
	exit(1);
}

