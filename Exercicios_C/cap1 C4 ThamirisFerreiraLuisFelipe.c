#include <stdio.h>
#include <stdlib.h>
#define ex5

#ifdef ex1
int main()
{
    int valor1, valor2;
    printf("Digite dois números: \n");
    scanf("%d %d", &valor1, &valor2);
    valor2 = valor1 + valor2;
    valor1 = valor2 - valor1;
    valor2 = valor2 - valor1;
    printf("A: %d \nB: %d", valor1, valor2);
}
#endif //ex1

#ifdef ex2
int main () {
    short int entradaShort;
    long int entradaLong;
    int entradaInt;
    float entradaFloat;
    double entradaDouble;
    char entradaChar;

    printf("Digite um valor long:\n");
    scanf("%hd", &entradaShort);
    printf("Digite um valor short:\n");
    scanf("%ld", &entradaLong);
    printf("Digite um valor int:\n");
    scanf("%d", &entradaInt);
    printf("Digite um valor float:\n");
    scanf("%f", &entradaFloat);
    printf("Digite um valor double:\n");
    scanf("%lf", &entradaDouble);
    getchar();
    printf("Digite um caracter:\n");
    scanf(" %c", &entradaChar);

    /*  printf("        10        20        30        40        50        60     ");
    printf("12345678901234567890123456789012345678901234567890123456789012345");
    printf("    short               long                int                  ");
    printf("              float               double              char       ")*/

    printf("    %-6hd               %-11ld                %-11d              \n", entradaShort, entradaLong, entradaInt);
    printf("              %-8g               %-9g              %-4c          \n", entradaFloat, entradaDouble, entradaChar);

}
#endif // ex2

#ifdef ex3
int main() {
    int valorMultiplo, limiteMinimo, i, resultado, valorFinal;
    printf("Digite o múltiplo: \n");
    scanf("%d", &valorMultiplo);
    printf("Digite o limite mínimo: \n");
    scanf("%d", &limiteMinimo);

    for (i = 1; i <= valorMultiplo; i++) {
        resultado = (limiteMinimo + i) % valorMultiplo;
        if (resultado == 0) {
            valorFinal = limiteMinimo + i;
            break;
        }
    }
    printf("O menor múltiplo de %d maior que %d é %d\n", valorMultiplo, limiteMinimo, valorFinal);
}
#endif // ex3

#ifdef ex4
int main() {
    int segundosTotais, horasCalculadas, minutosCalculados, segundosRestantes, auxiliar;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundosRestantes);

    horasCalculadas = segundosRestantes / 3600;
    auxiliar = segundosRestantes % 3600;
    minutosCalculados = auxiliar / 60;
    segundosTotais = auxiliar % 60;

    printf("%dh %dmin %ds\n", horasCalculadas, minutosCalculados, segundosTotais);

}
#endif // ex4

#ifdef ex5
int main() {
    int numeroEntrada, numeroInvertido;
    do {
        printf("Digite um número:\n");
        scanf("%d", &numeroEntrada);
        if (numeroEntrada < 0 || numeroEntrada < 100) {
            printf("Digite um número positivo de três dígitos!\n");
        }
    } while (numeroEntrada < 0 || numeroEntrada < 100);
    numeroInvertido = ((numeroEntrada % 10) * 100) + (((numeroEntrada / 10) % 10) * 10) + (((numeroEntrada / 10) / 10) % 10);
    printf("NumeroLido = %d\nNumeroGerado = %d\n", numeroEntrada, numeroInvertido);
    return 0;
}
#endif // ex5
