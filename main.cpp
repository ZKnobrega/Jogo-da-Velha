#include <iostream>
#include <locale>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
u:
	system("cls");
	string Tabuleiro[3][3];
	string X = " X ", O = " O ", M = " * ";
	for (int i = 0; i < 3; ++i)
	{
		for (int y = 0; y < 3; ++y)
		{
			if (Tabuleiro[i][y] != X)
			{
				Tabuleiro[i][y] = M;
				cout << Tabuleiro[i][y];
			}
		}
		cout << endl;
	}
	cout << "\n\n";
	int lin, col;
	setlocale(LC_ALL, "Portuguese");
	cout << "Bem Vindo Ao Jogo Da Velha" << endl;
	int i = 0;
	while (i < 9)
	{
		i = i + 1;
		if (i % 2 == 0)
		{
			cout << "Jogador 2 (^o^) \n";
			cout << "Insira a linha da jogada:\n";
			cin >> lin;
			cout << "Insira a coluna da jogada:\n";
			cin >> col;
			Tabuleiro[lin-1][col-1] = O;
			for (int i = 0; i < 3; ++i)
			{
				for (int y = 0; y < 3; ++y)
				{
					cout << Tabuleiro[i][y];
				}
				cout << endl;
			}
			if ((Tabuleiro[0][0] == X && Tabuleiro[0][1] == X && Tabuleiro[0][2] == X) ||
				(Tabuleiro[1][0] == X && Tabuleiro[1][1] == X && Tabuleiro[1][2] == X) ||
				(Tabuleiro[2][0] == X && Tabuleiro[2][1] == X && Tabuleiro[2][2] == X) ||
				(Tabuleiro[0][0] == X && Tabuleiro[1][0] == X && Tabuleiro[2][0] == X) ||
				(Tabuleiro[0][1] == X && Tabuleiro[1][1] == X && Tabuleiro[2][1] == X) ||
				(Tabuleiro[0][2] == X && Tabuleiro[1][2] == X && Tabuleiro[2][2] == X) ||
				(Tabuleiro[0][0] == X && Tabuleiro[1][1] == X && Tabuleiro[2][2] == X) ||
				(Tabuleiro[0][2] == X && Tabuleiro[1][1] == X && Tabuleiro[2][0] == X))
			{
				cout << "Jogador 1, VOCÊ VENCEU!!! \(^o^)/" << endl;
				goto v;
			}
		}
		else
		{
			cout << "Jogador 1 (^_^)\n";
			cout << "Insira a linha da jogada.\n";
			cin >> lin;
			cout << "Insira a coluna da jogada.\n";
			cin >> col;
			Tabuleiro[lin-1][col-1] = X;

			for (int i = 0; i < 3; ++i)
			{
				for (int y = 0; y < 3; ++y)
				{
					cout << Tabuleiro[i][y];
				}
				cout << endl;
			}
			if ((Tabuleiro[0][0] == X && Tabuleiro[0][1] == X && Tabuleiro[0][2] == X) ||
				(Tabuleiro[1][0] == X && Tabuleiro[1][1] == X && Tabuleiro[1][2] == X) ||
				(Tabuleiro[2][0] == X && Tabuleiro[2][1] == X && Tabuleiro[2][2] == X) ||
				(Tabuleiro[0][0] == X && Tabuleiro[1][0] == X && Tabuleiro[2][0] == X) ||
				(Tabuleiro[0][1] == X && Tabuleiro[1][1] == X && Tabuleiro[2][1] == X) ||
				(Tabuleiro[0][2] == X && Tabuleiro[1][2] == X && Tabuleiro[2][2] == X) ||
				(Tabuleiro[0][0] == X && Tabuleiro[1][1] == X && Tabuleiro[2][2] == X) ||
				(Tabuleiro[0][2] == X && Tabuleiro[1][1] == X && Tabuleiro[2][0] == X))
			{
				cout << "Jogador 1, VOCE VENCEU!!! \(^o^)/" << endl;
				goto v;
			}
		}
		if (i == 9)
		{
			cout << "Partida Empatada(-_-;)" << endl;
			goto v;
		}
	}
v:
	cout << "Deseja Continuar ?\n 1 - SIM.\n 2 - NÃO.";
	int k;
	cin >> k;
	if (k == 1)
	{
		goto u;
	}
	else
	{
		cout << "Muito obrigado por Jogar !!!";
	}
}
