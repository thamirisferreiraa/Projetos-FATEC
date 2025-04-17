#define ex5
#include "stdio.h"

#ifdef ex1
/*
1 - Escreva um programa para receber 5 nomes, com at  7 caracteres, via teclado
     e imprima-os no video no seguinte formato:(Declare os 5 vetores como variaveis
     globais)

              10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3

*/

char nome1[8];
char nome2[8];
char nome3[8];
char nome4[8];
char nome5[8];

main()
{
     char jogarNovamente;
     do
     {

          printf("Digite o primeiro nome: \n");
          scanf("%s", &nome1);

          printf("Digite o segundo nome: \n");
          scanf("%s", &nome2);

          printf("Digite o terceiro nome: \n");
          scanf("%s", &nome3);

          printf("Digite o quarto nome: \n");
          scanf("%s", &nome4);

          printf("Digite o quinto nome: \n");
          scanf("%s", &nome5);

          printf("  %-8s                                %-8s \n", nome1, nome5);
          printf("            %-8s            %-8s\n", nome2, nome4);
          printf("                      %-8s ", nome3);

          do
          {
               printf("\n\nnDeseja jogar novamente? (S/N)\n");
               scanf(" %c", &jogarNovamente);

               if (jogarNovamente != 'S' && jogarNovamente != 's' && jogarNovamente != 'N' && jogarNovamente != 'n')
               {
                    printf("Resposta invalida, tente novamente.\n");
               }
          } while (jogarNovamente != 'S' && jogarNovamente != 's' && jogarNovamente != 'N' && jogarNovamente != 'n');

     } while (jogarNovamente == 'S' || jogarNovamente == 's');

     printf("Fim do programa!\n");
}
#endif

#ifdef ex2
/*
2 - Escreva um programa que receba uma string (40) na funcao main(). Faca uma funcao que
     calcula o comprimento de uma string recebida via teclado. Mostre o valor do
     comprimento na funcao main().
     (Declare o vetor como variavel global) (nao pode usar funcao de biblioteca)

*/
char palavra[40];

int comprimentoString()
{
     int i = 0;
     while (palavra[i] != '\0')
     {
          i++;
     }
     return i;
}

main()
{
     char jogarNovamente;

     do
     {
          int tamanho = 0;

          printf("Digite uma string (máximo 40 caracteres):\n");
          scanf("%s", &palavra);

          tamanho = comprimentoString();

          printf("O comprimento da string é: %d\n", tamanho);

          do
          {
               printf("Deseja jogar novamente? (S/N)\n");
               scanf(" %c", &jogarNovamente);
          } while (jogarNovamente != 'S' && jogarNovamente != 's' && jogarNovamente != 'N' && jogarNovamente != 'n');

     } while (jogarNovamente == 'S' || jogarNovamente == 's');

     printf("Fim do programa!\n");
}

#endif


#ifdef ex3
/*

3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
     para letras maiusculas. (nao pode usar funcao de biblioteca)

*/

char nome[10];

void maiscula( char nome[]) {
     for (int i = 0; nome[i] != '\0'; i++) {
          if (nome[i] >= 'a' && nome[i] <= 'z') {
               nome[i] = nome[i] - 32;
          }
     }
}


main()
{
     char jogarNovamente;

     do
     {
          printf("Digite o nome:\n");
          scanf("%s", nome);

          maiscula(nome);

          printf("Nome em maiscula = %s \n", nome);

          do
          {
               printf("Deseja jogar novamente? (S/N)\n");
               scanf(" %c", &jogarNovamente);
          } while (jogarNovamente != 'S' && jogarNovamente != 's' && jogarNovamente != 'N' && jogarNovamente != 'n');

     } while (jogarNovamente == 'S' || jogarNovamente == 's');

     printf("Fim do programa!\n");
}

#endif


#ifdef ex4
/*
     4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
          para letras minusculas. (nao pode usar funcao de biblioteca)
*/

char nome[10];

void minuscula( char nome[]) {
     for (int i = 0; nome[i] != '\0'; i++) {
          if (nome[i] >= 'A' && nome[i] <= 'Z') {
               nome[i] = nome[i] + 32;
          }
     }
}


main()
{
     char jogarNovamente;

     do
     {
          printf("Digite o nome:\n");
          scanf("%9s", nome);

          minuscula(nome);

          printf("Nome em minuscula = %s \n", nome);

          do
          {
               printf("Deseja jogar novamente? (S/N)\n");
               scanf(" %c", &jogarNovamente);
          } while (jogarNovamente != 'S' && jogarNovamente != 's' && jogarNovamente != 'N' && jogarNovamente != 'n');

     } while (jogarNovamente == 'S' || jogarNovamente == 's');

     printf("Fim do programa!\n");
}

#endif


#ifdef ex5
/*
     5 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Fa a uma
          funcao para compara-las e retorne como resultado se s o IGUAIS 1 ou se
          DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().
          (Declare os vetores como variavel global) (nao pode usar funcao de biblioteca)
*/

char string1[10];
char string2[10];

char compararStrings() {
    int i;
     for (i = 0; string1[i] != '\0'; i++) {
          if (string1[i] != string2[i]) {
               return 0;
          }
     }
     if(string1[i] == '\0' && string2[i] == '\0') {
        return 1;
     }
     else {
        return 0;
     }
}

int main()
{
     char jogarNovamente;

     do
     {
          int resultado;

          printf("Digite a primeira string: \n");
          scanf("%9s", string1);

          printf("Digite a segundo string: \n");
          scanf("%9s", string2);

          resultado = compararStrings();

          if (resultado == 1) {
               printf("As strings sao IGUAIS.\n");
          }

          else {
               printf("As strings sao DIFERENTES.\n");
          }

          do
          {
               printf("Deseja jogar novamente? (S/N)\n");
               scanf(" %c", &jogarNovamente);
          } while (jogarNovamente != 'S' && jogarNovamente != 's' && jogarNovamente != 'N' && jogarNovamente != 'n');

     } while (jogarNovamente == 'S' || jogarNovamente == 's');

     printf("Fim do programa!\n");
}

#endif




