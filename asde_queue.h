#ifndef ASDE_QUEUE_H
#define ASDE_QUEUE_H

#include <stdbool.h>

#ifndef DATA_TYPE
#define DATA_TYPE
    typedef int data_type;
#endif

typedef struct queue_obj *Queue;

// returns an empty queue -> fonction creerFile (vide):file_int;
extern Queue asde_queue_create_empty();

// tests whether a queue is empty -> fonction emfiler (F:file_int, x int):file_int;
extern bool asde_queue_isempty(Queue S);

// gets top data of a queue -> fonction valeurFile (F:file_int): int;
extern data_type asde_queue_value(Queue S);

// pushes a data on a queue -> fonction enfiler (F:file_int, x int):file_int;  
extern Queue asde_queue_push(Queue S, data_type x);

// pops the data on the top of a queue -> fonction defiler (F:file_int):file_int;  
extern Queue asde_queue_pop(Queue S);

// -> fonction detruireFile (F:file_int):vide  
extern void asde_queue_free(Queue S);

#endif /* ASDE_QUEUE_H */

