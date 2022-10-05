#include "main.h"

/**
 * create_array - create an array of chars, and
 * initializes it with a specific char.
 * @size : size of the array
 * @c : character to insert
 * *_strdup : bass
 * _str : life
 * Return: NULL if size is zero or if it fails,
 * pointer to array if everything is normal.
 */                                               

char *_strdup(char *str)
{

char *cpy;
int index, len;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;
cpy = malloc(sizeof(char) * (len + 1));

if (cpy == NULL)
return (NULL);

for (index = 0; str[index]; index++)
{
	cpy[index] = str[index];
}

cpy[len] = '\0';

return (cpy);
}
