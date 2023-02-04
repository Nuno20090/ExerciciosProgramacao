// Exercicio009.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int getSomeValue()
{
    return 7;
}

int main()
{
    // printf format specification information 
    // https://learn.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170

    // Sequências de escape
    // \n - Insere uma linha nova
    // \t - Tab
    // \\ - Insere uma '\'

    // Print Simples    
    printf("Hello World!\n");

    // Prints com \t
    printf("Maria\tNunes\n");
    printf("A\tB\n");
    printf("1000\t2000\n");

    // Prints de valor simples

    int value = 100;
    printf("Value is %d.\n", value);

    // Print de múltiplos valores
    int valorA = 10;
    int valorB = 20;
    printf(
        "These are my values: %d e %d. And here they are again: %d e %d\n", 
        valorA, 
        valorB, 
        valorA, 
        valorB
    );

    // Print de cálculo directamente como parâmetro
    printf(
        "These are my values and their sum: %d, %d = %d.\n", 
        valorA, 
        valorB, 
        valorA + valorB
    );
    
    // Print do resultado de uma função
    printf("The result of my function is %d\n", getSomeValue());

    // Print de outros tipos

    char singleLetter = 'N';
    float pi = 3.1415;
    int age = 30;
    char name[] = "Maria";
    double travelDistance = 12.4567;
    bool bIsAlive = true;
    
    // - Char
    printf("This is a single letter: %c\n", singleLetter);
    
    // - Float
    printf("PI: %d (Wrong code. Do not use)\n", pi);    // Errado porque %d não deve ser usado para valores float
    printf("PI: %d\n", (int)pi);                        // Funciona, porque float está a ser convertido para int
    printf("PI: %f\n", pi);                             // Correcto, porque %f deve ser usado para imprimir floats
    
    // - String
    printf("Name: %s\n", name);           // Correcto, %s deve ser usado para imprimir String (Arrays de chars)
    
    // - Double
    printf("Travel distance: %f\n", travelDistance); 

    // - Bool
    printf("Is Alive: %d\n", bIsAlive);

    
    // Formatação de números

    int hours = 0;
    int minutes = 7;

    printf("Appointment time (wrong) : %d:%d\n", hours, minutes);        // Fica estranho: Ex. 0:7
    printf("Appointment time (better): %02d:%02d\n", hours, minutes);    // Fica correcto: Ex. 00:07

    // - Imprimir float sem formatação
    printf("Pi: %f\n", pi);

    // - Imprimir float sem casas decimais
    printf("Pi: %.0f\n", pi);

    // - Imprimir float com 1 casa decimal
    printf("Pi: %.1f\n", pi);

    // - Imprimir float com 3 casas decimais
    printf("Pi: %.3f\n", pi);

    // - Imprimir inteiro com 2 casas e decimal com 3
    printf("Pi: %06.3f\n", pi);

    // Formatação de Strings

    // - Imprimir string sem formatação
    printf("|%s|\n", name);

    // - Imprimir string com indicação de número de characteres a ocupar (Alinhemento à direita por defeito)
    printf("|%10s|\n", name);

    // - Imprimir string com indicação de número de characteres a ocupar com alinhamento à esquerda
    printf("|%-10s|\n", name);

    return 0;
}