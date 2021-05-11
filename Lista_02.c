#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        1.	Escrever um algoritmo que receba dois números e informe ao usuário se eles são iguais ou se são distintos.
        Se forem distintos informe qual é o maior.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y;

    printf("Digite dois números: \n");
    scanf("%d" "%d", &x, &y);

    if (x==y)
    {
        printf("Os números digitados são iguais.\n");
    }
    else if(x>y)
    {
        printf("Os números digitados são diferentes, o maior deles é %d\n",x);
    }
    else
    {
        printf("Os números digitados são diferentes, o maior deles é %d\n",y);
    }
}
#endif ex1

#ifdef ex2
main()
{

    /*
        2.	Escrever um algoritmo que leia três números quaisquer
        e informe qual é o maior e se eles forem todos igual informe ao usuário e solicite novos dados.

    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y,z;

    do
    {
        printf("Digite três números: \n");
        scanf("%d" "%d" "%d", &x, &y, &z);

        if(x==y && x==z)
        {
            printf("Os números digitados são todos iguais, favor digitar novos números.\n");
        }
//10 10 e 10
    }
    while( x==y && x==z);


    if (x>y && x>z)
    {
        printf("O maior número é %d.\n",x);
    }
    else if(y>z)
    {
        printf("O maior número é %d.\n",y);
    }
    else
    {
        printf("O maior número é %d.\n",z);
    }
}
#endif ex2