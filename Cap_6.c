#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01


#ifdef ex01
/*1 - Escreva um programa que tenha o menu abaixo.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit
    Cada opcao de menu deve chamar uma funcao que retorna o resultado da
    conversao. O resultado deve ser mostrado na funcao main().
*/



int main(){



setlocale(LC_ALL, "Portuguese");
int opcao,op1;

    printf("Escolha uma opção abaixo:\n"),
    printf("\n1 - transforma graus Celsius em Fahrenheit e Kelvin");
    printf("\n2 - transforma graus Fahrenheit e Celsius e Kelvin");
    printf("\n3 - transforma graus Kelvin e Celsius e Fahrenheit\n");
    opcao = getch();


    if(opcao==1){
        op1;
    }

}

//Funções
int op1(){

    float celsius, fahr;
	int  c = 167;
	printf("Digite uma temperatura em %cC : ", c);
	scanf("%f", &celsius);
	fahr = celsius*(9.0/5.0)+32;
	printf("%3.f%cC e o mesmo que %3.f%cF", celsius, c, fahr,c );
}



#endif ex01

#ifdef ex02
/*2 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/
int num1,num2;

main()
{

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {


        int num1, num2;
        printf("Digite um numero: ");
        scanf("%d",&num1);
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        printf("\nA soma: %d\nA subtracao: %d\nA multiplicação: %d\nA divisão: %.2f",num1+num2,num1-num2,num1*num2,(float) num1/num2);
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

#endif ex02

#ifdef ex03
/*3 - Reescreva o exercicio anterior utilizando operadores de atribuição
    composta.
*/

//declaração
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S') {

        int num1, num2;
        printf("Digite um numero: ");
        scanf("%d",&num1);
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        printf("\nSoma: %d\nSubtração: %d\nMultiplicação: %d\nDivisao: %.2f", soma(num1,num2), subt(num1,num2), multi(num1, num2), divis(num1,num2));
        printf("\n\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

//Funções
int soma(int x, int y)
{
    return x += y;
}

int subt(int x, int y)
{
    return x -= y;
}

int multi(int x, int y)
{
    return x *= y;
}

float divis(int x, int y)
{
    return (float) x / (float) y;
}

#endif ex03

#ifdef ex04
/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {
        int num1,num2;

        printf("Digite um número: ");
        scanf("%d",&num1);
        printf("\nDigite outro número: ");
        scanf("%d",&num2);

        printf("\nAND\nDecimal: %d\nHexadecimal: %x",num1 & num2,num1 & num2);
        printf("\n\nOU\nDecimal: %d\nHexadecimal: %x",num1 | num2,num1 | num2);
        printf("\n\nOU EXCLUSIVO\nDecimal: %d\nHexadecimal: %x", num1 ^ num2,num1 ^ num2);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

#endif ex04

#ifdef ex05
/*5 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int hdia, ndia;
    int hmes, nmes;
    int hano, nano;
    int dia, mes, ano;
    int diferenca;

    hdia = 0;  // dia de hoje
    ndia = 0;  // dia de nascimento
    hmes = 0;  // mes de hoje
    nmes = 0;  // mes de nascimento
    hano = 0;  // ano de hoje
    nano = 0;  // ano de nascimento
    char opcao = 's';
    while(opcao == 's' || opcao == 'S') {

    printf("%s","Calculadora de Tempo de Vida \n");
    printf("%s","Por favor informe a data de ""hoje?\n");
    printf("%s","[dd mm aaaa]: ");
    scanf(" %d%d%d", &hdia, &hmes, &hano);
    printf("              %2d/%2d/%3d\n\n", hdia, hmes, hano);

    printf("%s","Por favor, informe a data de seu ""nascimento?\n");
    printf("%s","[dd mm aaaa]: ");
    scanf(" %d%d%d", &ndia, &nmes, &nano);
    printf("              %2d/%2d/%3d\n\n", ndia, nmes, nano);


    diferenca =   365*hano + 30*hmes + hdia
                  - 365*nano - 30*nmes - ndia;

    ano = diferenca/365;
    diferenca = diferenca%365;

    mes = diferenca/30;
    diferenca = diferenca%30;

    dia = diferenca;

    printf("%s %d %s %d %s %d %s",
           "Você possui de vida:", ano, "ano(s)", mes, "mes(es)", dia, "dia(s).\n");

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();

    }
}
#endif ex05
