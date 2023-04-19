#ifndef _STRUCT_OP_
#define _STRUCT_OP_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - struct
 * @op: operator
 * @f: function to call
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
