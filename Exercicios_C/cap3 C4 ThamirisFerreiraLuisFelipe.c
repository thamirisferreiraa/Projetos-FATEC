#include <stdio.h>
#define ex5
#ifdef ex1
verifica(int a, int b){
    int x;
  if(a>0){
    a=1;
  }
  else if(a<0){
    a=0;
  }
  else{
    a=-1;
  }
    if(b>0){
    b=1;
  }
  else if(b<0){
    b=0;
  }
  else{
    b=-1;
  }
  printf("os numeros respectivamente sao: %i %i \n",a ,b);


  if(a>0 && b>0){
    x = a+b;
    printf("O resultado da soma eh: %i \n", x);
  }
  else if(a<0 && b<0){
    x = a*b;
    printf("o resultado da multiplicacao: %i \n", x);
  }
else{
        x = a/b;
    printf("o resultado da divisao: %i \n", x);
}
  return;
}

main(){
    int a;
    int b;
printf("Digite o valor do primeiro numero: \n");
scanf("%i", &a);
printf("Digite o valor do segundo numero: \n");
scanf("%i", &b);

verifica(a, b);
}


#endif // ex1

#ifdef ex2
int n1;
int aux;
int numero;
int soma=0;
int somardigito(){
    numero = aux;
while (numero != 0){

    soma = soma + numero % 10;
    numero /= 10;
}

}
main(){
printf("Digite um numero: \n");
scanf("%i", &n1);



for(aux = 1; n1 > 1;n1--){
    aux = aux * n1;

}
somardigito();
printf("%i \n", aux);
printf("%i \n", soma);

}


#endif // ex2

#ifdef ex3
int n1, n2;

int adicao (int n1, int n2){
    int soma;
    soma = n1+n2;

return soma;

}

int sub (int n1, int n2){
    int menos;
    menos = n1-n2;

return menos;

}

int mult (int n1, int n2){
    int multipli;
    multipli = n1*n2;

return multipli;

}

int div (int n1, int n2){
    int divis;
    divis = n1/n2;

return divis;

}
main(){
    int resultado1, resultado2, resultado3, resultado4;
printf("Digite o primeiro numero: \n");
scanf("%i", &n1);
printf("Digite o segundo numero: \n");
scanf("%i", &n2);

resultado1 = adicao(n1, n2);
resultado2 = sub(n1, n2);
resultado3 = mult(n1,n2);
resultado4 = div(n1,n2);




printf("A soma e %i \n", resultado1);
printf("A subtracao e %i \n", resultado2);
printf("A multiplicacao e %i \n", resultado3);
printf("A divisao e %i \n", resultado4);



}

#endif // ex3

#ifdef ex4
int adicao(int atual, int novo) {
    return atual + novo;
}

// Função de subtração
int subtracao(int atual, int novo) {
    return atual - novo;
}

// Função de multiplicação
int multiplicacao(int atual, int novo) {
    return atual * novo;
}

// Função de divisão
float divisao(float atual, int novo) {
    if (novo != 0)
        return atual / novo;
    else {
        printf("Aviso: divisao por zero ignorada!\n");
        return atual;  // Retorna o valor atual sem alterar
    }
}

int main() {
    int numero, soma = 0, sub = 0, mult = 1;
    float div = 0.0;
    int contador = 0;

    printf("Digite numeros para calcular (digite 0 para sair):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        if (contador == 0) {
            // Primeira entrada, inicializa os valores
            soma = numero;
            sub = numero;
            mult = numero;
            div = numero;
        } else {
            // Atualiza os valores com as funções
            soma = adicao(soma, numero);
            sub = subtracao(sub, numero);
            mult = multiplicacao(mult, numero);
            div = divisao(div, numero);
        }

        contador++;

        printf("\n--- Resultados atuais com %d numero(s) ---\n", contador);
        printf("Soma: %d\n", soma);
        printf("Subtracao: %d\n", sub);
        printf("Multiplicacao: %d\n", mult);
        printf("Divisao: %.2f\n", div);
        printf("------------------------------------------\n\n");
    }

    return 0;
}


#endif // ex4

#ifdef ex5
int adicao(int atual, int novo){

 return atual + novo;

}

int subtracao(int atual, int novo){

 return atual - novo;

}

int multiplicacao(int atual, int novo){

 return atual * novo;

}

float divisao(float atual, int novo){

 return atual / novo;

}

int main(){
    int numero;
int resultado = 0;
int contador = 0;
int menu = 0;

printf("Digite o primeiro numero para calcular (0 para sair) \n");

while (1){

        do {
    printf("SOMA = 1, SUBTRACAO = 2, MULTIPLICACAO = 3, DIVISAO = 4 \n");
    printf("Digite um numero para escolher a operacao: \n");
    scanf("%i", &menu);
if (menu >4 || menu<1){
        printf ("Escolha invalida \n");
    }

} while (menu >4 || menu<1);

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero == 0){
        printf("Encerrando o programa... \n");
        break;

    }

 switch (menu){
    case 1:
    resultado = adicao(resultado, numero);
    printf("Soma: %d\n",resultado);
    break;

    case 2:
    resultado = subtracao(resultado, numero);
    printf("Subtracao: %d\n", resultado);
    break;

    case 3:
    resultado = multiplicacao(resultado, numero);
    printf("Multiplicacao: %d\n", resultado);
    break;

    case 4:
    resultado = divisao(resultado, numero);
    printf("Divisao: %d\n", resultado);
    break;
 }

if (contador == 0 ){
    resultado = numero;
}
contador++;
}


}


#endif // ex5

