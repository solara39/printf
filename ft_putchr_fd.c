#include "ft_printf.h"

void	ft_putchr_fd(char c, int fd)
{
	write(fd, &c, 1);
}
