#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define ex01

#ifdef ex01

main()
{

    /*
        1 - Faça um programa para:
    1 - criar/abrir um arquivo texto de nome ”arq.txt”,
    2 - receba via teclado diversos caracteres (um por vezes)e armazene-os
        nesse arquivo. O caracter '0' finaliza a entrada de dados.
    3 - abra o arquivo. Leia e imprima na tela todos os caracteres armazenados.

    */

    setlocale(LC_ALL, "Portuguese");

    char x;

    FILE* arq = fopen("arq.txt", "w");

    do
    {
        printf("Digite um caractere: ");    //Recebe caracteres;
        scanf("%c",&x);
        getchar();
        fputc(x,arq);

    }while(x!='0');     //Ao ser digitado 0 é encerrado;
    fclose (arq);


    arq = fopen("arq.txt", "r"); //Abre o arquivo para leitura;

    x = getc(arq);
    while (x != EOF)
    {
        putchar(x);             //Imprime o conteúdo do arquivo;
        x = getc(arq);
    }

    fclose (arq);
}
#endif

#ifdef ex02

/*

        2 - Faça um programa para gerenciar uma agenda de contatos. Para cada contato
        armazene o nome, o telefone e o aniversário (dia e mês) em uma estrutura de
        dados.

        O programa deve ter as opções:
        1 - inserir contato
        2 - altera contato
        3 - exclui contato
        4 - pesquisar um contato pelo nome
        5 - listar todos os contatos
        6 - listar os contatos cujo nome inicia com uma letra digitada
        7 - imprimir os aniversariantes do mês.

        Sempre que o programa for encerrado, os contatos devem ser escritos no arquivo.
        Quando o programa iniciar os contatos devem ser lidos do arquivo.
        O vetor de estrutura será de 4 elementos como variavel local na funcao main().
        Utilize ponteiros

*/

struct dados
{
    char nome[40];
    char telefone[40];
    char niver[10];
};

void inserir(struct dados *ppessoas);
void exibir(struct dados *ppessoas);
void pesquisar(struct dados *ppessoas);
void alterar(struct dados *ppessoas);
void excluir(struct dados *ppessoas);
void gravarArquivo(struct dados *ppessoas);
void lerArquivo();
int checarNome(char *nome, struct dados *ppessoas);
void pesquisarLetra(struct dados *ppessoas);
void pesquisarNiver(struct dados *ppessoas);




main()
{

    setlocale(LC_ALL,"Portuguese");
    int i, op;
    struct dados pessoas[4];
    do
    {
        printf("\nEscolha uma opcao:\n1 - Inserir contato\n2 - Alterar contato \n3 - Excluir contato\n4 - Pesquisar contato\n5 - Exibir contatos\n6 - Listar contatos por letra inicial \n7 - Imprimir Aniversariantes\n8 - Gravar arquivo\n9 - Ler arquivo.\n10 - Sair\n-->");
        scanf("%d",&op);
        getchar();
        switch(op)
        {
        case 1:
            inserir(&pessoas[0]);
            break;
        case 2:
            alterar(&pessoas[0]);
            break;
        case 3:
            excluir(&pessoas[0]);
            break;
        case 4:
            pesquisar(&pessoas[0]);
            break;
        case 5:
            exibir(&pessoas[0]);
            break;
        case 6:
            pesquisarLetra(&pessoas[0]);
            break;
        case 7:
            pesquisarNiver(&pessoas[0]);
            break;
        case 8:
            gravarArquivo(&pessoas[0]);
            break;
        case 9:
            lerArquivo();
            break;
        case 10:
            printf("\nEncerrando...\n");
            break;
        }
    }
    while(op != 10);
}

void inserir(struct dados *ppessoas)
{
    int i;
    for(i=0; i<4; i++)
    {
        puts("Digite seu nome: ");
        gets((ppessoas+i)->nome);
        puts("Digite seu telefone: ");
        gets((ppessoas+i)->telefone);
        puts("Digite sua data de Aniversário [MM/AAAA]: ");
        gets((ppessoas+i)->niver);
        printf("\n");
    }
}

