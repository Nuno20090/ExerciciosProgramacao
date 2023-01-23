// Exercicio005.cpp : This file contains the 'main' function. Program execution begins and ends there.

//---------------------------------------------------------------------------
// ** OBJECTIVO **
// 
// Receber do utilizador valores que representem :
// 
// - Preço do combustivel(1.80)
// - Consumo da viatura(L / 100Kms) - 6.5
// - Kms a realizar - ex : 1000
// 
// Apresentar custo da viagem ao utilizador.
// Apresentar alternativas com um consumo 10 %, 25 % ou 40 % mais baixo.
//
//---------------------------------------------------------------------------

#include <iostream>

float calculateTravelCost(float gasPrice, float fConsumption, int kms)
{
	const float gasConsumptionByKm = fConsumption / 100;
	const float gasConsuptionTravel = gasConsumptionByKm * kms;
	const float gasPriceTravel = gasConsuptionTravel * gasPrice;

	return gasPriceTravel;
}

int main()
{
	// Declarar variáveis para receber os valores introduzidos pelo utilizador

	float fGasPrice = 0;
	float fComsumption = 0;
	int dTravelDistance = 0;

	// Pedir os valores

	printf("Insert gas price (in Eur): ");
	scanf("%f", &fGasPrice);

	printf("Insert car consumption (in L/100Km): ");
	scanf("%f", &fComsumption);

	printf("Insert travel distance (In Kms): ");
	scanf("%d", &dTravelDistance);

	// Calcular o custo da viagem, com os valores introduzidos pelo utilizador

	const float gasPriceTravel = calculateTravelCost(fGasPrice, fComsumption, dTravelDistance);

	// Calcular o custo da viagem, com um carro 10% mais eficiente

	const float gasPriceTravel10 = calculateTravelCost(fGasPrice, fComsumption * 0.90f, dTravelDistance);

	// Calcular o custo da viagem, com um carro 25% mais eficiente

	const float gasPriceTravel25 = calculateTravelCost(fGasPrice, fComsumption * 0.75f, dTravelDistance);

	// Calcular o custo da viagem, com um carro 40% mais eficiente

	const float gasPriceTravel40 = calculateTravelCost(fGasPrice, fComsumption * 0.60f, dTravelDistance);

	// Mostrar o relatório ao utilizador

	printf("Total cost with current car: %.2f Eur\n", gasPriceTravel);
	printf("With a 10%% more efficient car, it would cost: %.2f Eur\n", gasPriceTravel10);
	printf("With a 25%% more efficient car, it would cost: %.2f Eur\n", gasPriceTravel25);
	printf("With a 40%% more efficient car, it would cost: %.2f Eur\n", gasPriceTravel40);

	return 0;
}