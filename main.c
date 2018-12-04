#include <stdio.h>
#include <stdlib.h>

#include "IOforca.h"
#include "forcaUtils.h"
void creditos();
void jogar();

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
                char * palavra = "cachorro";
                char * letra = "d";
                qntsLetrasPossui(palavra, letra);
                
                //top5();
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
    int vida = 5;
    char* letras = malloc( 0 * sizeof(char));

    while (1){
        char * word = "cachorro";       
        char letra = 'a';
        scanf(" %c", &letra);
        int aux = qntsLetrasPossui(word, &letra);
        if (aux > 0){
            printf("Acertou");
            letras = realloc(letras, sizeof(char) + 1);
            letras[0] = letra;
        } else {        
            printf("errou");
            vida--;
        }      
        if(vida <= 0){
            printf("Acabou");
            break;
        }
    }   
}