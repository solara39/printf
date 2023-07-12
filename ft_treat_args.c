#include "ft_printf.h"
#include <stdio.h>

int	ft_treat_args(const char *format, va_list args)
{
	size_t  i;
	size_t  cnt;

	i = 0;
	cnt = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			cnt += ft_treat_specifier(format[i], args);
		}
		else
		{
			ft_putchr_fd(format[i], 1);
			cnt++;
		}
		i++;
		if (!format[i])
			return (cnt);
	}
	return (cnt);
}
