#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int s1len, s2len, resultlen;


if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

s1len = strlen(s1);
s2len = strlen(s2);

if (n < s2len)
{
resultlen = s1len + n;
}
else
{
resultlen = s1len + s2len;
}

result = (char *) malloc((resultlen + 1) * sizeof(char));
if (!result)
{
return (NULL);
}

strncpy(result, s1, s1len);
strncat(result, s2, n);

result[resultlen] = '\0';

return (result);
}
