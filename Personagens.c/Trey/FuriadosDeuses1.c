#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *fd1;
	remove("Personagens\\Trey\\FuriadosDeuses1.txt");
	fd1 = fopen("Personagens\\Trey\\FuriadosDeuses1.txt", "w");
	fprintf(fd1, "1");	
	fclose(fd1);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 1.\n>> Personagem: Trey.\n>> Habilidade: 4 - Fúria dos Deuses.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\FuriadosDeuses1.txt");
	fd1 = fopen("Personagens\\Trey\\FuriadosDeuses1.txt", "w");
	fprintf(fd1, "0");	
	exit(1);
}

