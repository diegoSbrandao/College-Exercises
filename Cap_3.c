#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<stdbool.h>
#define ex01

#ifdef ex01
/*1 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
     entre eles.
*/
int num1, num2, retorno, soma, mult;

main()
{

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {
        verificaNumero();

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}

void verificaNumero()
{
    // Parte 01
    printf("** R E T O R N O **");
    printf("\n*  Positivo =  1  *\n*  Negativo =  0  *\n*  Zero     = -1  *\n");
    printf("*******************\n\n");

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        retorno = 1;
    }
    if (num1 == 0)
    {
        retorno = -1;
    }
    if (num1 < 0)
    {
        retorno = 0;
    }

    printf("[1º]Retorno = %d\n\n", retorno);
    // Retorno Positivo = 1, Negativo = 0, Zero = -1

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    if (num2 > 0)
    {
        retorno = 1;
    }
    else if (num2 == 0)
    {
        retorno = -1;
    }
    else
    {
        retorno = 0;
    }
    printf("[2º]Retorno = %d\n\n", retorno);
    // Retorno Positivo = 1, Negativo = 0, Zero = -1

    /************************************************/

    // Parte 02

    // Se os dois forem positivos = SOMA
    if (num1 >= 0 && num2 >= 0)
    {

        if (num1 < num2)
        {
            while(num1 < num2-1) // 1 < 4
            {
                num1 += 1; // 1 + 1 = 2
                soma = soma+num1; // soma = 0 + 2

            }
            printf("Somatório = %d\n", soma);
        }

        if (num2 < num1)
        {
            while(num2 < num1-1) // 1 < 4
            {
                num2 += 1; // 1 + 1 = 2
                soma = soma+num2; // soma = 0 + 2

            }
            printf("Somatório = %d\n", soma);
        }

        if (num1 == num2)
        {
            soma = 0;
            printf("Somatório = %d\nObs: Números iguais\n", soma);
        }


    }

    // Se os dois forem negativos = MULTIPLICA
    if (num1 < 0 && num2 < 0)
    {
        if (num1 < num2)
        {
            mult = 1;
            while(num1 < num2-1) // -4 < -1
            {
                num1 += 1; // -4 + 1 = -3 / -2
                mult = mult * num1;

            }
            printf("2. Multiplicação = %d\n", mult);
        }

        if (num2 < num1)
        {
            mult = 1;
            while(num2 < num1-1)
            {
                num2 += 1;
                mult = mult * num2;

            }
            printf("2.1 Multiplicação = %d\n", mult);
        }

    }
}
#endif ex01


#ifdef ex02
/*2 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

bool pesquisa(char letra, char *vetor, int tamanho);


main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        static char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
        char letra;
        puts("Digite uma letra: ");
        letra = getchar();
        puts("Resultado: ");
        if(pesquisa(letra,&vetor[0],sizeof(vetor)))
        {
            puts("valor encontrado");
        }
        else
        {
            puts("valor nao encontrado");
        }


        printf("\nTecle 's' se deseja continuar\n\n");

        opcao = getch();

    }
}


bool pesquisa(char letra,char *vetor,int tamanho)
{
    int i;
    for(i=0; i<tamanho; i++)
    {
        if(letra==vetor[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
}

#endif ex02


#ifdef ex03
/*3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
   return e imprima-os no video na funcao main().
*/

//declaração
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {


        int num1, num2;
        printf("Digite um numero: ");
        scanf("%d",&num1);
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        printf("\nSoma: %d\nSubtração: %d\nMultiplicação: %d\nDivisao: %.2f", soma(num1,num2), subt(num1,num2), multi(num1, num2), divis(num1,num2));
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

//Funções
int soma(int x, int y)
{
    return x + y;
}

int subt(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

float divis(int x, int y)
{
    return (float) x / (float) y;


}

#endif ex03

#ifdef ex04
/*4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
      para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
      aritmeticas devem estar em funcoes. O resultado deve ser mostrado na funcao main()
*/

//declaração
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main(){

    setlocale(LC_ALL, "Portuguese");
    int num1, num2, res = 0;
    char op;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S'){

    printf("Digite um numero: ");
    scanf("%d",&num1);

    do{
        printf("\nDigite a operação escolhida:");
        printf("\nSoma(+): ");
        printf("\nSubtração(-): ");
        printf("\nDivisão(/): ");
        printf("\nMultiplicação(*):\n");
        op = _getche();
        if(op == '='){
            break;
        }
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);
        system("clear||cls");//comando para limpar a tela.

        switch(op){
        case '+':
            res = soma(num1,num2);
            printf("RESULTADO = %d",soma(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        case '-':
            res = subt(num1,num2);
            printf("RESULTADO = %d",subt(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        case '*':
            res = multi(num1,num2);
            printf("RESULTADO = %d",multi(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        case '/':
            res = (int) divis(num1,num2);
            printf("RESULTADO = %2.f", divis(num1,num2));
            printf("\nSe deseja parar digite o símbolo de igual (=)");
            break;
        }
        num1 = res;
        printf("\n\n");
    }
    while(1==1);
    printf("\nUltimo resultado: %d", res);
    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();

    }

}

//Funções
int soma(int x, int y)
{
    return x + y;
}

int subt(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

float divis(int x, int y)
{
    return (float) x / (float) y;
}
#endif ex04

#ifdef ex05
/*5 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.
*/

int fat, n;

int main(){

      setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S'){

      printf("Digite um número: ");
      scanf("%d", &n) ;

      printf(fatorial(n));

    printf("\nTecle 's' se deseja continuar\n\n");

    opcao = getch();

   }
}

  int fatorial(){
  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  printf("\n%d", fat);
  return 0;
  }


#endif ex05
