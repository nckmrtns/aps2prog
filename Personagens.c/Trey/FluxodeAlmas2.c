#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *fa2;
	remove("Personagens\\Trey\\FluxodeAlmas2.txt");
	fa2 = fopen("Personagens\\Trey\\FluxodeAlmas2.txt", "w");
	fprintf(fa2, "1");	
	fclose(fa2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Trey.\n>> Habilidade: 3 - Fluxo de Almas.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\FluxodeAlmas2.txt");
	fa2 = fopen("Personagens\\Trey\\FluxodeAlmas2.txt", "w");
	fprintf(fa2, "0");	
	exit(1);
}

