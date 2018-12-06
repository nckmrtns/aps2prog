#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *ve1;
	remove("Personagens\\SeoJune\\ValsadaEternidade1.txt");
	ve1 = fopen("Personagens\\SeoJune\\ValsadaEternidade1.txt", "w");
	fprintf(ve1, "1");	
	fclose(ve1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Seo June.\n>> Habilidade: 1 - Valsa da Eternidade.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\ValsadaEternidade1.txt");
	ve1 = fopen("Personagens\\SeoJune\\ValsadaEternidade1.txt", "w");
	fprintf(ve1, "0");	
	exit(1);
}

