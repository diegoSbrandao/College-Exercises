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

#ifdef ex2
/* 2-)	Ler um número inteiro e imprimir seu sucessor e seu antecessor. */
main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,ant,suce;


    printf("Digite um número: \n");
    scanf("%d", &x);


    ant = x-1;
    suce = x+1;

    printf("O antecessor do número %d é: %d\n",x,ant);
    printf("O sucessor do número %d é: %d\n",x,suce);

    system("pause"); // pausa o programa
}

#endif ex2

#ifdef ex3
/*    3-) Leia dois valores numéricos e exibe a diferença do maior pelo menor. Se os números forem iguais informe ao usuário. */

main()
{
    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;

    printf("Digite dois números: \n");
    scanf("%d" "%d", &x, &y);

    if (x==y)
    {
        printf("Os números digitados foram %d e %d são números iguais", x,y);
    }
    else if (x>y)
    {
        soma = x-y;
        printf("A diferença entre o número digitado %d e %d é %d\n", x,y,soma);
    }
    else
    {
        soma = y-x;
        printf("A diferença entre o número digitado %d e %d é %d\n", x,y,soma);
    }

}

#endif ex3

#ifdef ex4

/* 4-) Receba o preço de um produto e calcular novo preço com desconto de 9%. */

main()
{

    setlocale(LC_ALL, "Portuguese");

    double  x,aum;

    printf("Digite o valor do produto R$: \n");
    scanf("%lf", &x);

    aum=x - (x*0.09);

    printf("O valor do produto com desconto de 9 porcento fica R$: %.2lf\n", aum); //Acrescentei um arredondamento de 2 casas decimais.

    system("pause"); // pausa o programa
}

#endif ex4


#ifdef ex5
/*

5.	Receba dois números quaisquer, onde o primeiro deve ser maior que zero e o segundo menor ou igual a zero. Calcule e mostre na tela o produto entre eles.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int x,y,multi;

    do
    {
        printf("Digite dois números: \n");
        scanf("%d" "%d", &x,&y);

        if (x<0)
        {
            printf("Seu primeiro número deve ser maior que 0\n");
        }
        else if (y>0)
        {
            printf("Seu segundo número deve ser menor que 0 ou 0\n");
        }

    }
    while(x<0 || y >0);

    multi = x*y;

    printf("A multiplicação dos números digitados %d e %d é igual: %d\n ",x,y,multi);
    system("pause"); // pausa o programa

}

#endif ex5

