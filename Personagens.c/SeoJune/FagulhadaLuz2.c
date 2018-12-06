#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *fl2;
	remove("Personagens\\SeoJune\\FagulhadaLuz2.txt");
	fl2 = fopen("Personagens\\SeoJune\\FagulhadaLuz2.txt", "w");
	fprintf(fl2, "1");	
	fclose(fl2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Seo June.\n>> Habilidade: 2 - Fagulha da Luz.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\FagulhadaLuz2.txt");
	fl2 = fopen("Personagens\\SeoJune\\FagulhadaLuz2.txt", "w");
	fprintf(fl2, "0");	
	exit(1);
}

