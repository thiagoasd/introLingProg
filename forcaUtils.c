/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stddef.h>
#include <string.h>

int qntsLetrasPossui(char* palavra , char letra){
    int qnt = 0;
    palavra = strchr(palavra, letra);

    while ( palavra != NULL ) {
        qnt++;
        palavra++;
        palavra = strchr(palavra, letra);
    }

    return qnt;
}