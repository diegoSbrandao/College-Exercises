#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*1)	Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
OBS: K representa a quantidade de números pares solicitados via teclado pelo usuário.
Os números pares deverão ser gerados pelo programador.
Utilize o laço while para a entrada da quantidade K e um laço for para o cálculo da média.
		2, 4, 6, 8, 10, ..
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,m;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    m=2;

    do
    {

        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("Digite um número acima de 0 (zero).");
        }

    }
    while(n<=0);  // laço para aceitar apenas números acima de zero.

    for(num=1; num <= n; num++)
    {

        k= m * num; // m, simboliza o multiplicador = 2

        if (k%5==0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de números múltiplos de cinco e positivos foi de %d", numMulti);

}

#endif ex1

#ifdef ex2
/*2)	Leia um número inteiro representado pela variável N até que N seja igual a zero.
Exiba uma mensagem informando se o número é par ou ímpar.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  n,num;

    do
    {

        printf("Digite um número\n");
        scanf("%d",&n);

        if(n!=0)
        {
            num=n;
        }

    }
    while(n!=0);

    if(num%2==0)
    {
        printf("O último número digitado %d é par",num);
    }
    else
    {
        printf("O último número digitado %d é ímpar",num);
    }
}

#endif ex2

#ifdef ex3
/* 3)	Receba K números inteiros quaisquer, K representa a quantidade de termos solicitada pelo usuário
e cada termo pode ser representado pela variável N.
Exiba a quantidade de números positivos recebidos e a média dos números ímpares.
Utilize o laço do while para a entrada da quantidade K e um laço while para efetuar os cálculos solicitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,cont,n,numPositivo;
    float numImpar,soma;
    k=0;
    cont=0;
    numPositivo=0;
    numImpar=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de termos que deseja digitar: \n");
        scanf("%d", &n);
    }
    while(n<=0);

    while(cont<n)
    {

        printf("Digite um número: \n"); //Está ocorrendo um bug do sistema ao digitar -10.
        scanf("%d", &k);


        if(k>=0)
        {
            numPositivo=numPositivo + 1;
        }
        if (k%2!=0)
        {
            numImpar = numImpar + 1;
            soma = soma + k;
        }
        cont=cont + 1;

    }
    if(numPositivo==0 && numImpar==0)
    {
        printf("\nNão foram digitados números positivos nem números ímpares");
    }
    else if (numPositivo==0)
    {
        printf("\nNão foram digitados números positivos e a média dos números ímpares é %.2f",soma/numImpar);
    }
    else if(numImpar==0)
    {
        printf("\nQuantidade de números positivos é %d, não foram digitados números ímpares",numPositivo);
    }
    else
    {
        printf("\nQuantidade de números positivos é %d e a média dos números ímpares é %.2f",numPositivo, soma/numImpar);
    }

}

#endif ex3

#ifdef ex4
/* 4)	Receba K números quaisquer, K representa a quantidade de termos solicitada pelo usuário e
cada termo pode ser representado pela variável N. Exiba o maior número digitado. Utilize o laço do while para a entrada
da quantidade K e um laço for para exibir o maior número.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,maior;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    maior=0;

    do
    {

        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("Digite um número acima de 0 (zero).");
        }

    }
    while(n<=0);  // laço para aceitar apenas números acima de zero.


    for(num=1; num <= n; num++)
    {

        printf("Digite um número: ");
        scanf("%d",&k);

        if(num==1)
        {
            maior=k;
        }

        if (k > maior)
        {
            maior= k;
        }

    }

    printf("\nO maior número digitado foi %d", maior);

}


#endif ex4

#ifdef ex5
/* 5-)  Receba dois números. Calcule e mostre:
    a)	A soma dos números pares desse intervalo, incluindo os números digitados;
    b)	A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,x1,y,par,impar;
    cont=0;
    par=0;
    impar=1;

    printf("Digite dois números: \n");
    scanf("%d %d", &x, &y);

    x1=x;

    while(x1<=y)
    {


        if(x1%2==0)
        {
            par=par + x1;

        }
        else
        {

            impar=impar * x1;

        }

        x1=x1+1; //Contador


    }

    printf("\nA soma dos números pares do intervalo de %d com %d é: %d\n",x,y,par);
    printf("\nA multiplicação dos números ímpares do intervalo de %d com %d é: %d",x,y,impar);

}

#endif ex5

#ifdef ex6

/* 6)	Receba a quantidade de salários de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Salário armazena cada uma dos K salários digitados.
Calcule e mostre a somatória dos salários superiores a 3 salários-mínimos
e inferior ou igual a 7 salários-mínimos.
Exiba também o maior e o menor salário encontrado.
Utilize o laço while para a entrada da quantidade K
e um laço while para efetuar os cálculos e as comparações solicitadas.
Obs: O valor do salário mínimo deverá ser pesquisado na Internet.
*/
//salário mínimo em 2021 = R$ 1.100.

main()
{

    setlocale(LC_ALL, "Portuguese");

    int k=0,cont;
    float salario,minimo,maior,menor,somaSalario;
    salario=0;
    cont=0;
    minimo=1100;
    maior=0;
    somaSalario=0;
    menor=0;


    while(k<=0)
    {

        printf("Qual a quantidade de salários que irá digitar ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite um número maior que 0 (zero).\n");
        }
    }


    while(cont<k)
    {
        cont=cont+1;

        printf("Digite o salário: ");
        scanf("%f",&salario);

        if(salario > 3*minimo && salario <= 7*minimo)
        {
            somaSalario = somaSalario + salario;
        }

        if(cont==1)
        {
            maior=salario;
            menor=salario;
        }
        else if(salario > maior)
        {
            maior=salario;
        }
        else if(salario < menor)
        {
            menor=salario;
        }

    }

    printf("\nA Somatória dos salários pedidos é %.2f\n",somaSalario);
    printf("\nO maior dos salários digitados foi %.2f\n",maior);
    printf("\nO menor dos salários digitados foi %.2f\n",menor);

}


