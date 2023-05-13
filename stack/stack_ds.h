#ifndef _STACK_DS_
#define _STACK_DS_
#include "std_types.h"
#include <stdio.h>
#include <stdlib.h>
#define STACK_DEBUG
#define STACK_MAX_SIZE 3
typedef struct stack_ds {
  uint32_t data[STACK_MAX_SIZE];
  uint32_t stack_pointer;

} stack_ds_t;
typedef enum {
  STACK_EMPTY,
  STACK_NOT_FULL,
  STACK_FULL,
} stack_status_t;

return_status_t stack_init(stack_ds_t *my_stack);
return_status_t stack_pop(stack_ds_t *my_stack, uint32_t *value);
return_status_t stack_top(stack_ds_t *my_stack, uint32_t *value);
return_status_t stack_size(stack_ds_t *my_stack, uint32_t *size_stack);
return_status_t stack_display(stack_ds_t *my_stack);

#endif