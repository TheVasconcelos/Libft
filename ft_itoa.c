#include "libft.h"

static int	numlen(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = (long)n;
	len = numlen(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/* 
int main()
{
	printf("\n ft_itoa:\n");
// 
	printf("\t%s\n", ft_itoa(-67856));
	printf("\t%s\n", ft_itoa(-2147483648));
	printf("\t%s\n", ft_itoa(2147483647));
	printf("\t%s\n", ft_itoa(10000));
	printf("\t%s\n", ft_itoa(0));	
} */