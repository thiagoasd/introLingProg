/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "IOforca.h"


void salvaPalavra(palavra* plv){
    FILE * arquivo = fopen("biblioteca.bin", "a+b");
    size_t res = fwrite(plv, sizeof(palavra), 1, arquivo);
    fclose(arquivo);
}

palavra* lePalavraAleatoria(palavra* plv){
    FILE * arquivo = fopen("biblioteca.bin", "rb");
    fread(plv, sizeof(palavra), 1, arquivo);
    fclose(arquivo);
    return plv;
}

int qntsPalavras(){
    FILE * arquivo = fopen("biblioteca.bin", "rb");
    palavra *plv;
    int qnt= 0;
    fread(plv, sizeof(palavra), 1, arquivo);
    while(!feof(arquivo)){
        qnt++;
        fread(plv, sizeof(palavra), 1, arquivo);
    }
    fclose(arquivo);
    return qnt;

}