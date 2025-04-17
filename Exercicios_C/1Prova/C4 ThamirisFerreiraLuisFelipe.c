#include <stdio.h>
#include <stdlib.h>


// 3 vetores unidimensionais nome_musica[20]
char nome_musica1[20];
char nome_musica2[20];
char nome_musica3[20];

// 3 vetores unidimensionais nome_autor[20]
char nome_autor1[20];
char nome_autor2[20];
char nome_autor3[20];
char pesquisa[20];

FILE *arquivo;

// Funcao para entrada de dados
void entrada_dados() {

    arquivo = fopen("lista.txt", "w");

    printf("Digite o nome da musica 1: ");
    gets(nome_musica1);
    fwrite(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    printf("Digite o nome do autor 1: ");
    gets(nome_autor1);
    fwrite(nome_autor1, sizeof(nome_autor1), 1, arquivo);

    printf("Digite o nome da musica 2: ");
    gets(nome_musica2);
    fwrite(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    printf("Digite o nome do autor 2: ");
    gets(nome_autor2);
    fwrite(nome_autor2, sizeof(nome_autor2), 1, arquivo);


    printf("Digite o nome da musica 3: ");
    gets(nome_musica3);
    fwrite(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    printf("Digite o nome do autor 3: ");
    gets(nome_autor3);
    fwrite(nome_autor3, sizeof(nome_autor3), 1, arquivo);

    fclose(arquivo);
}

// Funcao para listar todos os dados
void lista_dados() {
    printf("\nLista de musicas e autores:\n");
    arquivo = fopen("lista.txt", "r");

    fread(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    fread(nome_autor1, sizeof(nome_autor1), 1, arquivo);
    fread(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    fread(nome_autor2, sizeof(nome_autor2), 1, arquivo);
    fread(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    fread(nome_autor3, sizeof(nome_autor3), 1, arquivo);


    if(nome_musica1[0] != '*'){
       printf("Musica 1: %s, Autor: %s\n", nome_musica1, nome_autor1);
    }


    if(nome_musica2[0] != '*'){
        printf("Musica 2: %s, Autor: %s\n", nome_musica2, nome_autor2);
    }

    if(nome_musica3[0] != '*'){
       printf("Musica 3: %s, Autor: %s\n", nome_musica3, nome_autor3);
    }

    fclose(arquivo);
}

// Funcao para pesquisar musica pelo nome completo
void pesquisa_nome_musica() {
    int encontrado = 0;
    int i = 0;

    printf("Digite o nome completo da musica para pesquisar: ");
    gets(pesquisa);
    printf("%s\n", pesquisa);
    arquivo = fopen("lista.txt", "r");
    fread(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    fread(nome_autor1, sizeof(nome_autor1), 1, arquivo);
    fread(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    fread(nome_autor2, sizeof(nome_autor2), 1, arquivo);
    fread(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    fread(nome_autor3, sizeof(nome_autor3), 1, arquivo);
fclose(arquivo);

    // verfirica musica 1

for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica1[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica1[i] == '\0' && pesquisa[i] == '\0'){
        printf("Musica encontrada: %s - Autor: %s\n", nome_musica1, nome_autor1);
        encontrado = 1;
    }


    //verifica musica 2

     for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica2[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica2[i] == '\0' && pesquisa[i] == '\0'){
        printf("Musica encontrada: %s - Autor: %s\n", nome_musica2, nome_autor2);
        encontrado = 1;
    }

    //verifica musica3

       for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica3[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica3[i] == '\0' && pesquisa[i] == '\0'){
        printf("Musica encontrada: %s - Autor: %s\n", nome_musica3, nome_autor3);
        encontrado = 1;
    }

    if (encontrado == 0) {
            printf("Musica nao encontrada.\n");
        }

}

// Funcao para pesquisar autor pela primeira letra
void pesquisa_nome_autor() {
    char letra;
    int encontrado = 0;

    printf("Digite a primeira letra do nome do autor: ");
    scanf("%c", &letra);
    getchar(); // limpar o \n do buffer


    printf("Autores encontrados com a letra '%c':\n", letra);

    if (nome_autor1[0] == letra) {
        printf("Autor: %s - Musica: %s\n", nome_autor1, nome_musica1);
        encontrado = 1;
    }
    if (nome_autor2[0] == letra) {
        printf("Autor: %s - Musica: %s\n", nome_autor2, nome_musica2);
        encontrado = 1;
    }
    if (nome_autor3[0] == letra) {
        printf("Autor: %s - Musica: %s\n", nome_autor3, nome_musica3);
        encontrado = 1;
    }

    if (!encontrado) {
        printf("Nenhum autor encontrado com essa letra.\n");
    }
}



// Funcao para alterar dados de uma musica
void altera_dados() {
    int encontrado = 0;
    int i;

    arquivo = fopen("lista.txt", "r");

    fread(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    fread(nome_autor1, sizeof(nome_autor1), 1, arquivo);
    fread(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    fread(nome_autor2, sizeof(nome_autor2), 1, arquivo);
    fread(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    fread(nome_autor3, sizeof(nome_autor3), 1, arquivo);
  fclose(arquivo);

    printf("Digite o nome completo da musica a ser alterada: ");
    gets(pesquisa);

    //pesquisa musica 1
    for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica1[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica1[i] == '\0' && pesquisa[i] == '\0'){
        printf("Novo nome da musica: ");
        gets(nome_musica1);



        printf("Novo nome do autor: ");
        gets(nome_autor1);
        encontrado = 1;
    }

    //pesquisa musica 2
    for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica2[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica2[i] == '\0' && pesquisa[i] == '\0'){
        printf("Novo nome da musica: ");
        gets(nome_musica2);


        printf("Novo nome do autor: ");
        gets(nome_autor2);
        encontrado = 1;
    }


    //pesquisa musica 3
    for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica3[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica3[i] == '\0' && pesquisa[i] == '\0'){
        printf("Novo nome da musica: ");
        gets(nome_musica3);


        printf("Novo nome do autor: ");
        gets(nome_autor3);
        encontrado = 1;
    }

    if (encontrado) {
        printf("Dados alterados com sucesso.\n");
    } else {
        printf("Musica nao encontrada.\n");
    }


   arquivo = fopen("lista.txt", "w");

    fwrite(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    fwrite(nome_autor1, sizeof(nome_autor1), 1, arquivo);
    fwrite(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    fwrite(nome_autor2, sizeof(nome_autor2), 1, arquivo);
    fwrite(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    fwrite(nome_autor3, sizeof(nome_autor3), 1, arquivo);

    fclose(arquivo);
}

// Funcao para excluir dados de uma musica
void exclui_dados() {
    int encontrado = 0;
    int i;

    printf("Digite o nome completo da musica a ser excluida: ");
    gets(pesquisa);

    arquivo = fopen("lista.txt", "r");

    fread(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    fread(nome_autor1, sizeof(nome_autor1), 1, arquivo);
    fread(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    fread(nome_autor2, sizeof(nome_autor2), 1, arquivo);
    fread(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    fread(nome_autor3, sizeof(nome_autor3), 1, arquivo);
    fclose(arquivo);

    //pesquisa musica 1
    for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica1[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica1[i] == '\0' && pesquisa[i] == '\0'){
        nome_musica1[0] = '*';
        encontrado = 1;
    }

     //pesquisa musica 2
    for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica2[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica2[i] == '\0' && pesquisa[i] == '\0'){
        nome_musica2[0] = '*';
        encontrado = 1;
    }

     //pesquisa musica 3
    for(i=0; pesquisa[i] != '\0'; i++){
        if(nome_musica3[i] != pesquisa[i]){
            break;
        }
    }

    if(nome_musica3[i] == '\0' && pesquisa[i] == '\0'){
        nome_musica3[0] = '*';
        encontrado = 1;
    }


    arquivo = fopen("lista.txt", "w");

    fwrite(nome_musica1, sizeof(nome_musica1), 1, arquivo);
    fwrite(nome_autor1, sizeof(nome_autor1), 1, arquivo);
    fwrite(nome_musica2, sizeof(nome_musica2), 1, arquivo);
    fwrite(nome_autor2, sizeof(nome_autor2), 1, arquivo);
    fwrite(nome_musica3, sizeof(nome_musica3), 1, arquivo);
    fwrite(nome_autor3, sizeof(nome_autor3), 1, arquivo);


    if (encontrado) {
        printf("Dados excluidos com sucesso.\n");
    } else {
        printf("Musica nao encontrada.\n");
    }

    fclose(arquivo);
}

// Funcao principal
int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Entrada de dados\n");
        printf("2 - Listar todos os dados\n");
        printf("3 - Pesquisar musica pelo nome completo\n");
        printf("4 - Pesquisar autor pela primeira letra\n");
        printf("5 - Alterar dados\n");
        printf("6 - Excluir dados\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                entrada_dados();
                break;
            case 2:
                lista_dados();
                break;
            case 3:
                pesquisa_nome_musica();
                break;
            case 4:
                pesquisa_nome_autor();
                break;
            case 5:
                altera_dados();
                break;
            case 6:
                exclui_dados();
                break;
            case 7:
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opcao invalida!\n");
        }
    } while (1);

    return 0;
}