#endif ex6

#ifdef ex7
/* 7)	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
A variável P representa cada peso digitado.
Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos.
Exiba também o menor, a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado.
Utilize o laço while para a entrada da quantidade N e um laço do while para efetuar os cálculos e as comparações solicitadas.
*/
main()
{

    setlocale(LC_ALL, "Portuguese");

    int n,cont,cont0,cont1,cont2,cont3;
    float p,peso,menor,maior;
    n=0;
    p=0;
    cont=0,cont0=0,cont1=0,cont2=0,cont3=0;
    peso=0;
    maior=0,menor=0;

    while(n<=0)
    {

        printf("Qual quantidade deseja digitar ? ");
        scanf("%d",&n);

        if(n<=0)
        {
            printf("\nDigite apenas números acima de 0 (zero).\n");  //Feito para avisar o usuário de apenas digitar números acima de zero.
        }

    }

    do{

        while(p<=0){

            printf("Digite o peso: ");
            scanf("%f",&p);

            if(p<=0){
                printf("Número inválido ! Digite acima de 0 (zero).\n");
            }

        }

        if(menor==0 && maior==0)
        {
            maior=p;
            menor=p;
        }

        if(p>=70 && p<= 85,5)
        {
            peso=peso+p;
            cont0=cont0+1;

        }

         if(p>75)
            {
                cont1=cont1 + 1;
            }

        if(p > maior || p==maior)
        {

            if(p!=maior)
            {
                maior=p;
                cont2=1;
            }
            else
            {
                maior=p;
                cont2++;
            }
        }

        if(p < menor || p==menor)
        {

            if(p!=menor)
            {
                menor=p;
                cont3=1;
            }
            else
            {
                menor=p;
                cont3++;

            }
        }


    cont = cont + 1;
    p=0;


    }while(cont < n);


    printf("\nA média dos pesos pedidos é %.2f a quantidade de pessoas com peso acima de 75 kilos é igual a %d.\n",peso/cont0,cont1);
    printf("\nO menor peso é %.2f a quantidade de vezes que apareceu foi %d.\n",menor,cont3);
    printf("\nO maior peso é %.2f e a quantidade de vezes que apareceu foi %d.\n",maior,cont2);
}

#endif ex7

