#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define TAM_MAX 100

struct stack {
	int itens[TAM_MAX];
	int tp;
};

Stack * criar() {
	Stack * p = (Stack *)malloc(sizeof(Stack));
	p->tp = 0;
	return p;
}

void destruir(Stack * p) {
	if (p != NULL) {
		free(p);
	}
}
