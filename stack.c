#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define TAM_MAX 100

struct stack {
	int itens[TAM_MAX];
	int tp;
};