void exibir(struct dados *ppessoas)
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("\n");
        printf("Nome: %s\n",(ppessoas+i)->nome);
        printf("telefone: %s\n",(ppessoas+i)->telefone);
        printf("Aniversário: %s\n",(ppessoas+i)->niver);
    }
}

void pesquisar(struct dados *ppessoas)
{
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, ppessoas);
    if(i >= 0)
    {
        printf("\nNome: %s\nTelefone: %s\nAniversário: %s\n", (ppessoas+i)->nome,(ppessoas+i)->telefone,(ppessoas+i)->niver);
    }
}

void alterar(struct dados *ppessoas)
{
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, ppessoas);
    if(i >= 0)
    {
        puts("Digite seu novo nome: ");
        gets((ppessoas+i)->nome);
        puts("Digite seu novo telefone: ");
        gets((ppessoas+i)->telefone);
        puts("Digite sua nova data de Aniversário: ");
        gets((ppessoas+i)->niver);
        printf("\n");
    }
}

void excluir(struct dados *ppessoas)
{
    int i, j;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, ppessoas);
    if(i >= 0)
    {
        strcpy((ppessoas+i)->nome,"");
        strcpy((ppessoas+i)->telefone,"");
        strcpy((ppessoas+i)->niver,"");
        printf("\n\"Excluido\"\n");
    }
}


void pesquisarNiver(struct dados *ppessoas)
{
    int i;
    char Z[4];
    puts("Digite o mês de aviversário [MM]: ");
    gets(Z);

    if(ppessoas->niver[0] == Z[0] && ppessoas->niver[1] == Z[1] )
    {
        printf("\nNome: %s\nTelefone: %s\nAniversário: %s\n", (ppessoas+i)->nome,(ppessoas+i)->telefone,(ppessoas+i)->niver);
    }

}


void pesquisarLetra(struct dados *ppessoas)
{
    int i;
    char X[2];
    puts("Digite a primeira letra: ");
    gets(X);

    if(ppessoas->nome[0] == X[0])
    {
        printf("\nNome: %s\nTelefone: %s\nAniversário: %s\n", (ppessoas+i)->nome,(ppessoas+i)->telefone,(ppessoas+i)->niver);
    }

}

void gravarArquivo(struct dados *ppessoas)
{
    FILE *p;
    int i;

    if((p = fopen("agenda_contatos","w"))==NULL)
    {
        puts("Erro ao abrir o arquivo.");
        exit(0);
    }
    else
    {
        for(i=0; i<4; i++)
        {
            fwrite((ppessoas+i)->nome,sizeof((ppessoas+i)->nome),1,p);
            fwrite((ppessoas+i)->telefone,sizeof((ppessoas+i)->telefone),1,p);
            fwrite((ppessoas+i)->niver,sizeof((ppessoas+i)->niver),1,p);
        }
        printf("\nArquivo gravado com sucesso!\n");
    }
    fclose(p);
}

void lerArquivo()
{
    FILE *p;
    struct dados cpessoas[4];
    int i;
    if((p = fopen("agenda_contatos","r"))==NULL)
    {
        puts("Erro ao abrir o arquivo.");
        exit(0);
    }
    else
    {
        for(i=0; i<4; i++)
        {
            fread(cpessoas[i].nome,sizeof(cpessoas[i].nome),1,p);
            fread(cpessoas[i].telefone,sizeof(cpessoas[i].telefone),1,p);
            fread(cpessoas[i].niver,sizeof(cpessoas[i].niver),1,p);
        }
        for(i=0; i<4; i++)
        {
            printf("\nNome: %s\n",cpessoas[i].nome);
            printf("telefone: %s\n",cpessoas[i].telefone);
            printf("Aniversário: %s\n",cpessoas[i].niver);
        }
    }
    fclose(p);
}

int checarNome(char *nome, struct dados *ppessoas)
{
    int i,j,c = 0;
    for(i=0; i<4; i++)
    {
        if(strlen(nome)==strlen((ppessoas+i)->nome))
        {
            for(j=0; j<strlen(nome); j++)
            {
                if(nome[j]==(ppessoas+i)->nome[j])
                {
                    c++;
                }
            }
            if(c == strlen((ppessoas+i)->nome))
            {
                puts("Nome encontrado!");
                return i;
            }
            else
            {
                c = 0;
            }
        }
    }
    puts("Nome nao encontrado!");
    return -1;
}

