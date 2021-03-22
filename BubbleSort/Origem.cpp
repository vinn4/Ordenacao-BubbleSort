/*Exercicio com Ordenação de valores "randomicos" Crescente e Decrescente*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define VETOR 10

void BubbleSortC(int vet[]); //Declaração antes da main Crescente.
void BubbleSortD(int vet[]); //Declaração Decrescente.

int main() {

	setlocale(LC_ALL, "portuguese");   //uso de acentuação na main.
	int vet[VETOR] = { 0 };
	srand(time(NULL)); // gera semente aleatoria.

	//inserção de dados.

	for (int i = 0; i < VETOR; i++)
	{
		vet[i] = rand() % 100; //gera valores entre 0 a 99.
	}
	printf("vetor não ordaneado:\n");
	for (int i = 0; i < VETOR; i++)
	{
		printf("%d \n", vet[i]);
	}
	// BubbleSort Crescente.
	BubbleSortC(vet);

	// Vetor ordenado.
	printf("Vetor Ordenado crescente: \n\n");
	for (int i = 0; i < VETOR; i++)
	{
		printf("%d \n", vet[i]);
	}
	//BubbleSort Decrescente.
	printf("\n\n\n\n\n");

	BubbleSortD(vet);
	printf("Vetor Ordenado decrescente: \n\n");
	for (int i = 0; i < VETOR; i++)
	{
		printf("%d \n", vet[i]);
	}

	system("pause");
	return 0;
}


void BubbleSortC(int vet[])    // Bubblesort Crescente.
{
	int aux;       //variavel auxiliar para troca de valores.
	for (int n = 1; n <= VETOR; n++)
	{
		for (int i = 0; i < (VETOR - 1); i++)
		{
			if (vet[i] > vet[i + 1]) //crescente.
			{
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}
}

void BubbleSortD(int vet[])    // Bubblesort Decrescente.
{
	int aux;       //variavel auxiliar para troca de valores.
	for (int n = 1; n <= VETOR; n++)
	{
		for (int i = 0; i < (VETOR - 1); i++)
		{
			if (vet[i] < vet[i + 1]) //decrescente.
			{
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}
}