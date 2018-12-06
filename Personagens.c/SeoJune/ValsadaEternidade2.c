#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *ve2;
	remove("Personagens\\SeoJune\\ValsadaEternidade2.txt");
	ve2 = fopen("Personagens\\SeoJune\\ValsadaEternidade2.txt", "w");
	fprintf(ve2, "1");	
	fclose(ve2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Seo June.\n>> Habilidade: 1 - Valsa da Eternidade.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\ValsadaEternidade2.txt");
	ve2 = fopen("Personagens\\SeoJune\\ValsadaEternidade2.txt", "w");
	fprintf(ve2, "0");	
	exit(1);
}

