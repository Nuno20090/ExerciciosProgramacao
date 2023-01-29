// Exercicio008.cpp : This file contains the 'main' function. Program execution begins and ends there.

//---------------------------------------------------------------------------
// ** OBJECTIVO **
// 
// Mostrar a tabuada
// 
//---------------------------------------------------------------------------

#include <iostream>

void MostrarLinhaTabuada(int valorA, int valorB)
{
    printf("%2d * %2d = %3d\n", valorA, valorB, valorA * valorB);
}

void MostrarTabuada(int valor)
{
    printf("Tabuada do %d\n", valor);

    for (int multiplicador = 1; multiplicador <= 10; multiplicador++)
    {
        MostrarLinhaTabuada(valor, multiplicador);
    }

    printf("\n");
}

int main()
{
    // Mostrar tabuada de todos os números de 1 a 12
    int valor = 1;
    for (; valor <= 12; valor++)
    {
        MostrarTabuada(valor);
    }

    return 0;
}