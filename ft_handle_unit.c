#include "ft_printf.h"

int	ft_putnbr_count(unsigned long long n)
{
	int			cnt;
	unsigned long long	d;
	char			ch;

	cnt = 0;
	d = 1;
	while (n / d != 0)
	{
		d *= 10;
		cnt++;
	}
	d /= 10;
	while (d > 0)
	{
		ch = n / d + '0';
		write(1, &ch, 1);
		n %= 10;
		d /= 10;
	}
	return (cnt);
}

int	ft_handle_unit(unsigned long long n)
{
	int	cnt;

	cnt = 0;
	cnt = ft_putnbr_count(n);
	return (cnt);
}
