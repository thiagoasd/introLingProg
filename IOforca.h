#ifndef IOFORCA_H
#define IOFORCA_H

typedef struct palavra{
    int qntLetras;
    char palavra[20];
} palavra;

void salvaPalavra(palavra* plv);
int qntsPalavras();
palavra* lePalavraAleatoria();

#endif /* IOFORCA_H */