#endif


#ifdef ex03
    /*

        3 - Faça um programa para o controle de mercadorias em uma despensa doméstica.
    Cada produto será armazenado um código numérico, nome do produto e quantidade atual
    numa estrutura de dados. Utilize ponteiros. A estrutura deve ser declarada como
    variavel local na funcao main().
    O programa deve ter as opções:
    1 - inclui produtos
    2 - altera produtos
    3 - exclui produtos
    4 - pesquisar uma mercadoria pela descrição
    5 - listar todos os produtos
    6 - listar os produtos não disponíveis.
    7 - alterar a quantidade atual
    Escreva os itens das mercadorias direto no arquivo. (utilize a funcao fseek).

    */



struct dados
{
   unsigned char nome[20];
   char id[6];
   int qnt_atual;
};

void INCLUIR(struct dados *p, FILE *KP);

void LISTAR(struct dados *p, FILE *KP);

int PESQUISAR(struct dados *p, FILE *KP);

void LIMITE(struct dados *p, FILE *KP); // LISTA PRODUTOS COM VALOR ZERADO (PRODUTOS NÃO DISPONÍVEIS)

void QUANTIDADE(struct dados *p, FILE *KP);

void ALTERAR(struct dados *p, FILE *KP);

void EXCLUIR(struct dados *p, FILE *KP);



void main()
{
   setlocale(LC_ALL,"Portuguese");
   int op;

   struct dados produtos;

   struct dados *p;

   p = &produtos;

   FILE *KP;

   while(1)
   {
      system("color 1F");

      printf("\n\n\n");

      printf("\t\t 1 - INCLUIR PRODUTOS\n\n");
      printf("\t\t 2 - ALTERAR PRODUTOS\n\n");
      printf("\t\t 3 - EXCLUIR PRODUTO\n\n");
      printf("\t\t 4 - PESQUISAR MERCADORIA\n\n");
      printf("\t\t 5 - LISTAR PRODUTOS\n\n");
      printf("\t\t 6 - LISTAR PRODUTOS NÃO DISPONÍVEIS\n\n");
      printf("\t\t 7 - ALTERAR QUANTIDADE ATUAL\n\n");
      printf("\t\t 8 - SAIR\n\n");

      printf("\n\n\t\tESCOLHA: ");
      scanf("%d",&op);
      getchar();

      switch (op)
      {
      case 1:
         INCLUIR(p, KP);
         break;
      case 2:
         ALTERAR(p, KP);
         break;
      case 3:
         EXCLUIR(p, KP);
         break;
      case 4:
         PESQUISAR(p, KP);
         break;
      case 5:
         LISTAR(p, KP);
         break;
     case 6:
         LIMITE(p, KP);
         break;
      case 7:
         QUANTIDADE(p, KP);
         break;
      case 8:
         exit(0);
         break;
      default:
        system("cls");
        printf("\n\n\t\tNúmero Inválido !!\n");
      }
      system("pause");
      system("cls");
   }
}

void INCLUIR(struct dados *p, FILE *KP)
{
   system("cls");

   KP = fopen("despensa_domestica.txt","a");

   printf("\n\n\t\t\t CADASTRO DE PRODUTO \n\n");

   printf("\n\t\tInsira o nome do produto: ");
   gets(p->nome);

   printf("\n\n\t\tInsira o ID do produto: ");
   gets(p->id);

   printf("\n\n\t\tInsira a quantidade do produto: ");
   scanf("%d",&p->qnt_atual);

   fwrite(p,sizeof(*p),1,KP);

   fclose(KP);

   printf("\n\n\t\t");
}

void LISTAR(struct dados *p, FILE *KP)
{
   int i;

   KP = fopen("despensa_domestica.txt","r");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      system("cls");

      printf("\n\n\t\t\t>>> LISTA DE PRODUTOS <<<\n\n");


      printf("\n\t\t|         NOME         |    ID      | QNT. ATUAL  |");

      while(1)
      {
         i = fread(p,sizeof(*p),1,KP);

         if(i == 1)
         {
            if(p->nome[0] != '*')
            {
               printf("\n\t\t| %-20s |    %-5s   |    %-5d    |", p->nome,p->id, p->qnt_atual);
            }
         }
         else
         {
            break;
         }
      }

      fclose(KP);

      printf("\n\n\n\n\t\t");
   }
}

