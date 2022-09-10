#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Qual combustivel utilizar\n");

    float precoAlcool, precoGasolina;

    printf("Preco do alcool: ");
    scanf("%f", &precoAlcool);

    printf("Preco da gasolina: ");
    scanf("%f", &precoGasolina);

    if (precoAlcool < precoGasolina * 0.7)
    {
        printf("Utilize alcool\n");
    }
    else
    {
        printf("Utilize gasolina\n");
    }
    return 0;
}