#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);

    if (n1 < 0.0 || n1 > 10.0){
        printf("A nota n1 %.2f, nao e valida.\n", n1);
    }
    if (n2 < 0.0 || n2 > 10.0){
            printf("A nota n2 %.2f, nao e valida.\n", n2);
    }
    else{
        if (n1 >= 0.0 && n1 <= 10.0 ){
            if (n2 >= 0.0 && n2 <= 10.0 ){
                media = (n1 + n2)/2;
                printf("media = %.2f\n", media);
            }
        }
    }

    system("pause");
    return 0;
}