int PESQUISAR(struct dados *p, FILE *KP)
{
   int i, j, cont = 0;
   unsigned char pesq[20] = "\0";

   KP = fopen("despensa_domestica.txt","r");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      system("cls");

      printf("\n\n\t\t\t>>> PESQUISA DE PRODUTO <<<\n\n");

      printf("\n\t\tInsira o nome do produto: ");
      gets(pesq);

      while(1)
      {
         i = fread(p,sizeof(*p),1,KP);

         if(i == 1)
         {
            if(p->nome[0] != '*')
            {
               for (j = 0; p->nome[j] != '\0'; j++)
               {
                  if (p->nome[j] != pesq[j])
                  {
                     break;
                  }
               }
            }

            cont++;

            if (p->nome[j] == '\0' && pesq[j] == '\0')
            {
               printf("\n\t\t|         NOME         |    ID      | QNT. ATUAL  |");
               printf("\n\t\t| %-20s |    %-5s   |    %-5d    |\n\n", p->nome,p->id, p->qnt_atual);

               fclose(KP);

               return (cont);
            }
         }
         else
         {
            break;
         }
      }
      system("cls");
      printf("\n\n\t\tPRODUTO NÃO ENCONTRADO!\n\n");

      fclose(KP);

      return (-1);
   }
}


void LIMITE(struct dados *p, FILE *KP)
{
   int i, cont = 0;

   KP = fopen("despensa_domestica.txt","r");

   if(KP == NULL )
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      while(1)
      {
         i = fread(p,sizeof(*p),1,KP);

         if(i == 1)
         {
            if(p->nome[0] != '*')
            {
               if(p->qnt_atual ==0 )
               {
                  cont++;
               }
            }
         }
         else
         {
            break;
         }
      }

      if(cont == 0)
      {
        system("cls");
         printf("\n\n\t\tNENHUM PRODUTO!!!\n\n\n");
      }
      else
      {
         system("cls");

         printf("\n\n\t\t\t>>> LISTA DE PRODUTOS INDISPONIVEIS <<<\n\n");

        printf("\n\t\t|         NOME         |    ID      | QNT. ATUAL  |");

         fseek(KP,0,0);

         while(1)
         {
            i = fread(p,sizeof(*p),1,KP);

            if(i == 1)
            {
               if(p->nome[0] != '*')
               {
                  if(p->qnt_atual ==0)
                  {
                printf("\n\t\t| %-20s |    %-5s   |    %-5d    |\n\n", p->nome,p->id, p->qnt_atual);

                  }
               }
            }
            else
            {
               break;
            }
         }

         printf("\n\n\n\n\t\t");

         fclose(KP);
      }
   }
}



void QUANTIDADE(struct dados *p, FILE *KP)
{
    int k, y, valores;
   KP = fopen("despensa_domestica.txt","r+");

   if(KP == NULL)
   {
    system("cls");
    printf("Lista Vazia !\n\n");
   }
   else
   {
      k = PESQUISAR(p, KP);

      if(k == -1)
      {
         system("pause");
        printf("PROCESSO CANCELADO !\n\n");
      }
      else
      {

         KP = fopen("despensa_domestica.txt","r+");

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fread(p,sizeof(*p),1,KP);


         do
         {
            fseek(KP,y,0);
            fread(p,sizeof(*p),1,KP);

            printf("\n\t\t\t>>> ALTERA QUANTIDADE DE PRODUTO <<<\n\n");

            printf("\n\n\t\tInsira a quantidade, se desejar retirar use (-) na frente do número: ");
            scanf("%d",&valores);

            p->qnt_atual += valores;

            if((*p).qnt_atual < 0)
            {
              printf("\n\n\t\tESTOQUE NEGATIVO!!!\n\n");

               system("pause");
               system("cls");
               system("color 1F");
            }
         }while((*p).qnt_atual < 0);

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fwrite(p,sizeof(*p),1,KP);

         fclose(KP);

         printf("\n\n\n\t\t");
      }
   }
}

