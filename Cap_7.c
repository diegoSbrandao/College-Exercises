#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01

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
    char opcao = 's';



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
    while(opcao == 's' || opcao == 'S')
    {
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


    printf("\n\nTecle 's' se deseja continuar\n");
    opcao = getch();
    }

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
    char opcao = 's';

    struct ponto
    {
        int x;
        int y;
    };

    struct ponto p;
    float resultado;

    while(opcao == 's' || opcao == 'S')
    {
    printf("Informe o ponto x: \n");
    scanf("%d", &p.x);
    printf("Informe o ponto y: \n");
    scanf("%d", &p.y);



    resultado = sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2));



    printf("Distância do ponto de origem (0, 0): %.2f \n", resultado);

    printf("\n\nTecle 's' se deseja continuar\n");
    opcao = getch();
    }
}

#endif ex02

#ifdef ex03
/*
3 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video.
    Faça um menu. (vetor de estruturas)
		nome, end, cidade, estado, cep
*/

struct cadastro
{
   char nome[20];
   char end[30];
   char cidade[20];
   char estado[20];
   char cep[9];
};

struct cadastro cliente[4];

void main()
{
   int op, i = 0, j;

   setlocale(LC_ALL, "Portuguese");

   while(op!=3){


      printf("\n\t\t     ##### MENU #####\n\n\n");
      printf("\t\t1-Cadastrar cliente.\n\n");
      printf("\t\t2-Lista de clientes.\n\n");
      printf("\t\t3-Fechar programa.\n\n");

      printf("\n\t\tInforme a função desejada: ");
      scanf_s("%d", &op);

      switch(op)
      {
         case 1:
            system("cls");

            if (i <= 3)
            {
                printf("\n\t\t     ##### CADASTRO DO CLIENTE #####\n\n\n");
                getchar();
                printf("\t\tInforme o nome do cliente: ");
                gets(cliente[i].nome);
                printf("\n\t\tInforme o endereço do cliente: ");
                gets(cliente[i].end);
                printf("\n\t\tInforme a cidade: ");
                gets(cliente[i].cidade);
                printf("\n\t\tInforme estado: ");
                gets(cliente[i].estado);
                printf("\n\t\tInforme o CEP: ");
                gets(cliente[i].cep);
                printf("\n\t\t");
                i++;
            }
            else
            {
               system("cls");
               printf("\n\t\tLista lotada!\n\n\n\t\t");
            }

            system("pause");
            system("cls");
            break;

         case 2:
            system("cls");
            printf("\n\t\t     ##### DADOS DOS CLIENTES #####\n\n\n");

            if (i == 0)
            {
                system("cls");
                printf("\n\t\tLista vazia!\n\n\n\t\t");
            }
            else
            {
                for (j = 0; j < i; j++)
                {
                    printf("\n\t\tNOME: %s", cliente[j].nome);
                    printf("\n\t\tENDEREÇO: %s", cliente[j].end);
                    printf("\n\t\tCIDADE: %s", cliente[j].cidade);
                    printf("\n\t\tESTADO: %s", cliente[j].estado);
                    printf("\n\t\tCEP: %s\n", cliente[j].cep);
                }
            }
            printf("\n\t\t");
            system("pause");
            system("cls");
            break;

         default:
            system("cls");
            if(op!=3){
            printf("\n\t\tA opção informada não existe!\n\n\n\t\t");
            system("pause");
            system("cls");
            break;
            }
            else{
                printf("\n\t\t\PROGRAMA ENCERRADO !\n\n\t\t");
            }
      }

   }
}
#endif ex03
