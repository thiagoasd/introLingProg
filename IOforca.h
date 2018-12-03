#ifndef IOFORCA_H
#define IOFORCA_H

typedef struct palavra{
    int qntLetras;
    char *palavra;
} palavra;

void salvaPalavra(palavra* plv);

#endif /* IOFORCA_H */