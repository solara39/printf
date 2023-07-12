#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
    va_list	args;
    int		cnt;

    cnt = 0;
    if (!format)
        return (0);
    va_start(args, format);
    cnt = ft_treat_args(format, args);
    va_end(args);
    return (cnt);
}
