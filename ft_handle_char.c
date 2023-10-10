#include "ft_printf.h"

int	ft_handle_char(char c)
{
	int	len;

	len = 0;
	len = write(1, &c, 1);
	return (len);
}
