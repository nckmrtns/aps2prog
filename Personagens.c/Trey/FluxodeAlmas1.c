#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *fa1;
	remove("Personagens\\Trey\\FluxodeAlmas1.txt");
	fa1 = fopen("Personagens\\Trey\\FluxodeAlmas1.txt", "w");
	fprintf(fa1, "1");	
	fclose(fa1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Trey.\n>> Habilidade: 3 - Fluxo de Almas.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\FluxodeAlmas1.txt");
	fa1 = fopen("Personagens\\Trey\\FluxodeAlmas1.txt", "w");
	fprintf(fa1, "0");	
	exit(1);
}

