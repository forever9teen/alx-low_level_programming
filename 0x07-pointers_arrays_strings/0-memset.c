#include "main.h"
/**
 * * _memset - Fills the first n bytes of the memory area        
 * pointed to by @s with the constant byte @c.                
 * * @s: A pointer to the memory area to be filled.
 * * @c: The character to fill the memory area with.    
 * * @n: The number of bytes to be fill.       
 * * description _memset: over there.
 * * Return: A pointer to the filed memory area @s.                                                                                     
 *  **/
void *_memset(void *s, int c, size_t n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
