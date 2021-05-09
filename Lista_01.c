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

#ifdef ex6
main()
{
    /* 6.	Receba dois números quaisquer, calcule e mostre na tela o resultado da divisão do segundo pelo primeiro. */

    setlocale(LC_ALL, "Portuguese");

    int x,y,divi;

    do
    {
        printf("Digite dois números: \n");
        scanf("%d" "%d", &x,&y);

        if (x<=0)
        {
            printf("Seu primeiro número deve ser maior que 0\n");
        }


    }
    while(x<=0);

    divi = y/x; //y = dividendo e x=divisor

    printf("A divisão dos números digitados %d e %d é igual: %d\n ",x,y,divi);
    system("pause"); // pausa o programa

}
#endif ex6

#ifdef ex7
main()
{
    /*
        7.	Receba três números onde o primeiro deve ser maior do que zero e menor que 20.
        O segundo deve ser negativo e o terceiro representa um número qualquer.
        Calcule a soma de cada número elevado ao quadrado. Se a soma resultar um valor inferior a 1000 solicite novos dados.
    */

    setlocale(LC_ALL, "Portuguese");

    int x,y,z,soma,poten;

    do
    {
        printf("Digite três números: \n");
        scanf("%d" "%d" "%d", &x,&y,&z);

        soma = pow(x,2) + pow(y,2)+ pow(z,2);

        if (x<=0 || x>20)
        {
            printf("Seu primeiro número deve ser maior 0 e menor que 20\n");
        }
        else if (y>=0)
        {
            printf("Seu segundo número deve ser negativo\n");
        }

        else if (soma < 1000)
        {
            printf("A soma dos números foi inferior a 1000, digite novos números\n");
        }

    }
    while(x<=0 || x>20 || y>=0 || soma<1000);


    printf("A soma dos números digitados %d e %d e %d elevado ao quadrado é: %d\n ",x,x,z,soma);
    system("pause"); // pausa o programa


}

#endif ex7

#ifdef ex8
main()
{

    /* 8.	Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre idade dessa pessoa.*/

    setlocale(LC_ALL, "Portuguese");

    SYSTEMTIME str_t;
    GetSystemTime(&str_t);

    int  anoNasc,anoAtua,idade, dias, ano;

    do
    {

        printf("Informe seu ano de nascimento: \n");
        scanf("%d", &anoNasc);
        anoAtua = str_t.wYear;;
        ano = 365;

        if(anoNasc<=1900)
        {
            printf("Digite um número superior a 1900\n");
        }

    }
    while(anoNasc<=1900);

    idade = anoAtua-anoNasc;
    dias = ano*idade;

    printf("A sua idade é: %d\n", idade);
    printf("Voce viveu até agora: %d\n", dias);

}

#endif ex8

#ifdef ex9
main()
{
     /*
        9.	O custo ao consumidor de um carro novo é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Receba via teclado o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
        a)	O valor correspondente ao lucro do distribuidor
        b)	O valor correspondente aos impostos
        c)	O preço final do veículo
    */

    setlocale(LC_ALL, "Portuguese");

    int  fabrVei, lucroDis, imposto, lucroFornecedor, impostoVeicular, totalVeiculo;

    do{
    printf("Informe o preço de fábrica do veiculo R$: \n");
    scanf("%d", &fabrVei);

    printf("Informe o percentual de lucro do distribuidor : \n");
    scanf("%d", &lucroDis);

    printf("Informe o percentual de impostos : \n");
    scanf("%d", &imposto);

    if(fabrVei<=0){
        printf("O valor do preço de fábrica deve ser maior que zero\n");
    }
     else if(lucroDis<=0){
        printf("O valor do percentual de lucro do distribuidor deve ser maior que zero\n");
    }
    else if(imposto<=0){
        printf("O valor do imposto deve ser maior que zero\n");
    }

    }while(fabrVei<=0 || lucroDis<=0 || imposto<=0);

    lucroFornecedor = fabrVei * lucroDis / 100;
    impostoVeicular = fabrVei * imposto / 100;
    totalVeiculo = fabrVei + lucroFornecedor + impostoVeicular;

    printf("O valor correspondente ao lucro do distribuidor é R$: %d\n", lucroFornecedor);
    printf("O valor correspondente aos impostos é R$: %d\n", impostoVeicular);
    printf("O preço final do veículo é R$: %d", totalVeiculo);


}

#endif ex9

#ifdef ex10
main()
{
    /*

    10.	Elabore um programa que efetue o cálculo do reajuste de salário de um funcionário.
    Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
    Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %;
    caso seja maior que 1000, o reajuste deve ser de 5%.
    Ao final do programa deve apresentar o valor antigo e o novo salário.

    */
    setlocale(LC_ALL, "Portuguese");

    int  salar,novoSalar;
    double reaj;
    do{
    printf("Digite seu salário R$: \n");
    scanf("%d", &salar);

    if(salar<=0){
        printf("O valor do salário deve ser maior que zero\n");
    }

    }while(salar<=0);

   if(salar<800){
    reaj = 0.15;
    novoSalar = salar * reaj + salar;
    printf("Seu antigo salário era %d agora seu novo salário é %d",salar,novoSalar);
   }

   else if(salar>=800 && salar<=1000){
    reaj = 0.10;
    novoSalar = salar * reaj + salar;
   printf("Seu antigo salário era %d agora seu novo salário é %d",salar,novoSalar);
   }

   else if(salar>1000){
    reaj = 0.05;
    novoSalar = salar * reaj + salar;
   printf("Seu antigo salário era %d agora seu novo salário é %d",salar,novoSalar);
   }

}

#endif ex10