void ALTERAR(struct dados *p, FILE *KP)
{
   int k, y;

   KP = fopen("despensa_domestica.txt","r+");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      k = PESQUISAR(p, KP);

      if(k == -1)
      {
         system("pause");
         printf("PROCESSO CANCELADO !\n\n");
      }
      else
      {

         printf("\t\t\t>>> ALTERA PRODUTO <<<\n\n");

         printf("\n\t\tInsira o nome do produto: ");
         gets(p->nome);

         printf("\n\n\t\tInsira a ID do produto: ");
         gets(p->id);

         printf("\n\n\t\tInsira a quantidade do produto: ");
         scanf("%d",&p->qnt_atual);


         KP = fopen("despensa_domestica.txt","r+");

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fwrite(p,sizeof(*p),1,KP);

         fclose(KP);

         printf("\n\n\t\t");
      }
   }
}

void EXCLUIR(struct dados *p, FILE *KP)
{
   int k, y;

   KP = fopen("despensa_domestica.txt","r+");

   if(KP == NULL)
   {
      system("cls");
      printf("Lista Vazia !\n\n");
   }
   else
   {
      k = PESQUISAR(p, KP);

      if(k == -1)
      {
         system("pause");
         printf("PROCESSO CANCELADO !\n\n");
      }
      else
      {

         p->nome[0] = '*';
         p->id[0] = '*';
         p->qnt_atual = 0;

         KP = fopen("despensa_domestica.txt","r+");

         y = sizeof(*p)*(k-1);

         fseek(KP,y,0);

         fwrite(p,sizeof(*p),1,KP);

         fclose(KP);

         printf("\n\t\t\t>>> PRODUTO EXCLUIDO <<<\n\n");

         printf("\n\n\t\t");
      }
   }
}

#endif

#ifdef ex04

/*
4 - A partir do exercico 6 do capitulo de funcoes, retire o vetor de estrutura e
escreva e leia os registros direto no arquivo. (utilize a funcao fseek).

*/

struct dados
{
    char nome[40];
    char end[40];
    char cidade[40];
    char estado[3];
    char cep[9];
};

void recepcao(struct dados *p, FILE *KP);
void exibicao(struct dados *p, FILE *KP);
int procurar(struct dados *p, FILE *KP);
void alterar(struct dados *p, FILE *KP);
void excluir(struct dados *p, FILE *KP);

main()
{

    setlocale(LC_ALL, "Portuguese");

    int op; //             nome, end, cidade, estado, cep
    static struct dados p;
    struct dados *p;

    p = &p;

    FILE *KP;
    setlocale(LC_ALL,"Portuguese");
    do
    {
        printf("\nEscolha uma opcao:\n1 - Inserir dados\n2 - Exibir dados \n3 - Procurar\n4 - Alterar\n5 - Excluir\n6 - Sair.\n-->");
        scanf("%d",&op);
        getchar();
        switch(op)
        {
        case 1:
            recepcao(p,KP);
            break;
        case 2:
            exibicao(p,KP);
            break;
        case 3:
            procurar(p,KP);
            break;
        case 4:
            alterar(p,KP);
            break;
        case 5:
            excluir(p,KP);
            break;
        case 6:
            printf("\nEncerrando...\n");
            break;
        }

        printf("\n");
        system("pause");
        system("cls");
    }
    while(op != 6);
}

void recepcao(struct dados *p, FILE *KP)
{
    KP = fopen("agenda.txt","a");

    puts("Digite seu nome: ");
    gets(p->nome);

    puts("Digite seu endereco: ");
    gets(p->end);

    puts("Digite sua cidade: ");
    gets(p->cidade);

    puts("Digite seu estado: ");
    gets(p->estado);

    puts("Digite seu cep: ");
    gets(p->cep);
    printf("\n");

    fwrite(p,sizeof(*p),1,KP);

    fclose(KP);

}

