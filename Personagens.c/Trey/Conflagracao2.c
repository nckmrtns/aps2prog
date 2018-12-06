#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *c2;
	remove("Personagens\\Trey\\Conflagracao2.txt");
	c2 = fopen("Personagens\\Trey\\Conflagracao2.txt", "w");
	fprintf(c2, "1");	
	fclose(c2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Trey.\n>> Habilidade: 1 - Conflagração.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\Conflagracao2.txt");
	c2 = fopen("Personagens\\Trey\\Conflagracao2.txt", "w");
	fprintf(c2, "0");	
	exit(1);
}

