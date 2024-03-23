#include <stdio.h>

void aumento_salarial(float salario, int anos, float *aumento)
{
    float percent_2menos = 0.05;
    float percent_2a3 = 0.07;
    float percent_4a6 = 0.09;
    float percent_7a9 = 0.10;
    float percent_10mais = 0.12;

    if (anos < 2)
    {
        *aumento = salario * percent_2menos;
    }
    else if (anos <= 3)
    {
        *aumento = salario * percent_2a3;
    }
    else if (anos <= 6)
    {
        *aumento = salario * percent_4a6;
    }
    else if (anos <= 9)
    {
        *aumento = salario * percent_7a9;
    }
    else
    {
        *aumento = salario * percent_10mais;
    }
}

int main(void)
{
    float salario = 100.00, aumento;
    int anos = 10;

    aumento_salarial(salario, anos, &aumento);
    printf("Aumento: R$ %.2f", aumento);
    return 0;
}