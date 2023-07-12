#include "ft_printf.h"

int	ft_handle_integer(int i)
{
    char    *str;
    int     cnt;

    str = ft_itoa(i);
    cnt = ft_count_output(str);
    free(str);
    return (cnt);
}
