#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "IOforca.h"
#include "forcaUtils.h"
void creditos();
void jogar();
void printaPalavra();
void printaStatus();
char* addLetra(char* letras, char letra);
int checaVitoria(char* palavra, char* letras);

int main(int argc, char** argv) {

    int n = 1;
    while (n != 0) {
        printf("***** Menu *****\n"
                "1 - JOGAR\n"
                "2 - RANKING\n"
                "3 - CADASTRAR PALAVRAS\n"
                "4 - CRÉDITOS\n"
                "5 - SAIR\n"
                "Digite de 1 a 5: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Jogar\n");
                jogar();
                break;
            case 2:
                printf("RANKING\n");
                break;
            case 3:
                //cadastrarPalavra();
                break;
            case 4:
                creditos();
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida.\n");
        }

    }


    return EXIT_SUCCESS;
}

void creditos() {
    printf("JOGO DA FORCA\n");
    printf("CRIADOR: THIAGO TEIXEIRA DE OLIVEIRA\n");
    printf("MATRICULA: 1820023597\n");
    printf("DISCIPLINA DE INTRODUÇÃO À LÍNGUAGEM DE PROGRAMAÇÃO\n");
}

void jogar() {
    int vida = 5;
    char* letras = "";
    char* palavra = "cachorro";
    char letra = 'x';
    while (1) {
        printaPalavra(palavra, letras);
        printaStatus(vida);
        fflush(stdin);
        scanf(" %c", &letra);
        int aux = qntsLetrasPossui(palavra, letra);
        if (aux > 0) {
            printf("Acertou!\n");
            letras = addLetra(letras, letra);
            if(checaVitoria(palavra, letras) == 1){
                printf("Ganhou!");
                break;
            }
        } else {
            printf("Errou\n");
            vida--;
        }
        if (vida <= 0) {
            printf("Acabou\n");
            break;
        }
    }
}

void printaPalavra(char *palavra, char* letrasDescobertas) {
    for (int i = 0; palavra[i]; i++) {
        int aux = 0;
        for (int j = 0; letrasDescobertas[j]; j++) {
            if (palavra[i] == letrasDescobertas[j]) {
                aux = 1;
                break;
            }
        }
        if (aux == 0) {
            printf("-");
        } else {
            printf("%c", palavra[i]);
        }
    }
    printf("\n");
}

void printaStatus(int vida) {
    printf("Você tem %d chance(s) sobrando!\n", vida);
}

char* addLetra(char* letras, char letra) {
    if (NULL == strchr(letras, letra)) {
        int tam = strlen(letras);
        char* resultado = (char*) malloc(tam + 1);
        strcpy(resultado, letras);
        resultado[tam] = letra;
        return resultado;
    } else {
        return letras;
    }
}

int checaVitoria(char* palavra, char* letras) {
    int aux = 0;
    for (int i = 0; palavra[i]; i++) {
        aux = 0;
        for (int j = 0; letras[j]; j++) {
            if (palavra[i] == letras[j]) {
                aux = 1;
            }
        }
        if(aux == 0){
            break;
        }
    }

    return aux;
}