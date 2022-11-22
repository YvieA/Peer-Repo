#include "main.h"

/**
 * get_width - Calculates the printing width
 * @format: Formatted string in which to print the arguments.
 * @x: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *x, va_list list)
{
	int wid_i;
	int width = 0;

	for (wid_i = *x + 1; format[wid_i] != '\0'; wid_i++)
	{
		if (is_digit(format[wid_i]))
		{
			width *= 10;
			width += format[wid_i] - '0';
		}
		else if (format[wid_i] == '*')
		{
			wid_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*x = wid_i - 1;

	return (width);
}
