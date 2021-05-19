#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*1)	Gere e exiba cada uma das seqüências abaixo com uma quantidade k de termos determinados pelo usuário.
a)	3, 6, 9, 12, 15,...
b)	1/4, 1/8, 1/12, 1/16, 1/20,...
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,z,cont,resultadoA,resultadoB;
    y = 3;
    z = 4;
    cont=0;

    do
    {

        printf("Digite a quantidade de termos desejada: \n");
        scanf("%d", &x);

        if(x<=0)
        {
            printf("\nDigite um número acima de 0 (zero).\n");
        }

    }
    while(x<=0);

    printf("\n");
    while(cont < x)
    {
        cont = cont + 1;

        resultadoA = y*cont;

        printf("%d, " " ",resultadoA);
    }

    cont=0;
    printf("\n");
    while(cont < x)
    {
        cont = cont + 1;

        resultadoB = z*cont;

        printf("1/%d, " " ",resultadoB);
    }


}

#endif ex1

#ifdef ex2
/* 2)	Gere e exiba cada uma das sequências abaixo com uma quantidade k de termos determinados pelo usuário.
a)	2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
b)	4/8, 1, 36/24, 2, 100/40, 144/48,...

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,z,y1,z1,aux,cont;
    y = 2;
    z = 5;
    y1 =4;
    z1 =8;
    aux=3;
    cont=0;

    do
    {
        printf("Digite a quantidade de termos desejada: \n");
        scanf("%d", &x);

        if(x<=0)
        {
            printf("\nDigite um número acima de 0 (zero).\n");
        }

    }
    while(x<=0);

    while(cont < x)
    {
        cont = cont + 1;

        printf("%d/%d, " " ",y,z);

        y = y + 2;
        z = z + 5;
    }

    cont=0;
    printf("\n");

    while(cont < x)
    {
        cont = cont + 1;

        if(y1%z1!=0)
        {

            printf("%d/%d, " " ",y1,z1);
        }
        else
        {
            printf("%d, " " ",y1/z1);
        }
        y1 = y1 + (4*aux);
        aux=aux+2;
        z1 = z1 + 8;
    }

}

#endif ex2

#ifdef ex3
/* 3)	Receba a quantidade de idades de K indivíduos.
K representa essa quantidade e deve ser digitada pelo usuário.
A variável Idade armazena cada uma das K idades digitadas.
Calcule e mostre a somatória dessas idades.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,n,soma;
    k=0;
    num=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if(n<=0)
        {
            printf("\nDigite apenas números acima de zero\n");
        }

    }
    while(n<=0);


    while(num<n)
    {

        num=num + 1;

        printf("Digite uma idade: \n");
        scanf("%d", &k);

        soma = soma + k;
    }

    printf("A somatória das idades é igual a %d", soma);

}

#endif ex3

#ifdef ex4
/* 4)	Calcule e mostre a quantidade de  múltiplos de cinco e positivos.
OBS: K representa a quantidade de números pares solicitados via teclado pelo usuário.
 Os números pares deverão ser gerados pelo programador.
		2, 4, 6, 8, 10,...
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;


    printf("Qual a quantidade de números que deseja digitar: \n");
    scanf("%d", &n);

    while(num<n)
    {

        num=num + 1;

        k= 2 * num;

        if (k%5==0 && k > 0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de números múltiplos de cinco e positivos foi de %d", numMulti);

}
#endif ex4

#ifdef ex5
/* 5)	Receba K números. A variável Num armazena cada  número digitado considerando essa quantidade k.
Exiba a quantidade de números pares negativos e quantas vezes o número zero foi digitado.
Obs1: K representa a quantidade de números digitados pelo usuário.
      Obs2: A variável Num representa cada número digitado pelo usuário.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numImpar,numZero,n;
    k=0;
    num=0;
    numImpar=0;
    numZero=0;

    printf("Qual a quantidade de números que deseja digitar: \n");
    scanf("%d", &n);

    while(num<n)
    {
        num=num + 1;

        printf("Digite um número: \n");
        scanf("%d", &k);


        if (k%2==0 && k < 0)
        {
            numImpar= numImpar +1;
        }

        else if(k==0)
        {
            numZero= numZero + 1;
        }

    }

    printf("A quantidade de números pares negativos digitados foi %d e a quantidade de vezes que zero foi digitado foi %d", numImpar,numZero);

}

#endif ex5

#ifdef ex6
/*6)	Receba K números positivos. Cada número recebido deverá ser armazenado na variável Num
e a variável K representa a quantidade de números solicitada pelo usuário.
Exiba a quantidade de múltiplos 7.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n;
    k=0;
    num=0;
    numMulti=0;

    do
    {
        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if(n<=0)
        {
            printf("\nDigite apenas números positivos.\n");
        }
    }
    while(n<=0);

    while(num<n)
    {
        num=num + 1;

        printf("Digite um número: \n");
        scanf("%d", &k);


        if (k%7==0 && k!=0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de números múltiplos de sete foi de %d número(s)", numMulti);

}
#endif ex6

#ifdef ex7
/*7) Receba via teclado um número X, onde este número representa a quantidade de termos que o usuário deseja.
 H representa cada um desses números, calcule o produto dos X números.
	    OBS: H deve ser maior ou igual a 15.

*/
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,h,cont=0;
    float prod=1;

    do
    {
        printf("\nDigite a quantidade de termos que deseja: ");
        scanf("%d",&x);

        if(x<=1)
        {
            printf("Número inferior a 1 ou (zero), digite novamente.\n");
        }

    }
    while(x<=1);

    do
    {
        printf("\nDigite um número igual ou superior a 15: ");
        scanf("%d",&h);
        while(h<15)
        {
            printf("\nNúmero inferior a 15. Digite novamente:");
            scanf("%d",&h);
        }
        prod=prod*h;
        cont=cont+1;
    }
    while(cont!=x);
    printf("O produto dos números é: %.2f",prod);
}
#endif ex7

#ifdef ex8
/*
 8) Receba a quantidade de pesos de N pessoas.
N representa essa quantidade e deve ser digitada pelo usuário.
A variável Peso armazena cada um do N pesos digitados.
Calcule e mostre a média dos pesos digitados.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

   int n,cont;
   float k,peso,soma;
   k=0;
   peso=0;
   soma=0;
   cont=0;

   do{

    printf("Qual a quantidade que deseja digitar ? ");
    scanf("%d",&n);

      if(n<=0){
         printf("\nDigite um número acima de 0 (zero)\n");
      }

   }while(n<=0);

   while(cont < n){

    printf("Digite o peso: ");
    scanf("%f",&k);

    if(k>=0){
        peso = peso + k;
        cont = cont + 1;
    }

   }
   soma = peso/n;
   printf("\nA média dos pesos digitados é %.2f.\n",soma);


}

#endif ex8


