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

#ifdef ex3
main()
{
    /*
        3.	Receba três números que garantam a existência de uma equação do segundo grau. Se existirem raízes reais exiba-as. Caso não existam raízes informe ao usuário.

        Observações:

        a.	Condição de existência de uma equação do segundo grau: o coeficiente que acompanha o x2 deverá ser um número diferente de zero.
        b.	Delta maior que zero: a equação possui duas raízes reais e distintas.
        c.	Delta igual à zero: a equação possui duas raízes iguais.
        d.	Delta menor que zero: a equação não apresenta raízes reais.

    */

    setlocale(LC_ALL, "Portuguese");

    double  a,b,c,delta,x1,x2,divi;

    do
    {
        printf("Digite três números: \n");
        scanf("%lf" "%lf" "%lf", &a, &b, &c);

        if(a==0)
        {
            printf("O primeiro dígito não pode ser 0, favor digite um número diferente de 0.\n\n");
        }

    }
    while(a==0);

    delta = pow(b,2) - 4 * a * c; //pow potenciação

    divi = 2 * a;

    if (delta >= 0)
    {

        x1 = (-b + sqrt(delta)) / divi; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / divi;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else if (delta == 0)
    {

        x1 = (-b + sqrt(delta)) / 2*a; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / 2*a;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else
    {
        printf("Esta equação não possui raízes reais.");
    }
}
#endif ex3

#ifdef ex4
main()
{

    /*
        4.	Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x;

    printf("Digite um número: \n");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("O número digitado, %d é par.\n",x);

    }
    else
    {
        printf("O número digitado, %ld é ímpar.\n",x);

    }
}
#endif ex4