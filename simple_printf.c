#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - simple printf function
 * @format:  parameter specifying the text to be added in the string
 * Return: the number of bytes printed to stdout
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	va_start(arguments, format);

	int count = 0;
	
	while(*format)
	{
		if (*format == "%")
		{
			format++;
			switch(*format)
			{
				case ('c'):
					char arg_char = va_arg(arguments, int);
					write(1, &arg_char, 1);
					count++;
					break;
				case ('s'):
					char *arg_str = va_arg(arguments, char*);
					while (*arg_str)
					{
						write(1, arg_str, 1);
						arg_str++;
						count++;
					}
					break;
				case ('%'):
					write(1, '%', 1);
					count++;
					break;

				default:
					write(1, '%', 1);
					write(1, format, 1);
					count += 2;
			}
		} else
		{
			write(1, format, 1);
			count++
		}
		format++;
	}	
	va_end(arguments);

	return (count);
}
