#include <unistd.h>

/**
 * putchar -writes the character c to stdout
 * @c: The characterr to print
 *
 * Return: On Success 1.
 * On error, -1 is returned and errno is seet appropriately
 */
 int _putchar(char c)
 {
	 return (write(1, &c, 1));
 }
