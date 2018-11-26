/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <string.h>

typedef struct palavra{
    int qntLetras;
    char palavra[12];
} palavra;

void top5 (){
    palavra pal;
    strcpy(pal.palavra, "cachorro");
    pal.qntLetras = 8;
    
    FILE *ranking;
    ranking = fopen( "ranking.bin", "a+b" );
    int a = fwrite(&pal, sizeof(palavra), 1, ranking);
    fclose(ranking);
}