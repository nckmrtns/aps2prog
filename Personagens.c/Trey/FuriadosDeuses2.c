#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	system("mode con:cols=60 lines=4");
	FILE *fd2;
	remove("Personagens\\Trey\\FuriadosDeuses2.txt");
	fd2 = fopen("Personagens\\Trey\\FuriadosDeuses2.txt", "w");
	fprintf(fd2, "1");	
	fclose(fd2);
	for(i = 35; i > -1; i--)
	{
		system("cls");
		printf("\n> Player: 2.\n>> Personagem: Trey.\n>> Habilidade: 4 - Fúria dos Deuses.\n>> Tempo de recarga: %.2d segundos.", i);
		Sleep(1000);
	}
	remove("Personagens\\Trey\\FuriadosDeuses2.txt");
	fd2 = fopen("Personagens\\Trey\\FuriadosDeuses2.txt", "w");
	fprintf(fd2, "0");	
	exit(1);
}

