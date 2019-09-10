#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, anoBissexto;

    printf("Digite o ano a ser consultado: ");
    scanf("%d", &ano);

        anoBissexto =  ano % 2;

    if (anoBissexto == 0){
        printf("%d eh um Ano Bissexto\n", ano);
    }
    else{
        printf("%d nao eh um Ano Bissexto\n", ano);
    }

    system("pause");
    return 0;
}