void exibicao(struct dados *p, FILE *KP)
{

    int i;

    KP = fopen("agenda.txt","r");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLista vazia!\n");
        printf("\t\t\t\t############\n\n");
    }

    else
    {
        system("cls");



        printf("\n\n\t\t\%c%c%c%c%c LISTAGEM p %c%c%c%c%c \n\n",4,4,4,4,4,4,4,4,4,4);



        printf("\n\t\t _________________________________________________________________________________");
        printf("\n\t\t|       NOME        |      ENDEREÇO       |    CIDADE     |  ESTADO  |    CEP     |");

        while(1)
        {
            i = fread(p,sizeof(*p),1,KP);

            if(i == 1)
            {
                if(p->nome[0] != '*')
                {


                    printf("\n            %18s %26s %14s %10s %10s", p->nome, p->end, p->cidade, p->estado, p->cep);

                }
            }
            else
            {
                break;
            }
        }

        fclose(KP);

        printf("\n\n\n\n\t\t");
    }
}

int procurar(struct dados *p, FILE *KP)
{
    int i, j, cont = 0;
    unsigned char pesq[25] = "\0";

    KP = fopen("agenda.txt","r");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLISTA VAZIA!\n");
        printf("\t\t\t\t############\n\n");
    }
    else
    {
        system("cls");

        printf("\n\n\t\t\t%c%c%c PESQUISAR NOME %c%c%c\n\n",4,4,4,4,4,4);

        printf("\n\t\tInsira o nome: ");
        gets(pesq);

        while(1)
        {
            i = fread(p,sizeof(*p),1,KP);

            if(i == 1)
            {
                if(p->nome[0] != '*')
                {
                    for (j = 0; p->nome[j] != '\0'; j++)
                    {
                        if (p->nome[j] != pesq[j])
                        {
                            break;
                        }
                    }
                }

                cont++;

                if (p->nome[j] == '\0' && pesq[j] == '\0')
                {

                    printf("\n\t\t _________________________________________________________________________________");
                    printf("\n\t\t|       NOME        |      ENDEREÇO       |    CIDADE     |  ESTADO  |    CEP     |");



                    printf("\n            %18s %26s %14s %10s %10s", p->nome, p->end, p->cidade, p->estado, p->cep);


                    fclose(KP);

                    return (cont);
                }
            }
            else
            {
                break;
            }
        }
        system("cls");
        system("color 02");
        printf("\n\n\n\t\t\t\tNOME NÃO ENCONTRADO!\n");
        fclose(KP);

        return (-1);
    }
}




void alterar(struct dados *p, FILE *KP)
{
    int k, y;

    KP = fopen("agenda.txt","r+");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLista vazia!\n");
        printf("\t\t\t\t############\n\n");
    }


    else
    {
        k = procurar(p, KP);

        if(k == -1)
        {
            printf("\t\t\t\tErro no processo!");
        }


        else
        {
            printf("\n\t\tALTERANDO DADOS: \n");

            puts("Digite seu nome: ");
            gets(p->nome);

            puts("Digite seu endereco: ");
            gets(p->end);

            puts("Digite sua cidade: ");
            gets(p->cidade);

            puts("Digite seu estado: ");
            gets(p->estado);

            puts("Digite seu cep: ");
            gets(p->cep);
            printf("\n");

            KP = fopen("agenda.txt","r+");

            y = sizeof(*p)*(k-1);

            fseek(KP,y,0);

            fwrite(p,sizeof(*p),1,KP);

            fclose(KP);

        }

        printf("\n\n\t\t");

    }
}




void excluir(struct dados *p, FILE *KP)
{
    int k, y;

    KP = fopen("agenda.txt","r+");

    if(KP == NULL)
    {
        system("cls");
        system("color F0");
        printf("\n\n\t\t\t\t############");
        printf("\n\t\t\t\tLista vazia!\n");
        printf("\t\t\t\t############\n\n");
    }
    else
    {
        k = procurar(p, KP);

        if(k == -1)
        {
            printf("\t\t\t\tErro no processo!");
        }
        else
        {
            p->nome[0] = '*';
            p->end[0] = '*';
            p->cidade[0] = '*';
            p->estado[0] = '*';
            p->cep[0] = '*';

            KP = fopen("agenda.txt","r+");

            y = sizeof(*p)*(k-1);

            fseek(KP,y,0);

            fwrite(p,sizeof(*p),1,KP);

            fclose(KP);

            printf("\n\t\t\t***** DADOS EXCLUÍDOS *****\n\n");

            printf("\n\n\t\t");
        }
    }
}



#endif





