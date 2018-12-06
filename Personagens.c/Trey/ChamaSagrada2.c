#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *cs2;
	remove("Personagens\\Trey\\ChamaSagrada2.txt");
	cs2 = fopen("Personagens\\Trey\\ChamaSagrada2.txt", "w");
	fprintf(cs2, "1");	
	fclose(cs2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Trey.\n>> Habilidade: 2 - Chama Sagrada.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\ChamaSagrada2.txt");
	cs2 = fopen("Personagens\\Trey\\ChamaSagrada2.txt", "w");
	fprintf(cs2, "0");	
	exit(1);
}

