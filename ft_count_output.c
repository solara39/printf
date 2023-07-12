#include "ft_printf.h"

int	ft_count_output(char *p)
{
	int	cnt;

	cnt = 0;
	if (!p)
		return (0);
	cnt = ft_strlen(p);
	ft_putstr_fd(p, 1);
	return (cnt);
}
