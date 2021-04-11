#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<conio.h>
#define ex03


#ifdef ex01
/*1 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores.
    Um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.
*/
int main()
{

    setlocale(LC_ALL, "Portuguese");
    int N, i,cont;
    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &N);

        int vet0[N],vet1[N],vet2[N];

        for (i = 0; i < N; i++)
        {
            printf("Digite um numero: ");
            scanf("%d", &vet0[i]);
        }

        printf("\nVETOR U:\n");
        for (i = 0; i < N; i++)
        {

            if(cont%2==0)
            {
                vet1[i] = vet0[i];
                printf("%d ", vet1[i]);
            }
            cont=cont+1;
        }

        printf("\n\nVETOR W:\n");
        for (i = 0; i < N; i++)
        {
            cont=cont+1;
            vet2[i] = vet0[i];
            if(cont%2!=0)
            {
                printf("%d ", vet2[i]);
            }

        }

        printf("\nTecle 's' se deseja continuar\n\n");

        opcao = getch();

    }
    return 0;
}
#endif ex01

#ifdef ex02
/*2 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
*/
int inteiro[3];
float flutuante[3];
long longo[3];
double dobro[3];
unsigned semsinal[3];
int main() {

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';
    while(opcao == 's' || opcao == 'S') {
    int i;

    for(i=0; i<3; i++)
    {
        printf("\nDigite um valor para INT: ");
        scanf("%d",&inteiro[i]);
        printf("\nDigite um valor para LONG: ");
        scanf("%ld",&longo[i]);
        printf("\nDigite um valor para UNSIGNED: ");
        scanf("%u",&semsinal[i]);
        printf("\nDigite um valor para FLOAT: ");
        scanf("%f",&flutuante[i]);
        printf("\nDigite um valor para DOUBLE: ");
        scanf("%lf",&dobro[i]);
    }
    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    for(i=0; i<3; i++)
    {
    printf("  %d                  %d                  %d\n",inteiro[i],longo[i],semsinal[i]);
    printf("            %.2f               %.2lf\n",flutuante[i],dobro[i]);
    }

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();
    }
}
#endif ex02

#ifdef ex03
/*3 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.
*/
setlocale(LC_ALL, "Portuguese");


#endif ex03


#ifdef ex04
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.
*/
main()
{
    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

        int M, N, i, j;

        printf("Quantas linhas vai ter a matriz? ");
        scanf("%d", &M);

        printf("Quantas colunas vai ter a matriz? ");
        scanf("%d", &N);

        int mat[M][N],mat1[M][N],mat2[M][N];

        printf("\nDigite os valores do primeiro vetor\n");
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                printf("Elemento [%d,%d]: ", i, j);
                scanf("%d", &mat[i][j]);
            }
        }

        printf("\nDigite os valores do segundo vetor\n");

        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                printf("Elemento [%d,%d]: ", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nMATRIZ DIGITADA:\n");
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                mat2[i][j] = mat[i][j] - mat1[i][j];
                printf("%d ", mat2[i][j]);
            }
            printf("\n");
        }
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}
#endif ex04

#ifdef ex05
/*5 - Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
    ”nao encontrado”.
*/
int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    int i,j,valor,m[5][5];
    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

        for(i=0; i<5; i++)   //faz a matriz que vai armazenar todos os valores
        {

            for(j=0; j<5; j++)
            {

                printf("escreva o [%i][%i] numero:",i,j);//Primeiro tu coloca para o valor

                scanf("%i",&m[i][j]);//salva
            }
        }

        system("cls");//limpa a tela

        for(i=0; i<5; i++)
        {

            for(j=0; j<5; j++)
            {

                printf("|%i",m[i][j]);//mostra a Matriz
            }
            printf("\n");//Esse quebra linha serve para mostrar em forma de matriz
        }

        printf("Qual valor você procura?:");//o que vai ler fora do for ou da matirz

        scanf("%i",&valor);

        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {

                if(m[i][j]==valor)   //condição dentro do for para percorrer a matriz toda
                {
                    printf("Esse:%i[%i][%i]",m[i][j],i,j);//mostra o resultado
                }
            }
        }
        printf("\nNúmero não encontrado.\n");
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex05
