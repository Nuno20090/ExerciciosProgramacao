// Exercicio004.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int maxNumber = 0;
	printf("For how long should I keep going? ");
	scanf("%d", &maxNumber);

	for (int number = 1; number <= maxNumber; number++)
	{
		// Verifica se o n�mero � m�ltiplo de 3
		const int bMultipleOf3 = (number % 3) == 0;

		// Verifica se o n�mero � m�ltiplo de 5
		const int bMultipleOf5 = (number % 5) == 0;

		if (bMultipleOf3 == 0 && bMultipleOf5 == 0)
		{
			// N�o � m�ltiplo de nenhum deles. Apenas imprimir o n�mero.
			printf("%d\n", number);
		}
		else
		{
			// O n�mero � multiplo de pelo menos um deles.

			if (bMultipleOf3)
			{
				// Caso seja m�ltiplo de 3, imprime 'Fizz'
				printf("Fizz");
			}

			if (bMultipleOf5)
			{
				// Caso seja m�ltiplo de 5, imprime 'Fizz'
				printf("Buzz");
			}

			// Ap�s imprimir 'Fizz', 'Buzz' ou 'FizzBuzz' imprimimos '\n'
			// para mudar para a pr�xima linha
			printf("\n");
		}
	}
}
