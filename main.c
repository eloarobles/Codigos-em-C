#include <stdio.h>
#include <string.h>


struct Livro {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
};

int main() {

    struct Livro livro1;


    strcpy(livro1.titulo, "Aventuras de Sherlock Holmes");
    strcpy(livro1.autor, "Sir Arthur Conan Doyle");
    livro1.anoPublicacao = 1892;


    printf("Livro: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano de Publicacao: %d\n", livro1.anoPublicacao);

    return 0;
}
