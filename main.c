#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void creditos();
void jogar();

struct palavra{
    int qntLetras;
    char *palavra;
};


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
                //Ranking();
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


void creditos(){
    printf("JOGO DA FORCA\n");
    printf("CRIADOR: THIAGO TEIXEIRA DE OLIVEIRA\n");
    printf("MATRICULA: 1820023597\n");
    printf("DISCIPLINA DE INTRODUÇÃO À LÍNGUAGEM DE PROGRAMAÇÃO\n");
}

void jogar(){

    struct palavra word;
    word.palavra = "palavra";
    word.qntLetras = strlen(word.palavra);
    printf(word.palavra);
    printf("%d", word.qntLetras);
    
    int i;
    for (i = 0; i < word.qntLetras; i++) {
        printf("_%c_", word.palavra[i]);
    }
    
    char s1[] = "m";
    scanf(" %c", &s1);

    char* p;
    p = strstr(word.palavra, s1);
        printf("OK");
    
    
}