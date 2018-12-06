#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "cores.h"

float adicional;
int a, b, chance, defesa, v1, v2, jogador[2][9], personagem[2][9];
int timerve1, timerfl1, timerlr1, timereslc1, timerc1, timercs1, timerfa1, timerfd1;
int timerve2, timerfl2, timerlr2, timereslc2, timerc2, timercs2, timerfa2, timerfd2;


atributos()
{
	chance = rand() % 100;
	
	//seo june
	personagem[1][1] = 1;//id
	personagem[1][2] = 133;//vida
	personagem[1][3] = 2 + (rand() % 5);//defesa
	personagem[1][4] = 71 + (rand() % 201);//critico
	personagem[1][5] = 3 + (rand() % 9);//ataque basico
	personagem[1][6] = 8 + (rand() % 15);//hab 1
	personagem[1][7] = 7 + (rand() % 21);//hab 2
	personagem[1][8] = 17 + (rand() % 33);//hab 3
	personagem[1][9] = 25 + (rand() % 91);//hab 4
	
	//trey
	personagem[2][1] = 2;//id
	personagem[2][2] = 407;//vida
	personagem[2][3] = 7 + (rand() % 19);//defesa
	personagem[2][4] = 19 + (rand() % 101);//critico
	personagem[2][5] = 3 + (rand() % 7);//ataque basico
	personagem[2][6] = 3 + (rand() % 11);//hab 1
	personagem[2][7] = 5 + (rand() % 17);//hab 2
	personagem[2][8] = 7 + (rand() % 12);//hab 3
	personagem[2][9] = 12 + (rand() % 9);//hab 4
}

selecao()
{
	int i, j, selecao;
	
	texto(BRANCO);
	printf("1 - Seo June\t2 - Trey\n");
	for(i = 1; i <= 2; i++)
	{
		texto(BRANCO);
		printf("\nPlayer ");
		if(i == 1)
		{
			texto(VERMELHOCLARO);
		}
		else
		{
			texto(CIANOCLARO);
		}
		printf("%d\n", i);
		if(i == 1)
		{
			texto(VERMELHOCLARO);
		}
		else
		{
			texto(CIANOCLARO);
		}
		printf("> ");
		texto(BRANCO);
		printf("Escolha seu personagem:\n");
		if(i == 1)
		{
			texto(VERMELHOCLARO);
		}
		else
		{
			texto(CIANOCLARO);
		}
		printf(">> ");
		texto(BRANCO);
		printf("");
		scanf("%d", &selecao);
		if(i == 1)
		{
			a = selecao;
			for(j = 1; j <= 9; j++)
			{
				atributos();
				jogador[1][j] = personagem[a][j];
			}
			if(a == 1)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("Você selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Seo June.\r\n\n");
			}
			else if(a == 2)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("Você selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Trey.\r\n\n");
			}
		}
		else
		{
			b = selecao;
			for(j = 1; j <= 9; j++)
			{
				atributos();
				jogador[2][j] = personagem[b][j];
			}
			if(b == 1)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("Você selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Seo June.\r\n\n");
			}
			else if(b == 2)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("Você selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Trey.\r\n\n");
			}
		}
	}
	texto(BRANCO);
	getch();
	system("cls");
}

selecaoPVE()
{
	int ia, i, j, selecao;
	
	ia = (rand() % 2);
	if(ia == 0)
	{
		ia++;
	}
	else if(ia == 1)
	{
		ia++;
	}
	
	texto(BRANCO);
	printf("1 - Seo June\t2 - Trey\n");
	for(i = 1; i <= 2; i++)
	{
		if(i == 1)
		{
			texto(BRANCO);
			printf("\nPlayer ");
			texto(VERMELHOCLARO);
			printf("%d\n", i);
		}
		if(i == 2)
		{
			texto(CIANOCLARO);
			printf("IA\n");
		}
		if(i == 1)
		{
			texto(VERMELHOCLARO);
		}
		else
		{
			texto(CIANOCLARO);
		}
		printf("> ");
		texto(BRANCO);
		printf("Escolha seu personagem:\n");
		if(i == 1)
		{
			texto(VERMELHOCLARO);
		}
		else
		{
			texto(CIANOCLARO);
		}
		printf(">> ");
		texto(BRANCO);
		printf("");
		if(i == 1)
		{
			scanf("%d", &selecao);
		}
		if(i == 2)
		{
			printf("%d\n", ia);
			selecao = ia;
		}
		if(i == 1)
		{
			a = selecao;
			for(j = 1; j <= 9; j++)
			{
				atributos();
				jogador[1][j] = personagem[a][j];
			}
			if(a == 1)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("Você selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Seo June.\r\n\n");
			}
			else if(a == 2)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("Você selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Trey.\r\n\n");
			}
		}
		else
		{
			b = selecao;
			for(j = 1; j <= 9; j++)
			{
				atributos();
				jogador[2][j] = personagem[b][j];
			}
			if(b == 1)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("IA selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Seo June.\r\n\n");
			}
			else if(b == 2)
			{
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf(">>> ");
				texto(BRANCO);
				printf("IA selecionou: ");
				if(i == 1)
				{
					texto(VERMELHOCLARO);
				}
				else
				{
					texto(CIANOCLARO);
				}
				printf("Trey.\r\n\n");
			}
		}
	}
	texto(BRANCO);
	getch();
	system("cls");
}

recarregar()
{
	int i, j;
	
	for(i = 3; i <= 9; i++)
	{
		atributos();
		jogador[1][i] = personagem[a][i];
	}	
	for(j = 3; j <= 9; j++)
	{
		atributos();
		jogador[2][j] = personagem[b][j];
	}
}

