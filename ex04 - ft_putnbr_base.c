#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	atoi(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	*tmp;
	int		nb;

	tmp = base;
	size = atoi(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar ('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nbr >= size)
	{
		ft_putnbr_base(nb / size, base);
		ft_putchar(base [nb % size]);
	}
	else
		ft_putchar(base [nb % size]);
}
/*int main()
{
    char base[] = "0123456789";
    int number = 42;

    ft_putnbr_base(number, base);
    ft_putchar('\n');

    return 0;
}*/
