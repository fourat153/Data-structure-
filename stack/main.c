#include "stack_ds.h"
#include <stdio.h>
#include <stdlib.h>

stack_ds_t stack1; // t5th 7ajtin memory faha arry pointer
stack_ds_t stack2;
int main() {
  stack_init(&stack2);
  uint32_t stack_pop_value = ZERO;
  uint32_t top = ZERO;
  uint32_t size = 0;
  return_status_t ret = R_NOK; // erro return to chek
  ret = stack_init(&stack1);
  if (R_NOK == ret) {
    printf("stack faild to be intialized");
  } else {
    ret = stack_push(&stack1, 1);
    ret = stack_push(&stack1, 2);
    ret = stack_push(&stack1, 3);
    ret = stack_display(&stack1);
    ret = stack_size(&stack1, &size);

    printf("%i\n", size);
    ret = stack_pop(&stack1, &stack_pop_value);
    ret = stack_top(&stack1, &top);
    printf("%i\n", top);
    ret = stack_push(&stack1, 3);
    ret = stack_push(&stack1, 3);
    ret = stack_push(&stack1, 3);
    ret = stack_push(&stack1, 3);
    ret = stack_size(&stack1, &size);
    ret = stack_pop(&stack1, &stack_pop_value);
    ret = stack_pop(&stack1, &stack_pop_value);
    ret = stack_pop(&stack1, &stack_pop_value);
    ret = stack_pop(&stack1, &stack_pop_value);

    ret = stack_size(&stack1, &size);

    printf("%i", size);
  }
  ret = stack_init(&stack2);
  if (R_NOK == ret) {
    printf("stack faild to be intializes");
  } else {
  }

  return 0;
}