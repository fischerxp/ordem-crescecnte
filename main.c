#include <stdio.h>
#include <stdlib.h>

/*Ler dois valores (considere que n�o ser�o lidos valores iguais) e
escrev�-los em ordem crescente.*/
/*desenvolvedora: @fischerxp*/

int main()
{
    int x, y;

    printf("primeiro valor:");
    scanf("%d",&x);
    printf("segundo valor:");
    scanf("%d",&y);
        if (x>y)
            printf("maior numero:%d menor numero: %d",x,y);
        else
            printf("maior numero:%d menor numero: %d",y,x);
    return 0;
}
