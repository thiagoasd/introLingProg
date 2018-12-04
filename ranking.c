/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "IOforca.h"

void top5 (){
    int tam = strlen("Meudeus");
    palavra pal;
    pal.palavra = (char*) malloc(tam * sizeof(char));
    pal.palavra = "Meudeussssss";
    pal.qntLetras = strlen(pal.palavra);
    printf("%s", pal.palavra);
    char *sub = strstr(pal.palavra, "e");
    int uau = pal.palavra - sub;
    printf("%d", pal.qntLetras);
    
}

