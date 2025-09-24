#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "asde_queue.h"
#include "asde_stack.h"

bool	balance(Queue F) {
	Stack	p;

	p = asde_stack_create_empty();
	while (!asde_queue_isempty(F)) {
		if (asde_queue_value(F) == '(')
			asde_stack_push(p, '(');
		else if (asde_queue_value(F) == ')') {
			if (asde_stack_isempty(p))
				return (false);
            asde_stack_pop(p);
		}
		asde_queue_pop(F);
	}
	return (asde_stack_isempty(p));
}

bool	palin(Queue F, Stack P) {
	while (!asde_queue_isempty(F)) {
		if (asde_stack_isempty(P))
			return (false);
		if (asde_queue_value(F) != asde_stack_value(P))
			return (false);
		asde_queue_pop(F);
		asde_stack_pop(P);
	}
	return (asde_stack_isempty(P));
}

int		main(int argc, char **argv) {
	Queue	f;
	Stack	p;

	f = asde_queue_create_empty();
	p = asde_stack_create_empty();
	for (int i = 1; i < argc; i++) {
		asde_queue_push(f, argv[i][0]);
		asde_stack_push(p, argv[i][0]);
	}
	printf("%d\n", palin(f, p));
}