#ifdef ex8
/* 8)	Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano anterior.
        Faça um programa que leia os dados digitados pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo.

 Depois, calcule e imprima:

a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b)	A quantidade de mulheres que leram 5 livros ou mais.
c)  A média de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que não leram LIVROS.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int idade,livro,quant,quantF,media;
    float cont, quantLiv, idadeH, quantM,soma;
    char sexo;
    idade=1;
    livro=0;
    sexo= 'f','m';
    quant=0;
    quantF=0;
    cont=0;
    quantM=0;
    quantLiv=0;
    idadeH=0;
    soma=0;
    media=0;

    do
    {
        do{
        printf("\nQual sua idade ?\n ");
        scanf("%d",&idade);
        getchar();
        }while(livro<0);

        if(idade > 0)
        {
           cont=cont+1;

           do
           {
            printf("\nQual o seu sexo, digite (m) para homem, ou (f) para Mulher\n");
            scanf("%c",&sexo);
           }while(sexo!='f'&&sexo!='m');

           do
           {
             printf("Quantos livros você leu no ano anterior ? \n");
             scanf("%d",&livro);
           }while(livro<0);

           if(idade < 10 && livro > 0)
           {
               quant=quant+livro;
           }

           if (sexo == 'f'  && livro >5)
           {
               quantF = quantF + 1;
           }

           if (sexo == 'm' && livro < 5)
           {
               idadeH = idadeH + idade;
               quantM = quantM + 1;
               media=idadeH/quantM;
           }

           if(livro==0)
           {
               quantLiv=quantLiv+1;
           }
        }

    }
    while(idade>0);

    printf("\nA quantidade de livros lidos por menores de 10 anos é: %d\n",quant);
    printf("\nA quantidade de mulheres que leram 5 livros ou mais é: %d\n",quantF);
    printf("\nA média de idade dos homens que leram menos que 5 livros é: %d\n",media);
    printf("\nO percentual de pessoas que não leram livros é: %.2f %%\n",quantLiv*100/cont);

}

#endif ex8

#ifdef ex9
/* 9)	Receba a quantidade K de números quaisquer. K representa essa quantidade e deve ser digitada pelo usuário.
A variável num armazena cada uma dos K números digitados.

Calcule e mostre a quantidade de números positivos divisíveis por 3,
a média dos números negativos.
Exiba também o maior número encontrado e quantas vezes ele apareceu.

Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos e as comparações solicitadas.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,k,num,quant,maior,quantM;
    float numNeg,quant1;
    num=0;
    quant=0;
    numNeg=0;
    quant1=0;
    maior=0;
    quantM=0;

    do
    {
        printf("Digite a quantidade que deseja ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite qualquer número, menos o número 0 (zero).\n");
        }

    }
    while(k<=0);

    for(i=0; i < k; i++)
    {

        printf("Digite um número: ");
        scanf("%d",&num);

        if(num%3==0 && num>0)
        {
            quant++;
        }

        else if(num<0)
        {
            numNeg+=num;
            quant1++;
        }


        if(num > maior || num==maior)
        {

            if(num!=maior)
            {
                maior=num;
                quantM=1;
            }
            else
            {
                maior=num;
                quantM++;
            }
        }

    }

    printf("O maior número encontrado foi %d e a quantidade de vezes que apareceu foi %d",maior,quantM);

    if(quant > 0 && quant1 > 0)
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual: %d\n",quant);
        printf("A média dos números negativos é igual: %.2f\n",numNeg/quant1);
    }

    else if(quant > 0 && quant1 ==0)
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual: %d\n",quant);
        printf("A média dos números negativos é igual a zero.\n");
    }

    else if(quant == 0 && quant1 > 0)
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual a zero.\n");
        printf("A média dos números negativos é igual: %.2f\n",numNeg/quant1);
    }

    else
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual a zero.\n");
        printf("A média dos números negativos é igual a zero.\n");
    }
}


#endif ex9

#ifdef ex10

/* 10)	Gere a seguinte sequência abaixo para K termos.
K representa a quantidade de números que o usuário gostaria quer fosse exibida dessa sequência.
Mostre também a somatória apenas dos números divisíveis por 3 dessa sequência.
Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos solicitados.
		1, 1, 2, 3, 5, 8, 13, 21, .....


        Lógica tentada, abaixo.

        n1  + (n2-i);
		n1=n3;
		n2=n3;

        resultado= n1  + (n2-i);
       n3=resultado;

      printf("%d " "",resultado);
      n1=n3;
      n2=n1;

*/

main()
{

    setlocale(LC_ALL, "Portuguese");


    int x,num, n1, n2,somatoria;
    somatoria=0;
    n1 = 1;
    n2 = 0;

    do
    {
        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um número maior que 0 (zero) !\n");
        }

    }while(x<=0);

    printf (" %d", n1);
    for (int i = 2; i < x; ++i)
    {
        num = n2 + n1;

        if(num%3==0)
        {
            somatoria+=num;
        }

        printf (" %d", num);
        n2 = n1;
        n1 = num;
    }

    printf ("\n\n");

    if(somatoria > 0){
    printf ("A somatória dos números divisíveis por três é igual a %d\n",somatoria);
    }
    else{
        printf("Não existe número divisível por três\n");
    }

    system("pause");

}


#endif ex10

