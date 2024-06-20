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

int desempilhar(Stack * p) {
	if (p->tp == 0) {
		printf("Stack vazia");
		return -1;
	}
	return p->itens[--p->tp];
}

void empilhar(Stack * p, int x) {
	if (p->tp == TAM_MAX) {
		printf("Estouro de Stack!");
		return;
	}
	p->itens[p->tp++] = x;
}

int tamanho(Stack * p) {
	return p->tp;
}

int topo(Stack * p) {
	if (p->tp == 0) {
		//printf("Stack vazia");
		return -1;
	}
	return p->itens[p->tp-1];
}

void imprimir(Stack * p) {
	int i;
	printf("[ ");
	for(i=0; i<p->tp; i++) {
		printf("%d ", p->itens[i]);
	}
	printf("]\n");
}

void inverter3(Stack * p) {
	int i, f, tmp;
	for (i = 0, f = p->tp-1; i < f; i++, f--) {
		tmp = p->itens[i];
		p->itens[i] = p->itens[f];
		p->itens[f] = tmp;
	}
}
