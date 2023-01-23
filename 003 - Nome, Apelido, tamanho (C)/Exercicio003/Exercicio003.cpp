// Exercicio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
	// Declaras as nossas variáveis para receber os valores

	char firstName[100];
	char lastName[100];

	// Pedir ao utilizador o primeiro nome e apelido

	printf("Insert your first name: ");
	scanf("%s", firstName);

	printf("Insert your last name: ");
	scanf("%s", lastName);

	// Mostrar uma mensagem com os nomes providenciados

	printf("Hello, %s %s\n", firstName, lastName);

	// Determinar o tamanho de cada pedoço do nome

	const int firstNameLen = (int)strlen(firstName);
	const int lastNameLen = (int)strlen(lastName);

	// Criar uma variável para guardar a soma de ambos

	const int totalNameLength = firstNameLen + lastNameLen;

	// Mostrar o resultado da análise feita ao nome

	printf("Your first name has %d characters, your last name has %d characters, which combined, have %d characters.\n\n",
		firstNameLen,
		lastNameLen,
		totalNameLength);

	return 0;
}