pvp()
{
	int acao, i;
	
	selecao();
	
	do
	{
		for(i = 1; i <= 2; i++)
		{
			back:
			//seo june
			FILE *ve1;
			ve1 = fopen("Personagens\\SeoJune\\ValsadaEternidade1.txt", "r");
			FILE *ve2;
			ve2 = fopen("Personagens\\SeoJune\\ValsadaEternidade2.txt", "r");
			FILE *fl1;
			fl1 = fopen("Personagens\\SeoJune\\FagulhadaLuz1.txt", "r");
			FILE *fl2;
			fl2 = fopen("Personagens\\SeoJune\\FagulhadaLuz2.txt", "r");
			FILE *lr1;
			lr1 = fopen("Personagens\\SeoJune\\LaminasResplandecentes1.txt", "r");
			FILE *lr2;
			lr2 = fopen("Personagens\\SeoJune\\LaminasResplandecentes2.txt", "r");
			FILE *eslc1;
			eslc1 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.txt", "r");
			FILE *eslc2;
			eslc2 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.txt", "r");
			
			//trey
			FILE *c1;
			c1 = fopen("Personagens\\Trey\\Conflagracao1.txt", "r");
			FILE *c2;
			c2 = fopen("Personagens\\Trey\\Conflagracao2.txt", "r");
			FILE *cs1;
			cs1 = fopen("Personagens\\Trey\\ChamaSagrada1.txt", "r");
			FILE *cs2;
			cs2 = fopen("Personagens\\Trey\\ChamaSagrada2.txt", "r");
			FILE *fa1;
			fa1 = fopen("Personagens\\Trey\\FluxodeAlmas1.txt", "r");
			FILE *fa2;
			fa2 = fopen("Personagens\\Trey\\FluxodeAlmas2.txt", "r");
			FILE *fd1;
			fd1 = fopen("Personagens\\Trey\\FuriadosDeuses1.txt", "r");
			FILE *fd2;
			fd2 = fopen("Personagens\\Trey\\FuriadosDeuses2.txt", "r");
			system("cls");
			if(i == 1)
			{
				if(a == 1)
				{	
					texto(BRANCO);		
					printf("Player ");
					texto(VERMELHOCLARO);
					printf("%d\n", i);
					texto(BRANCO);
					printf("Personagem ");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Seo June\n");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Habilidades\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Valsa da Eternidade\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Fagulha da Luz\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Laminas Resplandecentes\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Espada do Supremo Lobo do Céu\n\n");
				}			
				else if(a == 2)
				{
					texto(BRANCO);
					printf("Player ");
					texto(VERMELHOCLARO);
					printf("%d\n", i);
					texto(BRANCO);
					printf("Personagem ");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Trey\n");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Habilidades\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Conflagração\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Chama Sagrada\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Fluxo de Almas\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Fúria dos Deuses\n\n");
				}
			}
			else
			{
				if(b == 1)
				{
					texto(BRANCO);
					printf("Player ");
					texto(CIANOCLARO);
					printf("%d\n", i);
					texto(BRANCO);
					printf("Personagem ");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Seo June\n");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Habilidades\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Valsa da Eternidade\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Fagulha da Luz\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Laminas Resplandecentes\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Espada do Supremo Lobo do Céu\n\n");
				}			
				else if(b == 2)
				{
					texto(BRANCO);
					printf("Player ");
					texto(CIANOCLARO);
					printf("%d\n", i);
					texto(BRANCO);
					printf("Personagem ");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Trey\n");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Habilidades\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Conflagração\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Chama Sagrada\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Fluxo de Almas\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Fúria dos Deuses\n\n");
				}
			}
			
			recarregar();
		
			printf("Player ");
			if(i == 1)
			{
				texto(VERMELHOCLARO);
			}
			else
			{
				texto(CIANOCLARO);
			}
			printf("%d ", i);
			texto(BRANCO);
			printf(">> ");
			if(i == 1)
			{
				texto(VERMELHOCLARO);
			}
			else
			{
				texto(CIANOCLARO);
			}
			printf("Ação: ");
			texto(BRANCO);
			printf("");
			scanf("%d", &acao);
			if(i == 1)
			{
				if(acao == 0)
				{
					if(chance > 85)
					{
						adicional = jogador[1][5] * ((float)jogador[1][4]/100);
						if(jogador[2][3] > jogador[1][5] + adicional)
						{
							jogador[2][3] = jogador[1][5] + adicional;
						}
						texto(BRANCO);
						printf("Você acertou um ataque básico com dano crítico adicional de ");
						texto(VERMELHOCLARO);
						printf("%d%%", jogador[1][4]);
						texto(BRANCO);
						printf(".\n");
						printf("Detalhes:\n");
						texto(VERMELHOCLARO);
						printf("> Dano: %d\n", jogador[1][5]);
						printf("> Adicional: %.0f\n", adicional);
						printf("> Defesa: %d\n", jogador[2][3]);
						printf("> Dano Causado: %.0f\n", (jogador[1][5] + adicional) - jogador[2][3]);
						jogador[2][2] = jogador[2][2] - ((jogador[1][5] + adicional) - jogador[2][3]);
					}
					else
					{
						if(jogador[2][3] > jogador[1][5])
						{
							jogador[2][3] = jogador[1][5];
						}
						texto(BRANCO);
						printf("Você acertou um ataque básico.\n");
						printf("Detalhes:\n");
						texto(VERMELHOCLARO);
						printf("> Dano: %d\n", jogador[1][5]);
						printf("> Defesa: %d\n", jogador[2][3]);
						printf("> Dano Causado: %d\n", jogador[1][5] - jogador[2][3]);
						jogador[2][2] = jogador[2][2] - (jogador[1][5] - jogador[2][3]);
					}
				}
				if(acao == 1)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(ve1,"%d", &timerve1);
							if(timerve1 == 0)
							{
								adicional = jogador[1][6] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][6] + adicional)
								{
									jogador[2][3] = jogador[1][6] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Valsa da Eternidade com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][6] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][6] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(ve1,"%d", &timerve1);
							if(timerve1 == 0)
							{
								if(jogador[2][3] > jogador[1][6])
								{
									jogador[2][3] = jogador[1][6];
								}
								texto(BRANCO);
								printf("Você usou Valsa da Eternidade.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][6] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][6] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(c1,"%d", &timerc1);
							if(timerc1 == 0)
							{
								adicional = jogador[1][6] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][6] + adicional)
								{
									jogador[2][3] = jogador[1][6] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Conflagração com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][6] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][6] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\Conflagracao1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(c1,"%d", &timerc1);
							if(timerc1 == 0)
							{
								if(jogador[2][3] > jogador[1][6])
								{
									jogador[2][3] = jogador[1][6];
								}
								texto(BRANCO);
								printf("Você usou Conflagração.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][6] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][6] - jogador[2][3]);
								system("start /min Personagens\\Trey\\Conflagracao1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 2)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(fl1,"%d", &timerfl1);
							if(timerfl1 == 0)
							{
								adicional = jogador[1][7] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][7] + adicional)
								{
									jogador[2][3] = jogador[1][7] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Fagulha da Luz com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][7] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][7] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fl1,"%d", &timerfl1);
							if(timerfl1 == 0)
							{
								if(jogador[2][3] > jogador[1][7])
								{
									jogador[2][3] = jogador[1][7];
								}
								texto(BRANCO);
								printf("Você usou Fagulha da Luz.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][7] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][7] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(cs1,"%d", &timercs1);
							if(timercs1 == 0)
							{
								adicional = jogador[1][7] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][7] + adicional)
								{
									jogador[2][3] = jogador[1][7] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Chama Sagrada com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][7] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][7] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(cs1,"%d", &timercs1);
							if(timercs1 == 0)
							{
								if(jogador[2][3] > jogador[1][7])
								{
									jogador[2][3] = jogador[1][7];
								}
								texto(BRANCO);
								printf("Você usou Chama Sagrada.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][7] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][7] - jogador[2][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 3)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(lr1,"%d", &timerlr1);
							if(timerlr1 == 0)
							{
								adicional = jogador[1][8] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][8] + adicional)
								{
									jogador[2][3] = jogador[1][8] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Laminas Resplandecentes com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][8] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][8] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(lr1,"%d", &timerlr1);
							if(timerlr1 == 0)
							{
								if(jogador[2][3] > jogador[1][8])
								{
									jogador[2][3] = jogador[1][8];
								}
								texto(BRANCO);
								printf("Você usou Laminas Resplandecentes.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][8] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][8] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(fa1,"%d", &timerfa1);
							if(timerfa1 == 0)
							{
								adicional = jogador[1][8] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][8] + adicional)
								{
									jogador[2][3] = jogador[1][8] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Fluxo de Almas com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][8] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][8] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fa1,"%d", &timerfa1);
							if(timerfa1 == 0)
							{
								if(jogador[2][3] > jogador[1][8])
								{
									jogador[2][3] = jogador[1][8];
								}
								texto(BRANCO);
								printf("Você usou Fluxo de Almas.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][8] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][8] - jogador[2][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 4)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(eslc1,"%d", &timereslc1);
							if(timereslc1 == 0)
							{
								adicional = jogador[1][9] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][9] + adicional)
								{
									jogador[2][3] = jogador[1][9] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Espadado Supremo Lobo do Ceu com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][9] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][9] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(eslc1,"%d", &timereslc1);
							if(timereslc1 == 0)
							{
								if(jogador[2][3] > jogador[1][9])
								{
									jogador[2][3] = jogador[1][9];
								}
								texto(BRANCO);
								printf("Você usou Espadado Supremo Lobo do Ceu.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][9] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][9] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(fd1,"%d", &timerfd1);
							if(timerfd1 == 0)
							{
								adicional = jogador[1][9] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][9] + adicional)
								{
									jogador[2][3] = jogador[1][9] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Furia dos Deuses com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][9] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][9] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\Furia dos Deuses1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fd1,"%d", &timerfd1);
							if(timerfd1 == 0)
							{
								if(jogador[2][3] > jogador[1][9])
								{
									jogador[2][3] = jogador[1][9];
								}
								texto(BRANCO);
								printf("Você usou Furia dos Deuses.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][9] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][9] - jogador[2][3]);
								system("start /min Personagens\\Trey\\FuriadosDeuses1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
			}
			if(i == 2)
			{
				if(acao == 0)
				{
					if(chance > 85)
					{
						adicional = jogador[2][5] * ((float)jogador[2][4]/100);
						if(jogador[1][3] > jogador[2][5] + adicional)
						{
							jogador[1][3] = jogador[2][5] + adicional;
						}
						texto(BRANCO);
						printf("Você acertou um ataque básico com dano crítico adicional de ");
						texto(CIANOCLARO);
						printf("%d%%", jogador[2][4]);
						texto(BRANCO);
						printf(".\n");
						printf("Detalhes:\n");
						texto(CIANOCLARO);
						printf("> Dano: %d\n", jogador[2][5]);
						printf("> Adicional: %.0f\n", adicional);
						printf("> Defesa: %d\n", jogador[1][3]);
						printf("> Dano Causado: %.0f\n", (jogador[2][5] + adicional) - jogador[1][3]);
						jogador[1][2] = jogador[1][2] - ((jogador[2][5] + adicional) - jogador[1][3]);
					}
					else
					{
						if(jogador[1][3] > jogador[2][5])
						{
							jogador[1][3] = jogador[2][5];
						}
						texto(BRANCO);
						printf("Você acertou um ataque básico.\n");
						printf("Detalhes:\n");
						texto(CIANOCLARO);
						printf("> Dano: %d\n", jogador[2][5]);
						printf("> Defesa: %d\n", jogador[1][3]);
						printf("> Dano Causado: %d\n", jogador[2][5] - jogador[1][3]);
						jogador[1][2] = jogador[1][2] - (jogador[2][5] - jogador[1][3]);
					}
				}
				if(acao == 1)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(ve2,"%d", &timerve2);
							if(timerve2 == 0)
							{
								adicional = jogador[2][6] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][6] + adicional)
								{
									jogador[1][3] = jogador[2][6] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Valsa da Eternidade com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][6] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][6] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(ve2,"%d", &timerve2);
							if(timerve2 == 0)
							{
								if(jogador[1][3] > jogador[2][6])
								{
									jogador[1][3] = jogador[2][6];
								}
								texto(BRANCO);
								printf("Você usou Valsa da Eternidade.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][6] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][6] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(c2,"%d", &timerc2);
							if(timerc2 == 0)
							{
								adicional = jogador[2][6] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][6] + adicional)
								{
									jogador[1][3] = jogador[2][6] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Conflagração com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][6] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][6] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\Conflagracao2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(c2,"%d", &timerc2);
							if(timerc2 == 0)
							{
								if(jogador[1][3] > jogador[2][6])
								{
									jogador[1][3] = jogador[2][6];
								}
								texto(BRANCO);
								printf("Você usou Conflagração.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][6] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][6] - jogador[1][3]);
								system("start /min Personagens\\Trey\\Conflagracao2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 2)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(fl2,"%d", &timerfl2);
							if(timerfl2 == 0)
							{
								adicional = jogador[2][7] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][7] + adicional)
								{
									jogador[1][3] = jogador[2][7] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Fagulha da Luz com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][7] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][7] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fl2,"%d", &timerfl2);
							if(timerfl2 == 0)
							{
								if(jogador[1][3] > jogador[2][7])
								{
									jogador[1][3] = jogador[2][7];
								}
								texto(BRANCO);
								printf("Você usou Fagulha da Luz.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][7] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][7] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(cs2,"%d", &timercs2);
							if(timercs2 == 0)
							{
								adicional = jogador[2][7] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][7] + adicional)
								{
									jogador[1][3] = jogador[2][7] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Chama Sagrada com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][7] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][7] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(cs2,"%d", &timercs2);
							if(timercs2 == 0)
							{
								if(jogador[1][3] > jogador[2][7])
								{
									jogador[1][3] = jogador[2][7];
								}
								texto(BRANCO);
								printf("Você usou Chama Sagrada.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][7] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][7] - jogador[1][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 3)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(lr2,"%d", &timerlr2);
							if(timerlr2 == 0)
							{
								adicional = jogador[2][8] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][8] + adicional)
								{
									jogador[1][3] = jogador[2][8] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Laminas Resplandecentes com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][8] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][8] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(lr2,"%d", &timerlr2);
							if(timerlr2 == 0)
							{
								if(jogador[1][3] > jogador[2][8])
								{
									jogador[1][3] = jogador[2][8];
								}
								texto(BRANCO);
								printf("Você usou Laminas Resplandecentes.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][8] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][8] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(fa2,"%d", &timerfa2);
							if(timerfa2 == 0)
							{
								adicional = jogador[2][8] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][8] + adicional)
								{
									jogador[1][3] = jogador[2][8] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Fluxo de Almas com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][8] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][8] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fa2,"%d", &timerfa2);
							if(timerfa2 == 0)
							{
								if(jogador[1][3] > jogador[2][8])
								{
									jogador[1][3] = jogador[2][8];
								}
								texto(BRANCO);
								printf("Você usou Fluxo de Almas.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][8] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][8] - jogador[1][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 4)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(eslc2,"%d", &timereslc2);
							if(timereslc2 == 0)
							{
								adicional = jogador[2][9] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][9] + adicional)
								{
									jogador[1][3] = jogador[2][9] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Espadado Supremo Lobo do Ceu com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][9] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][9] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(eslc2,"%d", &timereslc2);
							if(timereslc2 == 0)
							{
								if(jogador[1][3] > jogador[2][9])
								{
									jogador[1][3] = jogador[2][9];
								}
								texto(BRANCO);
								printf("Você usou Espadado Supremo Lobo do Ceu.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][9] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][9] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(fd2,"%d", &timerfd2);
							if(timerfd2 == 0)
							{
								adicional = jogador[2][9] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][9] + adicional)
								{
									jogador[1][3] = jogador[2][9] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Furia dos Deuses com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][9] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][9] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\Furia dos Deuses2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fd2,"%d", &timerfd2);
							if(timerfd2 == 0)
							{
								if(jogador[1][3] > jogador[2][9])
								{
									jogador[1][3] = jogador[2][9];
								}
								texto(BRANCO);
								printf("Você usou Furia dos Deuses.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][9] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][9] - jogador[1][3]);
								system("start /min Personagens\\Trey\\FuriadosDeuses2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
			}	
			getch();
		}
		if(jogador[1][2] < 0)
		{
			jogador[1][2] = 0;
		}
		if(jogador[2][2] < 0)
		{
			jogador[2][2] = 0;
		}
		texto(BRANCO);
		printf("\nHP - Player 1:");
		texto(VERMELHOCLARO);
		printf("%d\n", jogador[1][2]);
		texto(BRANCO);
		printf("HP - Player 2:");
		texto(CIANOCLARO);
		printf("%d\n", jogador[2][2]);
		texto(BRANCO);
		getch();
	}
	while(jogador[1][2] > 0 && jogador[2][2] > 0);
	atributos();
	v1 = jogador[1][2];
	v2 = jogador[2][2];
	jogador[1][2] = personagem[a][2];
	jogador[2][2] = personagem[b][2];
	if(v1 <= 0 && v2 > jogador[1][2]*0.3)
	{
		printf("\t\t\t\t\t  Fim da game.\n\t    O Player 2 venceu e pelo visto foi bem fácil, hein?! Que vergonha...\n");
	}
	else if(v1 <= 0)
	{
		printf("\t\t\t\t\t  Fim da game.\n\t\t\t O Player 2 venceu, mas foi um bom jogo. GGWP!\n");
	}
	if(v2 <= 0 && v1 > (jogador[2][2]*0.3))
	{
		printf("\t\t\t\t\t  Fim da game.\n\t\tO Player 1 acabou com o game, QUE STOMP! Não teve nem graça :c\n");
	}
	
	else if(v2 <= 0)
	{
		printf("\t\t\t\t\t  Fim da game.\n\t\t\t O Player 1 venceu, mas foi um bom jogo. GGWP!\n");
	}
}

