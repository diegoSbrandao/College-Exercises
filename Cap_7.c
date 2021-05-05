#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex03

#ifdef ex01
/*
1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/
int main()
{

    setlocale(LC_ALL, "Portuguese");
    struct reg
    {
        char c;
        int i;
        long l;
        float f;
        double d;
        unsigned char uc;
        unsigned int ui;
        unsigned long ul;
    };

    struct reg regua;
    printf("Digite um valor para CHAR: ");
    scanf("%c",&regua.c);
    printf("\nDigite um valor para INT: ");
    scanf("%d",&regua.i);
    printf("\nDigite um valor para LONG: ");
    scanf("%ld",&regua.l);
    printf("\nDigite um valor para FLOAT: ");
    scanf("%f",&regua.f);
    printf("\nDigite um valor para DOUBLE: ");
    scanf("%lf",&regua.d);
    printf("\nDigite um valor para UNSIGNED CHAR: ");
    scanf("%u",&regua.uc);
    printf("\nDigite um valor para UNSIGNED INT: ");
    scanf("%u",&regua.ui);
    printf("\nDigite um valor para UNSIGNED LONG: ");
    scanf("%ul",&regua.ul);
    printf("\n        10        20        30        40        50        60        70");
    printf("\n1234567890123456789012345678901234567890123456789012345678901234567890");
    printf("\n    %c         %d         %ld                   %.2f                %.2f",regua.c,regua.i,regua.l,regua.f,regua.d);
    printf("\n          %u                   %u                   %u",regua.uc,regua.ui,regua.ul);
}

#endif ex01

#ifdef ex02
/*
 2 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/
void main()
{

    setlocale(LC_ALL, "Portuguese");

    struct ponto
    {
        int x;
        int y;
    };

    struct ponto p;
    float resultado;
    printf("Informe o ponto x: \n");
    scanf("%d", &p.x);
    printf("Informe o ponto y: \n");
    scanf("%d", &p.y);



    resultado = sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2));



    printf("Distancia do ponto de origem (0, 0): %.2f \n", resultado);
}

#endif ex02

#ifdef ex03
/*
3 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video.
    Faça um menu. (vetor de estruturas)
		nome, end, cidade, estado, cep
*/

main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Informações solicitadas:\n"),
    printf("\nNome:");
    printf("\nEndereço:");
    printf("\nCidade:");
    printf("\nEstado:");
    printf("\nCep:");


    struct dados {
    char nome[20];
    char ende[40];
    char cidade[20];
    char estado[3];
    int cep;
};

struct dados pessoa[4];

    int i;
    for(i=0;i<4;i++) {
        printf("\n\nPessoa %d\n",i+1);

        printf("\nNome: ");
        scanf("%s",&pessoa[i].nome);
        getchar();

        printf("\nEndereco: ");
        scanf("%s",&pessoa[i].ende);
        getchar();

        printf("\nCidade: ");
        scanf("%s",&pessoa[i].cidade);
        getchar();

        printf("\nEstado: ");
        scanf("%s",&pessoa[i].estado);
        getchar();

        printf("\nCEP: ");
        scanf("%d",&pessoa[i].cep);
    }

    for(i=0;i<4;i++) {
        printf("\nPessoa %d\n",i+1);
        printf("\nNome: %s\nEndereco: %s\nCidade: %s\nEstado: %d\nCEP: \n\n",
        pessoa[i].nome,pessoa[i].ende,pessoa[i].cidade,pessoa[i].estado,pessoa[i].cep);
    }

}
#endif ex03
