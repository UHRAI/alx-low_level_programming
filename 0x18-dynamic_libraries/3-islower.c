#include "main.h"

/**
* _islower - checks for lowercase character
* @c: the character
* Return: 1 for lowercase character or 0 if not
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
