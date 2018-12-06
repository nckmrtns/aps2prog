#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *lr2;
	remove("Personagens\\SeoJune\\LaminasResplandecentes2.txt");
	lr2 = fopen("Personagens\\SeoJune\\LaminasResplandecentes2.txt", "w");
	fprintf(lr2, "1");	
	fclose(lr2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Seo June.\n>> Habilidade: 3 - Laminas Resplandecentes.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\LaminasResplandecentes2.txt");
	lr2 = fopen("Personagens\\SeoJune\\LaminasResplandecentes2.txt", "w");
	fprintf(lr2, "0");	
	exit(1);
}

