#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01

#ifdef ex01

//1 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
//     Álcool
//         até 20 litros, desconto de 3% por litro
//         acima de 20 litros, desconto de 5% por litro
//     Gasolina
//          até 20 litros, desconto de 4% por litro
//          acima de 20 litros, desconto de 6% por litro
//     Escreva um programa que leia o número de litros vendidos e o tipo de
//     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
//     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
//     gasolina é R$ 4,88 e o preço do litro do álcool é R$ 3,18.

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float L,G=3.88,A=3.18,g,a;
    char C;

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("DIGITE (G) PARA GASOLINA OU (A) PARA ALCOOL: ");
        printf("\n");

        do
        {
            printf("\nTIPO DE COMBUSTIVEL: ");
            C=getche();
            C=tolower(C); /*CONVERTE LETRA MAIUSCULA PARA MINUSCULA*/

            if((C!='g')&&(C!='a'))
            {
                printf("\nPOR FAVOR DIGITE APENAS (G) PARA GASOLINA E (A) PARA ALCOOL\n");
            }
        }
        while((C!='g')&&(C!='a'));

        if(C=='g')
        {

            do
            {
                printf("\nDIGITE A QUANTIDADE DE LITROS: ");
                scanf("%f",&L);
                if(L<=0)
                {
                    printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n");
                }
            }
            while(L<=0);

            if(L<=20)
            {
                g = L;          /*SALVA O VALOR DE LITROS*/
                G *= 1-0.04;    /*DESCONTA 4% DE CADA LITRO*/
                L = G*L;        /*MULTIPLICA O VALOR DA GASOLINA PELOS LITROS DESEJADOS*/
                if(g==1)
                {
                    printf("%.2f LITRO DE GASOLINA COM 4%% DE DESCONTO = %.2f\n\n",g,L);

                }
                else
                {
                    printf("%.2f LITROS DE GASOLINA COM 4%% DE DESCONTO = %.2f\n\n",g,L);
                }
            }
            else if(L>20)
            {
                g = L;
                G *= 1-0.06;
                L = G*L;
                printf("%.2f LITROS DE GASOLINA COM 6%% DE DESCONTO = %.2f\n\n",g,L);
            }
        }
        else if (C=='a')
        {
            do
            {
                printf("\nDIGITE A QUANTIDADE DE LITROS: ");
                scanf("%f",&L);
                if(L<=0)
                {
                    printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n\n");
                }
            }
            while(L<=0);

            if(L<=20)
            {
                a = L;
                A *= 1-0.03;
                L = A*L;
                if(a==1)
                {
                    printf("%.2f LITRO DE ALCOOL COM 4%% DE DESCONTO = %.2f\n\n",a,L);
                }
                else
                {
                    printf("%.2f LITROS DE ALCOOL COM 4%% DE DESCONTO = %.2f\n\n",a,L);
                }
            }
            else if(L>20)
            {
                a = L;
                A *= 1-0.05;
                L = A*L;
                printf("%.2f LITROS DE ALCOOL COM 5%% DE DESCONTO = %.2f\n\n",a,L);
            }

        }
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex01


#ifdef ex02
//2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
//    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
//    comando if-else.

