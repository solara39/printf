#include "ft_printf.h"

int	ft_handle_hexa(unsigned int i, int flag)
{
	char	*p;
	int	cnt;

	cnt = 0;
	if (i == 0)
		cnt += write(1, "0", 1);
	else
	{
		p = ft_changebase_tohexa(i);
		if (p == NULL)
			return (0);
		if (flag == 1)
			ft_tolower_str(p);
		else
			ft_toupper_str(p);
		cnt = ft_count_output(p);
		free(p);
	}
	return (cnt);
}
