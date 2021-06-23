#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01



#ifdef ex01
//1-)Escreva um programa que determine o menor multiplo de um numero inteiro.
//Este multiplo deve ser maior que o limite minimo recebido.
//Recebe os 2 numeros via teclado.
//Ex: menor multiplo de 13 maior que 100. Resultado: 104.


main(){

    setlocale(LC_ALL, "Portuguese");

    int lim,mul,x,menor=0;

    printf("LIMITE: ");
    scanf("%d",&lim);
    printf("MULTIPLO: ");
    scanf("%d",&mul);

    for(x=lim+mul+1; x>lim; x--)
    {
        if(x%mul==0)
        {
            if(x<menor)
            {
                menor = x;
            }
            else if(menor==0)
            {
                menor = x;
            }
        }
    }
    system("clear||cls");//comando para limpar a tela.
    printf("Menor múltiplo de %d maior que o limite de %d = %d",mul,lim,menor);

}

#endif ex01

#ifdef ex02

//2-) Escreva um programa que receba dados via teclado para variaveis do tipo short,
//long, int, float, double e um char e imprima-os no video no seguinte formato:
//        10        20        30        40        50        60
//12345678901234567890123456789012345678901234567890123456789012345
//    short               long                int
//              float               double              char

main(){

     setlocale(LC_ALL, "Portuguese");

    char c;
    unsigned char uc;
    short s;
    long l;
    int i;
    float f;
    double d;
    unsigned int ui;
    unsigned long ul;

    printf("DIGITE UM NUMERO SHORT: ");
    scanf("%d",&s);
    printf("DIGITE UM NUMERO LONG: ");
    scanf("%ld",&l);
    printf("DIGITE UM NUMERO INT: ");
    scanf("%d",&i);
    printf("DIGITE UM NUMERO FLOAT: ");
    scanf("%f",&f);
    printf("DIGITE UM NUMERO DOUBLE: ");
    scanf("%lf",&d);
    printf("DIGITE UM CARACTER: ");
    scanf("%c",&c);
    c = getchar();

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");


    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.2f%21.2lf%18c\n",f,d,c);
}

#endif ex02

#ifdef ex03

//3-) Escreva um programa que receba via teclado um tempo em segundos e
//converta para horas, minutos e segundos.
//Ex.: recebe 3850 segundos que converte para 1h 4min 10s.

main(){

    setlocale(LC_ALL, "Portuguese");

    int H,M,S,s;

    printf("DIGITE OS SEGUNDOS: ");
    scanf("%d",&s);

    H = s/3600;
    S = s%3600;
    M = S/60;
    S = S-(M*60);

    if(H==0)
    {
        printf("%d segundos são = %dmin %ds",s,M,S);
    }
    else if(H==1)
    {
        printf("%d segundos são = %dh %dmin %ds.",s,H,M,S);
    }
    else
    {
        printf("%d segundos são = %dhrs %dmin %ds.",s,H,M,S);
    }
}

#endif ex03

#ifdef ex04

//4-) Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
//   variável auxiliar.

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b;
    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);
    printf("a: %d\tb: %d\n", a, b);
    // uma operação de soma e duas subtrações resolvem o problema.
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: %d\tb: %d\n", a, b);
    return 0;
}

#endif ex04

#ifdef ex05

//5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
//    possível de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
//    ser decomposto. Escrever o valor lido e a relação de notas necessárias.

int main(){

    setlocale(LC_ALL, "Portuguese");
    int valor,troco;
    int cem, cinquenta, vinte, dez, cinco, dois, um;       // Guarda a quantidade de nota do valor.

    printf("Entre com um valor em reais.\n");
    scanf("%d",&valor);

    troco = valor;


    cem = troco / 100;
    troco = troco - (cem *100);

    cinquenta = troco / 50;
    troco = troco - (cinquenta * 50);

    vinte = troco / 20;
    troco = troco - (vinte * 20);

    dez = troco /10;
    troco = troco -(dez * 10);

    cinco = troco / 5;
    troco = troco - (cinco * 5);

    dois = troco / 2;
    troco = troco - (dois * 2);

    printf("Valor decomposto : %d\n",valor);
    printf("Notas de 100 : %d\n",cem);
    printf("Notas de 50 : %d\n",cinquenta);
    printf("Notas de 20 : %d\n",vinte);
    printf("Notas de 10 : %d\n",dez);
    printf("Notas de 5 : %d\n",cinco);
    printf("Notas de 2 : %d\n",dois);
    printf("Notas de 1 : %d\n",troco);

    return(0);
}

#endif ex05
