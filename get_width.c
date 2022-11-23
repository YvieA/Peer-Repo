#include "main.h"

/**
<<<<<<< HEAD
 * get_width - Calculates the printing width
 * @format: Formatted string in which to print the arguments.
 * @x: List of arguments to be printed.
=======
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
>>>>>>> 70a051a6f9d057741974c85da5729aeb33d32c5e
 * @list: list of arguments.
 *
 * Return: width.
 */
<<<<<<< HEAD
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
=======
int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
>>>>>>> 70a051a6f9d057741974c85da5729aeb33d32c5e
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

<<<<<<< HEAD
	*x = wid_i - 1;
=======
	*i = curr_i - 1;
>>>>>>> 70a051a6f9d057741974c85da5729aeb33d32c5e

	return (width);
}