#ifdef ex11
/* 11)	Solicite ao usuário um número maior ou igual a zero e inteiro representado pela variável num.
Calcular o fatorial desse número.
Utilize o laço while para a entrada da variável num e um laço for para efetuar o cálculo do fatorial.
	     OBS: O Fatorial de zero e de um é um.
         Exemplo de cálculo do Fatorial:
		5! =5 * 4 * 3 * 2 * 1            ou
		5! =1 * 2 * 3 * 4 *5
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,num,fat;
    num=-1;
    fat=1;

    while(num<0)
    {

        printf("Digite um número: ");
        scanf("%d",&num);

        if(num<0)
        {
            printf("\nDigite um número maior ou igual a 0 (zero)\n");
        }

    }

    for(i=1; i < num; i++)
    {

        fat*=num-i;

    }

    printf("\nO fatorial do número %d é: %d\n",num,fat*i);

}

#endif ex11

#ifdef ex12
/*

12)	Uma empresa contratou a quantidade de funcionários representada pela variável Y.
Conforme o valor das vendas mensais, os funcionários adquirem pontos que determinarão seus salários ao final de cada mês.
Sabe-se que esses funcionários trabalharão nos meses de novembro a janeiro do ano subsequente.
Utilize os laços que desejar.

a)	Leia as pontuações nos três meses de cada funcionário;
b)	Calcule e mostre a pontuação geral de cada funcionário nos três meses.
c)	Calcule e mostre a média das pontuações de cada funcionário nos três meses.
d)	Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Y,pontuacaoNov,pontuacaoDez,pontuacaoJan,maior,func;
    float somatoria =0;
    pontuacaoNov=0;
    pontuacaoDez=0;
    pontuacaoJan=0;
    somatoria=0;
    maior=0;
    func=0;


    do
    {

        printf("Qual a quantidade de funcionários ? ");
        scanf("%d",&Y);

        if(Y<=0)
        {
            printf("Número inválido! Digite um número superior a 0 (zero).\n");
        }
    }
    while(Y<=0);

    for(int i=0; i < Y; i++)
    {

        do
        {

            printf("Digite a pontuação do funcionario %i no mês de novembro: ",i+1);
            scanf("%d",&pontuacaoNov);

            printf("Digite a pontuação do funcionario %i no mês de dezembro: ",i+1);
            scanf("%d",&pontuacaoDez);

            printf("Digite a pontuação do funcionario %i no mês de janeiro: ",i+1);
            scanf("%d",&pontuacaoJan);

            if(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0)
            {
                printf("\nNúmero digitado Inválido ! Digite zero ou um número superior a zero.\n");
            }

        }
        while(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0);

        somatoria=pontuacaoNov+pontuacaoDez+pontuacaoJan;


        if(somatoria > maior)
        {
            maior=somatoria;
            func=i;
        }

        printf("\nFuncionário %d sua pontuação nos 3 meses foi: %.0f",i+1,somatoria);
        printf("\nFuncionário %d sua pontuação média nos 3 meses foi: %.2f\n\n",i+1,somatoria/3);

        somatoria=0;

    }

    printf("\--------------------------------------------------\n");
    printf("A maior pontuação dos 3 meses atingida foi: %d.",maior);
    printf("\nO Funcionário número:[%d] foi o que mais pontuou.",func+1);
    printf("\n--------------------------------------------------\n");

}

#endif ex12

#ifdef ex13
/* 13)	Solicite ao usuário a quantidade de números de termos que ele deseja.
Exiba a somatória dos valores da série abaixo referente a quantidade determinada pelo usuário:
Utilize os laços que desejar.
2,  7, 3, 4,  21, 12 , 8,  63,  48,  16,  189,  192,  32,   567,  768,  64, ...

*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i,x, prim=2, posPrim=1, seg=7, posSeg=2, terc=3, posTerc=3,soma,soma1,soma2,total;
    soma=0;
    soma1=0;
    soma2=0;
    total=0;

    do
    {

        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um número maior ou igual a 0 (zero)\n");
        }

    }
    while(x<=0);

    for (i=1; i<=x; i++)
    {
        if (posPrim == i)
        {
            soma+=prim;
            printf("%d ", prim);
            prim = prim * 2;
            posPrim = posPrim + 3;
        }
        else if (posSeg == i)
        {
            soma1+=seg;
            printf("%d ", seg);
            seg = seg * 3;
            posSeg = posSeg + 3;
        }
        else
        {
            soma2+=terc;
            printf("%d ", terc);
            terc = terc * 4;
            posTerc = posTerc + 3;
        }
    }

    printf("\nA Somátoria dos números é igual a: %d\n", total=soma+soma1+soma2);
}

#endif ex13
