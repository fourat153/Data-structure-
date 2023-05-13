#include "stack_ds.h"
/**
 * @brief intialize the stack pointer
 * @param my_stack  pointer to the stack
 * @retval Status the intialization procecces
 */
return_status_t stack_init(stack_ds_t *my_stack) {
  return_status_t ret = R_NOK;
  if (NULL == my_stack) {
    ret = R_NOK;
  } else {
    my_stack->stack_pointer = -1;
    ret = R_OK;
  }
  return ret;
}
/**
 * @brief check stack is full
 *
 * @param my_stack
 * @Retval status of the stack
 */
static stack_status_t stack_full(stack_ds_t *my_stack) {

  if (my_stack->stack_pointer == STACK_MAX_SIZE - 1) {
    return STACK_FULL;
  } else {
    return STACK_NOT_FULL;
  }
}
/**
 * @brief check stack is empty
 *
 * @param my_stack
 * @retval status of the stack
 */
static stack_status_t stack_empty(stack_ds_t *my_stack) {
  if (my_stack->stack_pointer == -1) {
    return STACK_EMPTY;
  } else {
    return STACK_NOT_FULL;
  }
}
/**
 * @brief
 *
 * @param my_stack
 * @param value
 * @return return_status_t
 */
return_status_t stack_push(stack_ds_t *my_stack, uint32_t value) {
  return_status_t ret = R_NOK;
  if ((my_stack == NULL) || (STACK_FULL == stack_full(my_stack))) {
#ifdef STACK_DEBUG
    printf("value %i can't push to the stack\n", value);
#endif
    ret = R_NOK;
  } else {
    my_stack->stack_pointer++;
    my_stack->data[my_stack->stack_pointer] = value;
#ifdef STACK_DEBUG
    printf("value %i push to the stack\n", value);
#endif
    ret = R_OK;
  }
  return ret;
}
/**
 * @brief
 * @param my_stack
 * @param value
 * @return return_status_t
 */
return_status_t stack_pop(stack_ds_t *my_stack, uint32_t *value) {
  return_status_t ret = R_NOK;
  if ((my_stack == NULL) || (value == NULL) ||
      (STACK_EMPTY == stack_empty(my_stack))) {
#ifdef STACK_DEBUG
    printf("cant pop");
#endif
    ret = R_NOK;
  } else {
    *value = my_stack->data[my_stack->stack_pointer];
    my_stack->stack_pointer--;
    ret = R_OK;
  }
  return ret;
}
/**
 * @brief
 *
 * @param my_stack
 * @param value
 * @return return_status_t
 */
return_status_t stack_top(stack_ds_t *my_stack, uint32_t *value) {
  return_status_t ret = R_NOK;
  if ((NULL == my_stack) || (NULL == value)) {
    ret = R_NOK;
  } else if ((STACK_EMPTY == stack_empty(my_stack))) {

    printf("stack is empty");
    ret = R_NOK;
  } else {
    *value = my_stack->data[my_stack->stack_pointer];
    ret = R_OK;
  }
  return ret;
}
/**
 * @brief
 *
 * @param my_stack
 * @param size_stack
 * @return return_status_t
 */
return_status_t stack_size(stack_ds_t *my_stack, uint32_t *size_stack) {
  return_status_t ret = R_NOK;
  if ((my_stack == NULL) || (size_stack == NULL)) {
    ret = R_NOK;
  } else if (STACK_EMPTY == stack_empty(my_stack)) {
    *size_stack = ZERO;
    ret = R_OK;
  } else {
    *size_stack = my_stack->stack_pointer + 1;
    ret = R_OK;
  }
  return ret;
}
/**
 * @brief
 *
 * @param my_stack
 * @return return_status_t
 */
return_status_t stack_display(stack_ds_t *my_stack) {
  return_status_t ret = R_NOK;
  sint32_t l_counter = ZERO_INIT;
  if ((my_stack == NULL) || (stack_empty(my_stack) == STACK_EMPTY)) {
    printf("erro");
    ret = R_NOK;
  } else {
    for (l_counter = my_stack->stack_pointer; l_counter >= 0; l_counter--) {
      printf("%i\t", my_stack->data[l_counter]);
      ret = R_NOK;

    }
    printf("\n");
    return ret;
  }
}
