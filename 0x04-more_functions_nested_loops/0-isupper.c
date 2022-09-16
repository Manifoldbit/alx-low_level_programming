#include "main.h"

/** 
 * _isupper - checks if the character is uppercase
 * @c: the character to be determined if its upper or not
 * Return: 1 if uppercase or 0 if not
 */
int _isupper(int c)
{
	int alpha;

	int count;

	count = 0;

	for (alpha = 65; alpha <= 90; alpha++)
	{
		if (c == alpha)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		return (1);
}
