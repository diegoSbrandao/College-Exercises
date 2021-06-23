#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01

#ifdef ex01
/*1 - Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
e some 1 no valor ASCII de cada caractere da palavra em outra funcao.
Na sua funcao main() imprima a string resultante. (variavel global).
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char frase[20];
    int i;
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Entre com o texto: ");
        fgets(frase,19,stdin);

        for(i = 0; frase[i] != '\0'; i++)
        {
            frase[i] += 1;
        }
        printf("\nNovo texto: %s\n", frase);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}

#endif ex01

#ifdef ex02
/*2 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:
            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
int main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {

	char texto1[7],texto2[7],texto3[7],texto4[7],texto5[7];
    puts("\nTexto 1: ");
    gets(texto1);
    puts("\nTexto 2: ");
    gets(texto2);
    puts("\nTexto 3: ");
    gets(texto3);
    puts("\nTexto 4: ");
    gets(texto4);
    puts("\nTexto 5: ");
    gets(texto5);
    printf("\n        10        20        30        40        50");
    printf("\n12345678901234567890123456789012345678901234567890\n");
    printf("  %s                                   %s",texto1,texto5);
    printf("\n            %s               %s                   %s",texto2,texto4);
    printf("\n                      %s                   ",texto3);

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();
    }

}

#endif ex02


#ifdef ex03
/*3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
*/
int main()
{

    setlocale(LC_ALL, "Portuguese");

    char frase[10];
    int i;
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Entre com o texto: ");
        fgets(frase,9,stdin);

        for(i = 0; frase[i] != '\0'; i++)
            if(frase[i] >= 97 && frase[i] <= 122)
                frase[i] -= 32;

        printf("\nNovo texto: %s\n", frase);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex03


#ifdef ex04
/*4 - Receba via teclado uma cadeia de caracteres (10) e
    converta todos os caracteres para letras minusculas.
*/
int main()
{

    setlocale(LC_ALL, "Portuguese");

    char frase[10];
    int i;
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("Entre com o texto: ");
        fgets(frase,9,stdin);

        for(i = 0; frase[i] != '\0'; i++)
            if(frase[i] >= 65 && frase[i] <= 90)
                frase[i] += 32;

        printf("\nNovo texto: %s\n", frase);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex04

#ifdef ex05
/*5 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main().
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char C;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        _Bool stringsIguais(char s1[], char s2[]);

        char s1[10];
        char s2[10];
        printf("Digite alguma palavra(max de 10 caracteres): ");
        scanf("%s", &s1);
        printf("Digite outra palavra (max de 10 caracteres): ");
        scanf("%s", &s2);

        if(stringsIguais(s1,s2))
        {
            printf(" São iguais\n");
        }
        else
        {
            printf(" Não são iguais\n");
        }
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

_Bool stringsIguais(char str1[], char str2[])
{

    int contador = 0;
    int igual = 0;
    while (str1[contador] != '\0' || str2[contador] != '\0')
    {
        if (str1[contador] == str2[contador])
        {
            ++igual;
        }
        ++contador;
    }
    if (igual == contador)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#endif ex05
