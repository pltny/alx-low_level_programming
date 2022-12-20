#include "main.h"

/**
 * _strcpy -copies the string pointed to by src
 * @dest: Destination value
 * @src: source code
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
int j;
for (j = 0; src[j] != '\0'; j++)
{
dest[j] = src[j];
}
dest[j++] = '\0';
return (dest);
}
