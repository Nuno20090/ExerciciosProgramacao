// Exercicio006.cpp : This file contains the 'main' function. Program execution begins and ends there.

//---------------------------------------------------------------------------
// ** OBJECTIVO **
// 
// Pedir um número ao utilizador
// Somar todos os números de 1 até ao número dado (inclusive)
// 
//---------------------------------------------------------------------------

#include <iostream>

int main()
{
    // Pedir um número
    int value = 0;
    printf("Insira o numero: ");
    scanf_s("%d", &value);

    // Criar uma variável com o total (init 0)
    int total = 0;

    // Percorrer os números de 1 até ao número dado
    for (int currentNumber = 1; currentNumber <= value; currentNumber++)
    {
        total += currentNumber;
    }

    // Mostrar o resultado
    printf("Resultado: %d", total);

    return 0;
}