main()
{

    setlocale(LC_ALL, "Portuguese");

    double A=50,B=A/2;
    char c;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {
        printf("PENSE EM UM NUMERO ENTRE 1 E 99!!\n");
        printf("DIGITE > PARA MAIOR\nDIGITE < PARA MENOR\nDIGITE = PARA IGUAL\n");
        printf("\n");
        do
        {
            printf("O SEU NUMERO: >, = OU < A %.0lf\n",A);
            c = getche();
            printf("\n");

            if (c == '>')
            {
                A = A+B;
                B = B/2;
                if(A>=99.5) /*NAO DEIXA A CHEGAR EM 100*/
                {
                    A = A-1;
                }
                else if(A<=0.5) /*NAO DEIXA A CHEGAR EM 0*/
                {
                    A = A+1;
                }
            }
            else if (c == '<')
            {
                A = A-B;
                B = B/2;
                if(A>=99.5)
                {
                    A = A-1;
                }
                else if(A<=0.5)
                {
                    A = A+1;
                }
            }
            else if(c == '=')
            {
                printf("\nSEU NÚMERO = %.0lf",A);
            }
        }
        while(c != '=');
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}
#endif ex02


#ifdef ex03
//3 - Reescreva o programa do execicio anterior agora utilizando o comando switch.
//    Conte o n. de tentativas e imprima o resultado no video.

main()
{

    setlocale(LC_ALL, "Portuguese");
    double A=50,B=A/2,C=0;
    char opc;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("PENSE EM UM NUMERO ENTRE 1 E 99!!\n");
        printf("DIGITE > PARA MAIOR\nDIGITE < PARA MENOR\nDIGITE = PARA IGUAL\n");
        printf("\n");
        do
        {
            printf("O SEU NUMERO: >, = OU < A %.0lf\n",A);
            opc = getche();
            printf("\n");
            switch(opc)
            {
            case '>':
            {
                A = A+B;
                B = B/2;
                if(A>=99.5) /*NAO DEIXA A CHEGAR EM 100*/
                {
                    A = A-1;
                }
                else if(A<=0.5) /*NAO DEIXA A CHEGAR EM 0*/
                {
                    A = A+1;
                }

                if(C<=6) /*O PROGRAMA SEMPRE ACERTARA EM ATE 7 TENTATIVAS*/
                {
                    C++;
                }
            }
            break;
            case '<':
            {
                A = A-B;
                B = B/2;
                if(A>=99.5)
                {
                    A = A-1;
                }
                else if(A<=0.5)
                {
                    A = A+1;
                }
                if(C<=6)
                {
                    C++;
                }
            }
            break;
            case '=':
            {
                if(C<=6)
                {
                    C++;
                }
                printf("O SEU NUMERO = %.0lf\nACERTEI O SEU NUMERO EM %.0lf TENTATIVAS",A,C);
            }
            break;
            default:
                printf("OPCAO INVALIDA!!\n");
            }
        }
        while(opc!='=');
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex03


#ifdef ex04
//4 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
//    instantes em que a ligacao foi iniciada e concluida.
//    Escreva um programa que recebe via teclado dois instantes dados em
//    horas, minutos e segundo e determina o intervalo de tempo
//    (em horas, minutos e segundos) decorrido entre eles.

main()
{

    setlocale(LC_ALL, "Portuguese");
    int H,M,S,HI,MI,SI,HF,MF,SF,A,B;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {
        do
        {
            do
            {
                printf("DIGITE A HORA INICIO DA LIGACAO: ");
                scanf("%d",&HI);
                if(HI<0 || HI>24)
                {
                    printf("DIGITE O VALOR DE HORAS >= 0\n");
                }
            }
            while(HI<0 || HI>24);

            do
            {
                printf("DIGITE O MINUTO DE INICIO DA LIGACAO: ");
                scanf("%d",&MI);
                if(MI<0 || MI>59)
                {
                    printf("DIGITE O VALOR DE MINUTOS >= 0 OU <= 59\n");
                }
            }
            while(MI<0 || MI>59);

            do
            {
                printf("DIGITE O SEGUNDO DE INICIO DA LIGACAO: ");
                scanf("%d",&SI);
                if(SI<0 || SI>59)
                {
                    printf("DIGITE O VALOR DE SEGUNDOS >=0 OU <=59\n");
                }
            }
            while(SI<0 || SI>59);

            HI = HI*3600;   /*HORAS PARA SEGUNDOS*/
            MI = MI*60;     /*MINUTOS PARA SEGUNDOS*/
            A = HI+MI+SI;   /*CONVERTE TUDO PARA SEGUNDOS*/

            do
            {
                printf("DIGITE A HORA FIM DA LIGACAO: ");
                scanf("%d",&HF);
                if(HF<0 || HF>24)
                {
                    printf("DIGITE O VALOR DE HORAS >= 0\n");
                }
            }
            while(HF<0 || HF>24);

            do
            {
                printf("DIGITE O MINUTO DE FIM DA LIGACAO: ");
                scanf("%d",&MF);
                if(MF<0 || MF>59)
                {
                    printf("DIGITE O VALOR DE MINUTOS >= 0 OU <= 59\n");
                }
            }
            while(MF<0 || MF>59);

            do
            {
                printf("DIGITE O SEGUNDO DE FIM DA LIGACAO: ");
                scanf("%d",&SF);
                if(SF<0 || SF>59)
                {
                    printf("DIGITE O VALOR DE SEGUNDOS >=0 OU <=59\n");
                }
            }
            while(SF<0 || SF>59);

            HF = HF*3600;
            MF = MF*60;
            B = HF+MF+SF;

            if(A>B)
            {
                printf("DIGITE APENAS HORARIOS DE LIGACOES FEITOS NO MESMO DIA\n");
            }
            else
            {
                A = B-A;
                H = A/3600;     /*PROCURA QUANTAS HORAS TEVE*/
                S = A%3600;     /*PEGA O RESTO DE SEGUNDOS PARA USAR NO CALCULO DE MINUTOS*/
                M = S/60;       /*DIVIDE OS SEGUNDOS POR 60 PARA ACHAR OS MINUTOS*/
                S = S-(M*60);

                if(H==0)
                {
                    printf("A LIGACAO TEVE DURACAO DE %dmin %dseg\n",M,S);
                }
                else if(H==1)
                {
                    printf("A LIGACAO TEVE DURACAO DE %dhr %dmin %dseg\n",H,M,S);
                }
                else
                {
                    system("clear||cls");//comando para limpar a tela.
                    printf("A ligação teve duração de %dhrs %dmin %dseg\n",H,M,S);
                }
            }
        }
        while(A>B);
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex04


#ifdef ex05
//5 - Escreva um programa que receba via teclado numeros inteiros positivos.
//    Quando o numero digitado for negativo o programa deve parar e calcula a
//    media dos valores positivos digitados.


main() {

    setlocale(LC_ALL, "Portuguese");
    int A,C,Soma;
    char opcao = 's';
    Soma = 0;
    C = 0;

    while(opcao == 's' || opcao == 'S') {

    do{

	 printf("DIGITE UM NUMERO: ");
     scanf("%d",&A);

        if(A>0){
            Soma=Soma+A;
            C++;
        }

    }while(A>=0);

    Soma = Soma/C;
    printf("A quantidade de números digitados foi %d e a média da soma é %d",C,Soma);

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();
   }
}
#endif ex05
