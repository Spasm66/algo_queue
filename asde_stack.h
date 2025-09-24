#ifndef ASDE_STACK_H
#define ASDE_STACK_H

#include <stdbool.h>

#ifndef DATA_TYPE
#define DATA_TYPE
    typedef int data_type;
#endif

typedef struct stack_obj *Stack;

// returns an empty stack -> fonction creerPile (vide):pile_int;
extern Stack asde_stack_create_empty();

// tests whether a stack is empty -> fonction empiler (P:pile_int, x int):pile_int;
extern bool asde_stack_isempty(Stack S);

// gets top data of a stack -> fonction valeurPile (P:pile_int): int;
extern data_type asde_stack_value(Stack S);

// pushes a data on a stack -> fonction empiler (P:pile_int, x int):pile_int;  
extern Stack asde_stack_push(Stack S, data_type x);

// pops the data on the top of a stack -> fonction depiler (P:pile_int):pile_int;  
extern Stack asde_stack_pop(Stack S);

// -> fonction detruirePile (P:pile_int):vide  
extern void asde_stack_free(Stack S);

#endif /* ASDE_STACK_H */

