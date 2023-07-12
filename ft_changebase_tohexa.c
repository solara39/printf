#include "ft_printf.h"

static int	ft_count_digits(unsigned int n)
{
	int	cnt;

	cnt = 0;
	while (n > 0)
	{
		n /= 16;
		cnt++;
	}
	return (cnt);
}

char	*ft_changebase_tohexa(unsigned int n)
{
	char	*p;
	int	digits_cnt;
	int	j;

	digits_cnt = ft_count_digits(n);
	p = malloc(sizeof(char) * (digits_cnt + 1));
	if (p == NULL)
		return (NULL);
	j = digits_cnt - 1;
	while (n > 0)
	{
		if (n % 16 >= 10)
			p[j--] = n % 16 + 87;
		else
			p[j--] = n % 16 + '0';
		n /= 16;
	}
	p[digits_cnt - 1] = '\0';
	return (p);
}
