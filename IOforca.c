/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

#include "IOforca.h"


void salvaPalavra(palavra* plv){
    FILE * arquivo = fopen("biblioteca.bin", "a+b");
    fwrite(plv, sizeof(palavra), 0, arquivo);
    fclose(arquivo);
}