// Exercicio010.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int main()
{
	// Código para imprimir um valor inteiro
	int age = 23;
	printf("Age: %d\n", age);

	// Código para pedir um valor inteiro
	int birthYear = 0;
	printf("Insert your birth year: ");

	scanf_s("%d", &birthYear);
	printf("Birth year entered: %d\n", birthYear);

	// Ler vários valor ao mesmo tempo

	int height = 0;
	float weight = 0;
	printf("Insert your heigth (cm) and weight in (kg): ");
	scanf_s("%d %f", &height, &weight);
	printf("Data entered\n\tHeigth: %d\n\tweight: %f\n", height, weight);

	// Ler uma string
	char name[10];

	// Forma insegura de ler uma string
	// O programa estará a 'confiar' no utilizador para introduzir algo que 
	// 'caiba' na nossa variável
	printf("Enter your name: ");
	scanf("%s", name);
	
	// Forma segura de ler uma string. 
	// De notar que o tamanho da nossa string é providenciado a seguir ao nome.
	// Caso o input não 'caiba', nada é escrito.

	printf("Enter your name and age: ");
	scanf_s("%s %d", name, 10, &age);

	printf("Introduced data:\n\tName: %s\n\tAge: %d", name, age);
}