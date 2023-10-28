#include "main.h"

/**
 * rot13 - check the code
 *
 * @bush - 'var'
 *
 * Return: Always 0.
 */
char *rot13(char *bush)
{
int i;

while (bush[i] != '\0')
{
for (; (bush[i] >= 65 && bush[i] <= 90) || (bush[i] >= 97 && bush[i] <= 122);)
{
if ((bush[i] >= 65 && bush[i] <= 77) || (bush[i] >= 97 && bush[i] <= 109))
{
	bush[i] = bush[i] + 26;
}
bush[i] = bush[i] - 13;
break;
}
i++;
}

return(bush);
}
