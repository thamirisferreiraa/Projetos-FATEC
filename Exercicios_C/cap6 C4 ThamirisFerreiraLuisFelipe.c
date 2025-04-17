#define ex1
#include <stdio.h>
#include <locale.h>

#ifdef ex1
void CalcularData(int dia, int mes, int ano) {
    if (mes < 3) {
        mes += 12;
        ano--;
    }

    int auxano = ano % 100;
    int seculo = ano / 100;
    int Data = (dia + (13 * (mes + 1)) / 5 + auxano + (auxano / 4) + (seculo / 4) - (2 * seculo)) % 7;

    char *calendario[] = {"Sabado", "Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira"};

    if (Data < 0) {
        Data += 7;
    }

    printf("A data %02d/%02d/%04d e um(a) %s.\n", dia, mes, ano, calendario[Data]);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o ms: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (dia <= 0 || mes <= 0 || mes > 12 || ano <= 0) {
        printf("Data invalida, digite novamente.\n");
    } else {
        CalcularData(dia, mes, ano);
    }

    return 0;
}
#endif // ex1

#ifdef ex2
int Bissexto(int ano) {
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

void CalcularIdade(int diaNasc, int mesNasc, int anoNasc, int diaAtual, int mesAtual, int anoAtual) {
    int anos, meses, dias;

    anos = anoAtual - anoNasc;

    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        anos--;
    }

    meses = mesAtual - mesNasc;
    if (meses < 0) {
        meses += 12;

    dias = diaAtual - diaNasc;
    if (dias < 0) {
        dias += 30;
        meses--;
        if (meses <- 0) {
            meses += 12;
            anos--;
        }
    }
    printf("Tempo de vida total:\n");
    printf("%d anos, %d meses e %d dias.\n", anos, meses, dias);
}
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int diaNasc, mesNasc, anoNasc;
    int diaAtual, mesAtual, anoAtual;

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &diaNasc);
    printf("Digite o mês do seu nascimento: ");
    scanf("%d", &mesNasc);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNasc);

    printf("Digite o dia atual: ");
    scanf("%d", &diaAtual);
    printf("Digite o mês atual: ");
    scanf("%d", &mesAtual);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    CalcularIdade(diaNasc, mesNasc, anoNasc, diaAtual, mesAtual, anoAtual);

    return 0;
    }
#endif // ex2

#ifdef ex3
int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    printf("Digite dois números para escreve-los em formatos diferentes, convertendo seus resultados em decimal e hexadecimal.\n");
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    printf("\nResultados das operações bit a bit:\n");

    printf("AND: %d (Hexadecimal: 0x%X)\n", n1 & n2, n1 & n2);
    printf("OU: %d (Hexadecimal: 0x%X)\n", n1 | n2, n1 | n2);
    printf("OU EXCLUSIVO: %d (Hexadecimal: 0x%X)\n", n1 ^ n2, n1 ^ n2);
}
#endif // ex3

#ifdef ex4

main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite dois números inteiros para realizar as 4 operações aritméticas neles.\n");
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    printf("\nResultados:\n");
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("Divisão: %d / %d = %.2f\n", n1, n2, (float)n1 / n2);
    }

#endif // ex4

#ifdef ex5
int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, resultado;

    printf("Digite dois números inteiros para realizar as operações aritméticas e bit a bit neles.\n");
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    printf("\nResultados:\n");

    resultado = n1; resultado += n2; printf("Soma: %d\n", resultado);
    resultado = n1; resultado -= n2; printf("Subtração: %d\n", resultado);
    resultado = n1; resultado *= n2; printf("Multiplicação: %d\n", resultado);

    if (n2 != 0) {
        float divisao = n1;
        divisao /= n2;
        printf("Divisão: %.2f\n", divisao);
        resultado = n1; resultado %= n2; printf("Sobra: %d\n", resultado);
    } else {
        printf("Erro: Não se pode dividir por Zero.\n");
        printf("Não é possivel calcular a Sobra com Zero...\n");
    }

    resultado = n1; resultado &= n2; printf("AND bit a bit: %d\n", resultado);
    resultado = n1; resultado |= n2; printf("OR bit a bit: %d\n", resultado);
    resultado = n1; resultado ^= n2; printf("XOR bit a bit: %d\n", resultado);
    resultado = n1; resultado <<= 1; printf("Deslocamento à esquerda (N1): %d\n", resultado);
    resultado = n1; resultado >>= 1; printf("Deslocamento à direita (N1): %d\n", resultado);
    resultado = n2; resultado <<= 1; printf("Deslocamento à esquerda (N2): %d\n", resultado);
    resultado = n2; resultado >>= 1; printf("Deslocamento à direita (N2): %d\n", resultado);
}

#endif // ex5
