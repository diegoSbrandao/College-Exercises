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

#ifdef ex7
main()
{
    /*
        7.	Faça um programa que receba a altura e o sexo (1 para homens e 2 para mulheres)
        de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes fórmulas:
        a.	Para homens (72 * h) – 58
        b.	Para mulheres (62,1* h) – 44.7

    */

    setlocale(LC_ALL, "Portuguese");

    double  x,y;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite qual seu sexo: homem (1), mulher (2).\n");
    scanf("%lf",&y);

    if (x<=0 || y!=1 && y!=2){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while(x<=0 || y!=1 && y!=2);

    system("cls"); //limpar a tela.

    if(y==1){
    y = (72 * x) - 58;
     printf("O seu peso ideal é: %.2lf.",y);
   }

   else{
    y = (62.1 * x) - 44.7;
     printf("O seu peso ideal é: %.2lf.",y);
   }

}
#endif ex7

#ifdef ex8
main()
{
    /*

    8.	O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde
    para dar uma indicação sobre a condição de peso de uma pessoa adulta.
    A fórmula é IMC = peso / (altura)2. Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo
    com as condições abaixo:

        Resultado		Situação

        Abaixo de 17		Muito abaixo do peso
        Entre 17 e 18,49	Abaixo do peso
        Entre 18,5 e 24,99	Peso normal
        Entre 25 e 29,99	Acima do peso
        Entre 30 e 34,99	Obesidade I
        Entre 35 e 39,99	Obesidade II (severa)
        Acima de 40		Obesidade III (mórbida)

    */
    setlocale(LC_ALL, "Portuguese");

    double  x,y,imc;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite o seu peso.\n");
    scanf("%lf",&y);

    if (x<=0 || y<=0){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while(x<=0 || y<=0);

    imc = y / pow(x,2);

    system("cls"); //limpar a tela.

    if(imc<17){
     printf("Muito abaixo do peso");
   }

   else if(imc<18.49){
     printf("Abaixo do peso");
   }

   else if(imc<24.99){
     printf("Peso normal");
   }

   else if(imc<29.99){
     printf("Acima do peso");
   }

   else if(imc<34.99){
     printf("Obesidade I");
   }

   else if(imc<39.99){
     printf("Obesidade II (severa)");
   }

   else{
    printf("Obesidade III (mórbida)");
   }

}
#endif ex8

#ifdef ex9
main()
{

    /*
        9.	Faça um programa que receba a altura e o peso de uma pessoa.
        De acordo com a tabela a seguir e mostre qual a classificação dessa pessoa.

            Altura	          Peso
                              Até 60	      Entre 60 e 90(Inclusive)	  Acima de 90
            Menores que 1,20	A	                D                         G
            De 1,20 a 1,70	    B	                E                         H
            Maiores que 1,70	C	                F                         I

    */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,imc;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite o seu peso.\n");
    scanf("%lf",&y);

    //limitando a altura em 2.5 para, caso usuário digitar em cm, ele receberá a mensagem abaixo.
    if (x<=0 || x > 2.5 || y<=0){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while (x<=0 || x > 2.5 || y<=0);

    system("cls"); //limpar a tela.

    if(x<1.20 && y<=60){
     printf("Classificação: A");
   }

   else if(x<1.20 && y<=90){
     printf("Classificação: D");
   }

   else if(x<1.20 && y>90){
     printf("Classificação: G");
   }

    if(x<1.70 && y<=60){
     printf("Classificação: B");
   }

   else if(x<1.70 && y<=90){
     printf("Classificação: E");
   }

   else if(x<1.70 && y>90){
     printf("Classificação: H");
   }

    if(x>1.70 && y<=60){
     printf("Classificação: C");
   }

   else if(x>1.70 && y<=90){
     printf("Classificação: F");
   }

   else if(x>1.70 && y>90){
     printf("Classificação: I");
   }

}
#endif ex9
