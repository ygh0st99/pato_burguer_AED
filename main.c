#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <locale.h>
#include "pilha.h"
#include "cardapio.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    tp_hamburger cardapio[10];
    inicializacardapio(cardapio);
    imprimecardapio(cardapio);

    return 0;
}
