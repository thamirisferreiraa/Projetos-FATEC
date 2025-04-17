#include <stdio.h>

#define ex5

#ifdef ex1
int main() {
    int i[3];
    long l[3];
    unsigned u[3];
    float f[3];
    double d[3];

    printf("Digite 3 valores inteiros: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &i[j]);
    }

    printf("Digite 3 valores long: ");
    for (int j = 0; j < 3; j++) {
        scanf("%ld", &l[j]);
    }

    printf("Digite 3 valores unsigned: ");
    for (int j = 0; j < 3; j++) {
        scanf("%u", &u[j]);
    }

    printf("Digite 3 valores float: ");
    for (int j = 0; j < 3; j++) {
        scanf("%f", &f[j]);
    }

    printf("Digite 3 valores double: ");
    for (int j = 0; j < 3; j++) {
        scanf("%lf", &d[j]);
    }

    printf("\n          10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");

    for (int j = 0; j < 3; j++) {
        printf("%10d%20ld%20u\n", i[j], l[j], u[j]);
        printf("%20.2f%20.2lf\n", f[j], d[j]);
    }

    return 0;
}
#endif // ex1


#ifdef ex2  

int main(){
    int v[10];
    int v2[5];
    int v3[5];
    int cont2 = 0, cont3 = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v[i]);

        if(i  % 2 == 0){ //verificar se o indice e par
            v2[cont2] = v[i]; //se for par, coloca no vetor 2
            cont2++;

        }else{
            v3[cont3] = v[i]; //se for impar, coloca no vetor 3
            cont3++;
        }
    }

    printf("Vetor 2: ");
    for(int i = 0; i < 5; i++){
        printf(" %d |", v2[i]);
    }

    printf("\nVetor 3: ");
    for(int i = 0; i < 5; i++){
        printf(" %d |", v3[i]);
    }


}



#endif // ex2

#ifdef ex3

int main(){
    int v[10];
    int v2[5];
    int v3[5];
    int cont2 = 0, cont3 = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v[i]);

        if(i  % 2 == 0){ //verificar se o indice e par
            v2[cont2] = v[i]; //se for par, coloca no vetor 2
            cont2++;

        }else{
            v3[cont3] = v[i]; //se for impar, coloca no vetor 3
            cont3++;
        }
    }

    printf("Vetor 2: ");
    for(int i = 0; i < 5; i++){
        printf(" %d |", v2[i]);
    }

    printf("\nVetor 3: ");
    for(int i = 0; i < 5; i++){
        printf(" %d |", v3[i]);
    }


}


#endif // ex3


#ifdef ex4
int main() {
    int v1[2][3];
    int v2[2][3];
    int v3[2][3];

    printf("Vetor 1: \n");
    for(int i= 0; i < 2; i++){
        for(int j = 0; j<3; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &v1[i][j]);
        }
    }

    printf("Vetor 2: \n");
    for(int i= 0; i < 2; i++){
        for(int j = 0; j< 3; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &v2[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            v3[i][j] = v1[i][j] + v2[i][j]; //soma os valores dos vetores 1 e 2 e coloca no vetor 3
        }
    }

    printf("Vetor 1: \n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d |", v1[i][j]);
        }
        printf("\n");
    }

    printf("\n Vetor 2: \n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d |", v2[i][j]);
        }
        printf("\n");
    }

    printf("\n Resultdo da soma do Vetor 1 e Vetor 2 =\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d |", v3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#endif // ex4

#ifdef ex5

int main(){
    int num, v[10];
    int i, posicao, j;


    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
    

        posicao = i;

        while(posicao > 0 && v[posicao - 1] > num){
            v[posicao] = v[posicao - 1]; //desloca os elementos para a direita
            posicao--;
        }
    
        v[posicao] = num; //insere o numero na posicao correta
    }
    
    printf("Vetor ordenado: ");
    for(i = 0; i < 10; i++){
        printf(" %d |", v[i]);
    }
    printf("\n");

    return 0;   
}



#endif // ex5