#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *eslc1;
	remove("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.txt");
	eslc1 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.txt", "w");
	fprintf(eslc1, "1");	
	fclose(eslc1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Seo June.\n>> Habilidade: 4 - Espada do Supremo Lobo do C�u.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.txt");
	eslc1 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.txt", "w");
	fprintf(eslc1, "0");	
	exit(1);
}

