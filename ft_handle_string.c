#include "ft_printf.h"

int	ft_handle_string(char *str)
{
    int n;

    if (str == NULL)
        str = "(null)";
    n = ft_strlen(str);
    ft_putstr_fd(str, 1);
    return (n);
}
