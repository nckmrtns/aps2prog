#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *fl1;
	remove("Personagens\\SeoJune\\FagulhadaLuz1.txt");
	fl1 = fopen("Personagens\\SeoJune\\FagulhadaLuz1.txt", "w");
	fprintf(fl1, "1");	
	fclose(fl1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Seo June.\n>> Habilidade: 2 - Fagulha da Luz.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\SeoJune\\FagulhadaLuz1.txt");
	fl1 = fopen("Personagens\\SeoJune\\FagulhadaLuz1.txt", "w");
	fprintf(fl1, "0");	
	exit(1);
}

