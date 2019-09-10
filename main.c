#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float n1, n2, n3, p1, p2, media;

        p1 = 1.0;
        p2 = 2.0;

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        media = ((n1*p1) + (n2*p1) + (n3*p2))/(p1+p2);

        printf("media = %.2f\n\n", media);

    if (media >= 6.0){
        printf("O aluno foi aprovado com media:%.2f\n ", media);
    }
    system("pause");
    return 0;
}
