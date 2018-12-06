#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *cs1;
	remove("Personagens\\Trey\\ChamaSagrada1.txt");
	cs1 = fopen("Personagens\\Trey\\ChamaSagrada1.txt", "w");
	fprintf(cs1, "1");	
	fclose(cs1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Trey.\n>> Habilidade: 2 - Chama Sagrada.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\ChamaSagrada1.txt");
	cs1 = fopen("Personagens\\Trey\\ChamaSagrada1.txt", "w");
	fprintf(cs1, "0");	
	exit(1);
}

