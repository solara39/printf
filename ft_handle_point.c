# include "ft_printf.h"

int	ft_handle_point(unsigned long long point)
{
	char	*p;
	int	cnt;

	p = ft_changebase_tohexa(point);
	cnt = ft_count_output("0x");
	cnt += ft_count_output(p);
	free(p);
	return (cnt);
}
