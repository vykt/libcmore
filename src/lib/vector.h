#ifndef VECTOR_H
#define VECTOR_H

#include <unistd.h>

#include "libcmore.h"


#define VECTOR_DEFAULT_SIZE 8

#define VECTOR_ADD_INDEX 1
#define VECTOR_INDEX 0

#define VECTOR_SHIFT_UP 1
#define VECTOR_SHIFT_DOWN -1


int cm_vector_get_val(const cm_vector * vector, const int index, cm_byte * buf);
cm_byte * cm_vector_get_ref(const cm_vector * vector, const int index);

int cm_vector_set(cm_vector * vector, const int index, const cm_byte * data);
int cm_vector_insert(cm_vector * vector, const int index, const cm_byte * data);
int cm_vector_append(cm_vector * vector, const cm_byte * data);
int cm_vector_remove(cm_vector * vector, const int index);
void cm_vector_empty(cm_vector * vector);

int cm_new_vector(cm_vector * vector, const size_t data_size);
void cm_del_vector(cm_vector * vector);


#endif
