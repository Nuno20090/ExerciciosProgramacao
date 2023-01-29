// Exercicio007.cpp : This file contains the 'main' function. Program execution begins and ends there.

//---------------------------------------------------------------------------
// ** OBJECTIVO **
// 
// Receber 3 valores que representam lados de um triangulo
//
// Validar se os valores representam um tringulo válido
// Nenhum dos lados pode ser maior que a soma dos outros 2
// 
//---------------------------------------------------------------------------

#include <iostream>

bool IsTriangleSideValid(int sideToCheck, int otherSideA, int otherSideB)
{
    if (sideToCheck >= (otherSideA + otherSideB))
    {
        return false;
    }

    return true;
}

bool IsTriangleValid(int sideA, int sideB, int sideC)
{
    if (IsTriangleSideValid(sideA, sideB, sideC) == false)
    {
        return false;
    }

    if (IsTriangleSideValid(sideB, sideA, sideC) == false)
    {
        return false;
    }

    if (IsTriangleSideValid(sideC, sideA, sideB) == false)
    {
        return false;
    }

    // Triangle is valid
    return true;
}

int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    printf("Insert the triangles sides: ");
    scanf_s("%d %d %d", &side1, &side2, &side3);

    if (IsTriangleValid(side1, side2, side3) == false)
    {
        printf("Triangle is NOT valid");
        return 0;
    }

    printf("Triangle is valid");

    return 0;
}