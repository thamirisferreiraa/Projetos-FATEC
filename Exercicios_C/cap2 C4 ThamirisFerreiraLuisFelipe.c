#include <stdio.h>
#define ex3

#ifdef ex1
int main() {
    int min = 1;
    int max = 99;
    int tentativa;
    char resposta;

    printf("Pense em um numero entre 1 e 99 e eu tentarei adivinhar.\n");
    printf("Responda com '>' se seu numero for maior,\n");
    printf("com '<' se for menor e '=' se eu acertar.\n\n");

    while (min <= max) {
        tentativa = (min + max) / 2;
        printf("O seu numero e %d? (>, <, =): ", tentativa);
        scanf(" %c", &resposta);

        if (resposta == '=') {
            printf("Acertei! O n�mero � %d.\n", tentativa);
            break;
        } else if (resposta == '>') {
            min = tentativa + 1;
        } else if (resposta == '<') {
            max = tentativa - 1;
        } else {
            printf("Resposta invalida. Use apenas >, < ou =.\n");
        }
    }

    if (min > max) {
        printf("houve um erro nas respostas.\n");
    }

    return 0;
}


#endif // ex1


#ifdef ex2

int main() {
    int min = 1;
    int max = 99;
    int tentativa;
    char resposta;
    int tentativas = 0;

     printf("Pense em um numero entre 1 e 99 e eu tentarei adivinhar.\n");
    printf("Responda com '>' se seu numero for maior,\n");
    printf("com '<' se for menor e '=' se eu acertar.\n\n");

    while (min <= max) {
        tentativa = (min + max) / 2;
        tentativas++;

        printf("O seu numero eh %d? (>, <, =): ", tentativa);
        scanf(" %c", &resposta);

        switch (resposta) {
            case '=':
                printf("O n�mero eh %d.\n", tentativa);
                printf("Numero de tentativas: %d\n", tentativas);
                return 0;

            case '>':
                min = tentativa + 1;
                break;

            case '<':
                max = tentativa - 1;
                break;

            default:
                printf("Resposta invalida.\n");
                tentativas--;
                break;
        }
    }

    printf("tente novamente.\n");

    return 0;
}


#endif // ex2


#ifdef ex3
int main(){
    int numero = 0;
    int contador = 0;
    int numeros = 0;
    double media = 0.0;
    do{
    printf("Digite um numero positivo ou negativo \n");
    scanf("%i", &numero);
    if (numero >0){

        numeros = numeros+numero;
        contador++;

    }
    else{
        media = numeros /contador;
        printf("A media dos numeros e: %f", media);
    }

    } while (media == 0);

}



#endif // ex3

#ifdef ex4
main(){
int h1, m1, s1;
int h2, m2, s2;
int total1, total2, diff;
int horas, minutos, segundos;
printf("Digite o horario de inicio (horas minutos segundos): ");
scanf("%d %d %d", &h1, &m1, &s1);

printf("Digite o horario de termino (horas minutos segundos): ");
scanf("%d %d %d", &h2, &m2, &s2);

total1 = h1 * 3600 + m1 * 60 + s1;
total2 = h2 * 3600 + m2 * 60 + s2;

diff = total2 - total1;

if (diff < 0){
    printf("Horas invalidas \n");
    return 1;

}

horas = diff / 3600;
diff = diff % 3600;
minutos = diff /60;
segundos = diff %60;

 printf("Duracao da ligacao: %02d:%02d:%02d\n", horas, minutos, segundos);
}

#endif // ex4

#ifdef ex5
main(){
float litros;
float km;
float total;
do{
    printf("Digite a quantidade de litros consumidos \n");
    scanf("%f", &litros);
    if (litros<0){
        printf("Numero Invalido \n");
    }
} while (litros<0);

do{
    printf("Digite a quantidade de km percorridos \n");
    scanf("%f", &km);
    if (km<0){
        printf("Numero Invalido \n");
    }
} while (km<0);

total = km/litros;

if(total<8){
    printf ("Resultado: %f \n", total);
    printf("Venda o Carro ! \n");
}
else if(total<8){
    printf ("Resultado: %f \n", total);
    printf("Venda o Carro ! \n");
}
else if(total<15){
    printf ("Resultado: %f \n", total);
    printf("Economico ! \n");
}
else{
    printf ("Resultado: %f \n", total);
    printf("Super Economico ! \n");

}




}

#endif // ex5
