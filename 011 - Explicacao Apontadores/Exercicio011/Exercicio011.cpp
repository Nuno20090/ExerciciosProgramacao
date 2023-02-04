// Exercicio011.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

void duplicateValue_noPointer(int valorInput)
{
    // NOTA: Esta função não funciona. 
    // Foi criada para explicação no video onde
    // este código foi criado
    
    int valor = valorInput;

    // Multiplicar por 2
    int result = valor * 2;

    // Guardar na mesma variável
    valorInput = result;
}

void duplicateValue(int* pValue)
{
    // Ler o valor da varável para a qual o 
    // apontador 'aponta'
    int valor = *pValue;

    // Multiplicar por 2
    int result = valor * 2;

    // Guardar na mesma variável 'apontada' pelo apontador
    *pValue = result;
}
int main()
{
    int valueA = 10;
    int valueB = 20;

    // Obter endereços e tratá-los como um número
    unsigned long long addressValueA = (unsigned long long)(&valueA);
    unsigned long long addressValueB = (unsigned long long)(&valueB);

    printf("ValueA address: %llu\n", addressValueA);
    printf("ValueB address: %llu\n", addressValueB);

    // Obter endereços com apontadores (recomendado)
    int* pointerToValue = 0;
    pointerToValue = &valueA;

    // Isto não faz nada, porque o valor passado é 10
    duplicateValue_noPointer(valueA);

    // Isto duplica o valor porque o que é passado é o endereço da nossa variável
    duplicateValue(pointerToValue);

    // Isto duplicará mais uma vez. A única diferença é passar o endereço sem 
    // usar uma variável apontadora intermédia onde o endereço é guardado.
    duplicateValue(&valueA);

    // Exemplo de como alterar o sitio para onde o apontador 'aponta'
    // e na linha seguinte de alterar a variável que está a ser 'apontada'

    pointerToValue = &valueB;
    *pointerToValue = 77;

    return 0;
}