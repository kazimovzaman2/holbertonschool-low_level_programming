#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;
	char *op;

	if (argc != 4)
		printf("Error\n");
		exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (strcmp(op, "'*'") == 0)
		op = "*";
	else if (strcmp(op, "'%'") == 0)
		op = "%";

	switch (*op)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			result = get_op_func(op)(num1, num2);
			printf("%d\n", result);
			break;
		default:
			printf("Error\n");
	}

	return (0);
}
