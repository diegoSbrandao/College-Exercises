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

#ifdef ex5
main()
{

    /*
        5.	Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo.

        Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.

        Observações:
        a.	Garantir que cada lado é menor que a soma dos outros dois lados.
        b.	O triângulo é equilátero quando todos os lados são iguais.
        c.	O triângulo é isóscele quando apenas dois lados são iguais.
        d.	O triângulo é escaleno quando todos os lados são diferentes.

   */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,z;

    do
    {
        printf("Digite três números: \n");
        scanf("%lf" "%lf" "%lf",&x,&y,&z);

        if(x>=y+z || y>=x+z || z>=x+y)
        {
            printf("Os números digitados não formam um triângulo\n");
        }

    }
    while(x>=y+z || y>=x+z || z>=x+y);

    if (x==y && x==z)
    {
        printf("O triângulo é equilátero."); //quando todos os lados são iguais.
    }
    else if (x!=y && x!=z && y!=z)
    {
        printf("O triângulo é escaleno."); //quando todos os lados são diferentes.
    }
    else
    {
        printf("O triângulo é isósceles."); //quando apenas dois lados são iguais.
    }


}
#endif ex5

#ifdef ex6
main()
{
    /*
        6.	Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuário deseja subindo a escada.
        Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y,deg;
    float degraus;

    do {
            printf("Digite a altura do degrau em cm:\n");
            scanf("%d",&x);

            printf("Digite qual altura deseja subir em metros:\n");
            scanf("%d",&y);

    }while(x<=0 || y<=0 || x>y*100);

    degraus =  y*100/x;
    deg = degraus;

   if(deg==degraus){
    printf("A quantidade de degraus que terá que subir será: %.2f.",degraus);
}
   else{
   printf("A quantidade de degraus que terá que subir será: %d.",deg+1);
   }
}
#endif ex6