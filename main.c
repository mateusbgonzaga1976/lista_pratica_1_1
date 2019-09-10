#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int B;
    float A, resultado;

        printf("Digite o valor da base:\n");
        scanf("%d", &B);
        printf("Digite o valor do indice:\n");
        scanf("%f", &A);
            resultado = sqrt(B);
        printf("O resultado eh: %*1.7e10\n", resultado);
    system("pause");
    return 0;
}
