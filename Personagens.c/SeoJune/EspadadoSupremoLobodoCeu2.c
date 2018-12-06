#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *eslc2;
	remove("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.txt");
	eslc2 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.txt", "w");
	fprintf(eslc2, "1");	
	fclose(eslc2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Seo June.\n>> Habilidade: 4 - Espada do Supremo Lobo do Céu.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.txt");
	eslc2 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.txt", "w");
	fprintf(eslc2, "0");	
	exit(1);
}

