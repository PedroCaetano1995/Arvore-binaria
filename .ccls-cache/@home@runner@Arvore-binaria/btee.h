#ifndef __BREE_H
#define __BREE_H

#include <stdlib.h>

typedef struct _no{
char info;
struct _no *esq, *dir, *pai;
  
}no;

no *criaNo(char info);
int insereDir (no *filho, no *pai);

int insereEsq(no *filho, no *pai);

void caminhaPreOrdem(no *raiz,void(*fn)(no*));
void caminhaEmOrdem(no *raiz,void(*fn)(no*));

void caminhaPosOrdem(no *raiz,void(*fn)(no*));

void caminhaEmLargura(no *raiz,void(*fn)(no*));

void removeNO( *no, no*raiz);



#endif // __BREE_H


