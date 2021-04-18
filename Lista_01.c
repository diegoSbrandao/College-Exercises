#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> 
#define ex1

#ifdef ex1
/* 1-)	Receba via teclado dois números quaisquer e exiba a soma entre eles. */
main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;
    do
    {

        printf("Digite dois números: \n");
        scanf("%d" "%d", &x, &y);

        if (x<0 || y<0)
        {
            printf("Digite apenas números positivos\n\n");//Acrescentei ao programa essa regra.
        }
    }
    while(x<0 || y<0);

    soma = x+y;

    printf("A soma dos números digitados é: %d\n",soma);

    system("pause"); // pausa o programa
}
#endif ex1


