#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *lr1;
	remove("Personagens\\SeoJune\\LaminasResplandecentes1.txt");
	lr1 = fopen("Personagens\\SeoJune\\LaminasResplandecentes1.txt", "w");
	fprintf(lr1, "1");	
	fclose(lr1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Seo June.\n>> Habilidade: 3 - Laminas Resplandecentes.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\LaminasResplandecentes1.txt");
	lr1 = fopen("Personagens\\SeoJune\\LaminasResplandecentes1.txt", "w");
	fprintf(lr1, "0");	
	exit(1);
}