pve()
{
	int ia, acao, i;
	
	//seo june
	FILE *ve1;
	ve1 = fopen("Personagens\\SeoJune\\ValsadaEternidade1.txt", "r");
	FILE *ve2;
	ve2 = fopen("Personagens\\SeoJune\\ValsadaEternidade2.txt", "r");
	FILE *fl1;
	fl1 = fopen("Personagens\\SeoJune\\FagulhadaLuz1.txt", "r");
	FILE *fl2;
	fl2 = fopen("Personagens\\SeoJune\\FagulhadaLuz2.txt", "r");
	FILE *lr1;
	lr1 = fopen("Personagens\\SeoJune\\LaminasResplandecentes1.txt", "r");
	FILE *lr2;
	lr2 = fopen("Personagens\\SeoJune\\LaminasResplandecentes2.txt", "r");
	FILE *eslc1;
	eslc1 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.txt", "r");
	FILE *eslc2;
	eslc2 = fopen("Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.txt", "r");
	
	//trey
	FILE *c1;
	c1 = fopen("Personagens\\Trey\\Conflagracao1.txt", "r");
	FILE *c2;
	c2 = fopen("Personagens\\Trey\\Conflagracao2.txt", "r");
	FILE *cs1;
	cs1 = fopen("Personagens\\Trey\\ChamaSagrada1.txt", "r");
	FILE *cs2;
	cs2 = fopen("Personagens\\Trey\\ChamaSagrada2.txt", "r");
	FILE *fa1;
	fa1 = fopen("Personagens\\Trey\\FluxodeAlmas1.txt", "r");
	FILE *fa2;
	fa2 = fopen("Personagens\\Trey\\FluxodeAlmas2.txt", "r");
	FILE *fd1;
	fd1 = fopen("Personagens\\Trey\\FuriadosDeuses1.txt", "r");
	FILE *fd2;
	fd2 = fopen("Personagens\\Trey\\FuriadosDeuses2.txt", "r");
	
	selecaoPVE();
	
	do
	{
		for(i = 1; i <= 2; i++)
		{
			back:
			system("cls");
			if(i == 1)
			{
				if(a == 1)
				{	
					texto(BRANCO);		
					printf("Player ");
					texto(VERMELHOCLARO);
					printf("%d\n", i);
					texto(BRANCO);
					printf("Personagem ");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Seo June\n");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Habilidades\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Valsa da Eternidade\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Fagulha da Luz\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Laminas Resplandecentes\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Espada do Supremo Lobo do Céu\n\n");
				}			
				else if(a == 2)
				{
					texto(BRANCO);
					printf("Player ");
					texto(VERMELHOCLARO);
					printf("%d\n", i);
					texto(BRANCO);
					printf("Personagem ");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Trey\n");
					texto(VERMELHOCLARO);
					printf("> ");
					texto(VERMELHOCLARO);
					printf("Habilidades\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Conflagração\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Chama Sagrada\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Fluxo de Almas\n ");
					texto(VERMELHOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Fúria dos Deuses\n\n");
				}
			}
			else
			{
				if(b == 1)
				{
					texto(CIANOCLARO);
					printf("IA\n");
					texto(BRANCO);
					printf("Personagem ");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Seo June\n");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Habilidades\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Valsa da Eternidade\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Fagulha da Luz\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Laminas Resplandecentes\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Espada do Supremo Lobo do Céu\n\n");
				}			
				else if(b == 2)
				{
					texto(CIANOCLARO);
					printf("IA\n");
					texto(BRANCO);
					printf("Personagem ");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Trey\n");
					texto(CIANOCLARO);
					printf("> ");
					texto(CIANOCLARO);
					printf("Habilidades\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("0 - Ataque básico\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("1 - Conflagração\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("2 - Chama Sagrada\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("3 - Fluxo de Almas\n ");
					texto(CIANOCLARO);
					printf(">> ");
					texto(BRANCO);
					printf("4 - Fúria dos Deuses\n\n");
				}
			}
			
			recarregar();
			printf("Player ");
			if(i == 1)
			{
				texto(VERMELHOCLARO);
				printf("%d ", i);
			}
			else
			{
				texto(CIANOCLARO);
				printf("IA");
				ia = rand() % 4;
			}
			texto(BRANCO);
			printf(">> ");
			if(i == 1)
			{
				texto(VERMELHOCLARO);
			}
			else
			{
				texto(CIANOCLARO);
			}
			printf("Ação: ");
			texto(BRANCO);
			printf("");
			if(i == 1)
			{
				scanf("%d", &acao);
			}
			if(i == 2)
			{
				printf("%d\n", ia);
				acao = ia;
			}
			if(i == 1)
			{
				if(acao == 0)
				{
					if(chance > 85)
					{
						adicional = jogador[1][5] * ((float)jogador[1][4]/100);
						if(jogador[2][3] > jogador[1][5] + adicional)
						{
							jogador[2][3] = jogador[1][5] + adicional;
						}
						texto(BRANCO);
						printf("Você acertou um ataque básico com dano crítico adicional de ");
						texto(VERMELHOCLARO);
						printf("%d%%", jogador[1][4]);
						texto(BRANCO);
						printf(".\n");
						printf("Detalhes:\n");
						texto(VERMELHOCLARO);
						printf("> Dano: %d\n", jogador[1][5]);
						printf("> Adicional: %.0f\n", adicional);
						printf("> Defesa: %d\n", jogador[2][3]);
						printf("> Dano Causado: %.0f\n", (jogador[1][5] + adicional) - jogador[2][3]);
						jogador[2][2] = jogador[2][2] - ((jogador[1][5] + adicional) - jogador[2][3]);
					}
					else
					{
						if(jogador[2][3] > jogador[1][5])
						{
							jogador[2][3] = jogador[1][5];
						}
						texto(BRANCO);
						printf("Você acertou um ataque básico.\n");
						printf("Detalhes:\n");
						texto(VERMELHOCLARO);
						printf("> Dano: %d\n", jogador[1][5]);
						printf("> Defesa: %d\n", jogador[2][3]);
						printf("> Dano Causado: %d\n", jogador[1][5] - jogador[2][3]);
						jogador[2][2] = jogador[2][2] - (jogador[1][5] - jogador[2][3]);
					}
				}
				if(acao == 1)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(ve1,"%d", &timerve1);
							if(timerve1 == 0)
							{
								adicional = jogador[1][6] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][6] + adicional)
								{
									jogador[2][3] = jogador[1][6] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Valsa da Eternidade com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][6] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][6] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(ve1,"%d", &timerve1);
							if(timerve1 == 0)
							{
								if(jogador[2][3] > jogador[1][6])
								{
									jogador[2][3] = jogador[1][6];
								}
								texto(BRANCO);
								printf("Você usou Valsa da Eternidade.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][6] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][6] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(c1,"%d", &timerc1);
							if(timerc1 == 0)
							{
								adicional = jogador[1][6] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][6] + adicional)
								{
									jogador[2][3] = jogador[1][6] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Conflagração com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][6] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][6] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\Conflagracao1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(c1,"%d", &timerc1);
							if(timerc1 == 0)
							{
								if(jogador[2][3] > jogador[1][6])
								{
									jogador[2][3] = jogador[1][6];
								}
								texto(BRANCO);
								printf("Você usou Conflagração.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][6]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][6] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][6] - jogador[2][3]);
								system("start /min Personagens\\Trey\\Conflagracao1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 2)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(fl1,"%d", &timerfl1);
							if(timerfl1 == 0)
							{
								adicional = jogador[1][7] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][7] + adicional)
								{
									jogador[2][3] = jogador[1][7] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Fagulha da Luz com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][7] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][7] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fl1,"%d", &timerfl1);
							if(timerfl1 == 0)
							{
								if(jogador[2][3] > jogador[1][7])
								{
									jogador[2][3] = jogador[1][7];
								}
								texto(BRANCO);
								printf("Você usou Fagulha da Luz.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][7] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][7] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(cs1,"%d", &timercs1);
							if(timercs1 == 0)
							{
								adicional = jogador[1][7] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][7] + adicional)
								{
									jogador[2][3] = jogador[1][7] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Chama Sagrada com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][7] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][7] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(cs1,"%d", &timercs1);
							if(timercs1 == 0)
							{
								if(jogador[2][3] > jogador[1][7])
								{
									jogador[2][3] = jogador[1][7];
								}
								texto(BRANCO);
								printf("Você usou Chama Sagrada.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][7]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][7] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][7] - jogador[2][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 3)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(lr1,"%d", &timerlr1);
							if(timerlr1 == 0)
							{
								adicional = jogador[1][8] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][8] + adicional)
								{
									jogador[2][3] = jogador[1][8] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Laminas Resplandecentes com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][8] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][8] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(lr1,"%d", &timerlr1);
							if(timerlr1 == 0)
							{
								if(jogador[2][3] > jogador[1][8])
								{
									jogador[2][3] = jogador[1][8];
								}
								texto(BRANCO);
								printf("Você usou Laminas Resplandecentes.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][8] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][8] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(fa1,"%d", &timerfa1);
							if(timerfa1 == 0)
							{
								adicional = jogador[1][8] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][8] + adicional)
								{
									jogador[2][3] = jogador[1][8] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Fluxo de Almas com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][8] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][8] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fa1,"%d", &timerfa1);
							if(timerfa1 == 0)
							{
								if(jogador[2][3] > jogador[1][8])
								{
									jogador[2][3] = jogador[1][8];
								}
								texto(BRANCO);
								printf("Você usou Fluxo de Almas.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][8]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][8] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][8] - jogador[2][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 4)
				{
					if(a == 1)
					{
						if(chance > 85)
						{
							fscanf(eslc1,"%d", &timereslc1);
							if(timereslc1 == 0)
							{
								adicional = jogador[1][9] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][9] + adicional)
								{
									jogador[2][3] = jogador[1][9] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Espadado Supremo Lobo do Ceu com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][9] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][9] + adicional) - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(eslc1,"%d", &timereslc1);
							if(timereslc1 == 0)
							{
								if(jogador[2][3] > jogador[1][9])
								{
									jogador[2][3] = jogador[1][9];
								}
								texto(BRANCO);
								printf("Você usou Espadado Supremo Lobo do Ceu.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][9] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][9] - jogador[2][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(a == 2)
					{
						if(chance > 85)
						{
							fscanf(fd1,"%d", &timerfd1);
							if(timerfd1 == 0)
							{
								adicional = jogador[1][9] * ((float)jogador[1][4]/100);
								if(jogador[2][3] > jogador[1][9] + adicional)
								{
									jogador[2][3] = jogador[1][9] + adicional;
								}
								texto(BRANCO);
								printf("Você usou Furia dos Deuses com dano crítico adicional de ");
								texto(VERMELHOCLARO);
								printf("%d%%", jogador[1][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %.0f\n", (jogador[1][9] + adicional) - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - ((jogador[1][9] + adicional) - jogador[2][3]);
								system("start /min Personagens\\Trey\\Furia dos Deuses1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fd1,"%d", &timerfd1);
							if(timerfd1 == 0)
							{
								if(jogador[2][3] > jogador[1][9])
								{
									jogador[2][3] = jogador[1][9];
								}
								texto(BRANCO);
								printf("Você usou Furia dos Deuses.\n");
								printf("Detalhes:\n");
								texto(VERMELHOCLARO);
								printf("> Dano: %d\n", jogador[1][9]);
								printf("> Defesa: %d\n", jogador[2][3]);
								printf("> Dano Causado: %d\n", jogador[1][9] - jogador[2][3]);
								jogador[2][2] = jogador[2][2] - (jogador[1][9] - jogador[2][3]);
								system("start /min Personagens\\Trey\\FuriadosDeuses1.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
			}
			if(i == 2)
			{
				if(acao == 0)
				{
					if(chance > 85)
					{
						adicional = jogador[2][5] * ((float)jogador[2][4]/100);
						if(jogador[1][3] > jogador[2][5] + adicional)
						{
							jogador[1][3] = jogador[2][5] + adicional;
						}
						texto(BRANCO);
						printf("IA acertou um ataque básico com dano crítico adicional de ");
						texto(CIANOCLARO);
						printf("%d%%", jogador[2][4]);
						texto(BRANCO);
						printf(".\n");
						printf("Detalhes:\n");
						texto(CIANOCLARO);
						printf("> Dano: %d\n", jogador[2][5]);
						printf("> Adicional: %.0f\n", adicional);
						printf("> Defesa: %d\n", jogador[1][3]);
						printf("> Dano Causado: %.0f\n", (jogador[2][5] + adicional) - jogador[1][3]);
						jogador[1][2] = jogador[1][2] - ((jogador[2][5] + adicional) - jogador[1][3]);
					}
					else
					{
						if(jogador[1][3] > jogador[2][5])
						{
							jogador[1][3] = jogador[2][5];
						}
						texto(BRANCO);
						printf("IA acertou um ataque básico.\n");
						printf("Detalhes:\n");
						texto(CIANOCLARO);
						printf("> Dano: %d\n", jogador[2][5]);
						printf("> Defesa: %d\n", jogador[1][3]);
						printf("> Dano Causado: %d\n", jogador[2][5] - jogador[1][3]);
						jogador[1][2] = jogador[1][2] - (jogador[2][5] - jogador[1][3]);
					}
				}
				if(acao == 1)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(ve2,"%d", &timerve2);
							if(timerve2 == 0)
							{
								adicional = jogador[2][6] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][6] + adicional)
								{
									jogador[1][3] = jogador[2][6] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Valsa da Eternidade com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][6] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][6] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(ve2,"%d", &timerve2);
							if(timerve2 == 0)
							{
								if(jogador[1][3] > jogador[2][6])
								{
									jogador[1][3] = jogador[2][6];
								}
								texto(BRANCO);
								printf("IA usou Valsa da Eternidade.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][6] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][6] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\ValsadaEternidade2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(c2,"%d", &timerc2);
							if(timerc2 == 0)
							{
								adicional = jogador[2][6] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][6] + adicional)
								{
									jogador[1][3] = jogador[2][6] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Conflagração com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][6] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][6] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\Conflagracao2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(c2,"%d", &timerc2);
							if(timerc2 == 0)
							{
								if(jogador[1][3] > jogador[2][6])
								{
									jogador[1][3] = jogador[2][6];
								}
								texto(BRANCO);
								printf("IA usou Conflagração.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][6]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][6] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][6] - jogador[1][3]);
								system("start /min Personagens\\Trey\\Conflagracao2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 2)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(fl2,"%d", &timerfl2);
							if(timerfl2 == 0)
							{
								adicional = jogador[2][7] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][7] + adicional)
								{
									jogador[1][3] = jogador[2][7] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Fagulha da Luz com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][7] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][7] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fl2,"%d", &timerfl2);
							if(timerfl2 == 0)
							{
								if(jogador[1][3] > jogador[2][7])
								{
									jogador[1][3] = jogador[2][7];
								}
								texto(BRANCO);
								printf("IA usou Fagulha da Luz.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][7] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][7] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\FagulhadaLuz2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(cs2,"%d", &timercs2);
							if(timercs2 == 0)
							{
								adicional = jogador[2][7] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][7] + adicional)
								{
									jogador[1][3] = jogador[2][7] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Chama Sagrada com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][7] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][7] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(cs2,"%d", &timercs2);
							if(timercs2 == 0)
							{
								if(jogador[1][3] > jogador[2][7])
								{
									jogador[1][3] = jogador[2][7];
								}
								texto(BRANCO);
								printf("IA usou Chama Sagrada.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][7]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][7] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][7] - jogador[1][3]);
								system("start /min Personagens\\Trey\\ChamaSagrada2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 3)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(lr2,"%d", &timerlr2);
							if(timerlr2 == 0)
							{
								adicional = jogador[2][8] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][8] + adicional)
								{
									jogador[1][3] = jogador[2][8] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Laminas Resplandecentes com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][8] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][8] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(lr2,"%d", &timerlr2);
							if(timerlr2 == 0)
							{
								if(jogador[1][3] > jogador[2][8])
								{
									jogador[1][3] = jogador[2][8];
								}
								texto(BRANCO);
								printf("IA usou Laminas Resplandecentes.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][8] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][8] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\LaminasResplandecentes2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(fa2,"%d", &timerfa2);
							if(timerfa2 == 0)
							{
								adicional = jogador[2][8] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][8] + adicional)
								{
									jogador[1][3] = jogador[2][8] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Fluxo de Almas com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][8] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][8] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fa2,"%d", &timerfa2);
							if(timerfa2 == 0)
							{
								if(jogador[1][3] > jogador[2][8])
								{
									jogador[1][3] = jogador[2][8];
								}
								texto(BRANCO);
								printf("IA usou Fluxo de Almas.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][8]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][8] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][8] - jogador[1][3]);
								system("start /min Personagens\\Trey\\FluxodeAlmas2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
				if(acao == 4)
				{
					if(b == 1)
					{
						if(chance > 85)
						{
							fscanf(eslc2,"%d", &timereslc2);
							if(timereslc2 == 0)
							{
								adicional = jogador[2][9] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][9] + adicional)
								{
									jogador[1][3] = jogador[2][9] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Espadado Supremo Lobo do Ceu com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][9] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][9] + adicional) - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(eslc2,"%d", &timereslc2);
							if(timereslc2 == 0)
							{
								if(jogador[1][3] > jogador[2][9])
								{
									jogador[1][3] = jogador[2][9];
								}
								texto(BRANCO);
								printf("IA usou Espadado Supremo Lobo do Ceu.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][9] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][9] - jogador[1][3]);
								system("start /min Personagens\\SeoJune\\EspadadoSupremoLobodoCeu2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
					if(b == 2)
					{
						if(chance > 85)
						{
							fscanf(fd2,"%d", &timerfd2);
							if(timerfd2 == 0)
							{
								adicional = jogador[2][9] * ((float)jogador[2][4]/100);
								if(jogador[1][3] > jogador[2][9] + adicional)
								{
									jogador[1][3] = jogador[2][9] + adicional;
								}
								texto(BRANCO);
								printf("IA usou Furia dos Deuses com dano crítico adicional de ");
								texto(CIANOCLARO);
								printf("%d%%", jogador[2][4]);
								texto(BRANCO);
								printf(".\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Adicional: %.0f\n", adicional);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %.0f\n", (jogador[2][9] + adicional) - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - ((jogador[2][9] + adicional) - jogador[1][3]);
								system("start /min Personagens\\Trey\\Furia dos Deuses2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
						else
						{
							fscanf(fd2,"%d", &timerfd2);
							if(timerfd2 == 0)
							{
								if(jogador[1][3] > jogador[2][9])
								{
									jogador[1][3] = jogador[2][9];
								}
								texto(BRANCO);
								printf("IA usou Furia dos Deuses.\n");
								printf("Detalhes:\n");
								texto(CIANOCLARO);
								printf("> Dano: %d\n", jogador[2][9]);
								printf("> Defesa: %d\n", jogador[1][3]);
								printf("> Dano Causado: %d\n", jogador[2][9] - jogador[1][3]);
								jogador[1][2] = jogador[1][2] - (jogador[2][9] - jogador[1][3]);
								system("start /min Personagens\\Trey\\FuriadosDeuses2.exe");
							}
							else
							{
								printf("A habilidade encontra-se em tempo de recarga.\n\n");
								getch();
								system("cls");
								goto back;
							}
						}
					}
				}
			}	
			getch();
		}
		if(jogador[1][2] < 0)
		{
			jogador[1][2] = 0;
		}
		else if(jogador[2][2] < 0)
		{
			jogador[2][2] = 0;
		}
		texto(BRANCO);
		printf("\nHP - Player 1:");
		texto(VERMELHOCLARO);
		printf("%d\n", jogador[1][2]);
		texto(BRANCO);
		printf("HP - IA:");
		texto(CIANOCLARO);
		printf("%d\n", jogador[2][2]);
		texto(BRANCO);
		getch();
	}
	while(jogador[1][2] > 0 && jogador[2][2] > 0);
}

historia()
{
	int selecao;
	
	system("cls");
	do
	{
		printf("Informe o personagem que deseja descobrir mais sobre sua história (0 = sair)\n> ");
		scanf("%d", &selecao);
		
		if(selecao == 1)
		{
			printf("\nSeo June\n> Muitas histórias rondam esse samurai: ""O samurai mais rápido do mundo"", ""A farsa gentil do Leste"", ""O eterno professor"" entre outros. Um homem com apego a natureza, fundador do estilo da Jade Negra onde sozinho, sobrepujou os demônios da ilha de sua ex-tutora os banindo de volta. Seo June é o personagem certo para aqueles que almejam velocidade e rapidez, com seus cortes precisos, ele se torna um guerreiro mortal se permitido movimentar-se a vontade,caso curta personagens rápidos, ele é sua escolha.\n\nHabilidades\n> 0 - Ataque Normal.\n> 1 - Valsa da Eternidade.\n> 2 - Fagulha da Luz.\n> 3 - Laminas Resplandecentes.\n> 4 - Espada do Supremo Lobo do Céu.\n\n");
			getch();
		}
		
		else if(selecao == 2)
		{
			printf("\nTrey\n> Desconhecido por alguns que estão a pouco tempo no panteão de deuses, aquele que outrorafazia parte deste panteão, mas caiu em esquecimento. Fazendo um pacto com o Abismo, ele jurou destruir todos aqueles que viraram as costas para a sua volta aos céus, agora eles devem o temer pois não irá sobra um para conta a historia. Trey é para aqueles que curtem destruição em massa, suas magias podem chegar a níveis colossais de destruição até mesmo obliteração, caso curta destruição, esse é o personagem certo\n\nHabilidades\n> 0 - Ataque Normal\n> 1 - Conflagração\n> 2 - Chama Sagrada\n> 3 - Fluxo de Almas\n> 4 - Fúria dos Deuses\n\n");
			getch();
		}
		system("cls");
	}
	while(selecao != 0);
}

main()
{
	char menu, submenu;
	system("mode con:cols=95 lines=30");
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	texto(CINZA);
	printf("\t\t\t\t\t A - Jogar\n");
	texto(CINZACLARO);
	printf("\t\t\t\t\t B - História\n");
	texto(CINZA);
	printf("\t\t\t\t\t C - Sair\n");
	texto(VERDECLARO);
	printf("\t\t\t\t\t > ");
	texto(BRANCO);
	printf("");
	scanf("%s", &menu);
	
	switch(menu)
	{
		case 'a': case 'A':
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			texto(CINZACLARO);
			printf("\t\t\t\t\t A - Jogar PVP\n");
			texto(CINZA);
			printf("\t\t\t\t\t B - Jogar PVE\n");
			texto(CINZACLARO);
			printf("\t\t\t\t\t C - Voltar\n");
			texto(VERDECLARO);
			printf("\t\t\t\t\t > ");
			texto(BRANCO);
			printf("");
			scanf("%s", &submenu);
			switch(submenu)
			{
				case 'a': case 'A':
					system("cls");
					pvp();
					main();
					break;
				case 'b': case 'B':
					system("cls");
					pve();
					main();
					break;
				case 'c': case 'C':
					system("cls");
					main();
					break;
				default:
					texto(PRETO);
					fundo(VERMELHO);
					printf("\n\t\t\t\t\tOpção inválida!\t\t\t\t\t\t");
					Sleep(1500);
					fundo(PRETO);
					main();
					break;
			}
			break;
		case 'b': case 'B':
			system("cls");
			historia();
			main();
			break;
		case 'c': case 'C':
			exit(0);
			break;
		default:
			texto(PRETO);
			fundo(VERMELHO);
			printf("\n\t\t\t\t\tOpção inválida!\t\t\t\t\t\t");
			Sleep(1500);
			fundo(PRETO);
			main();
			break;
	}	
}

