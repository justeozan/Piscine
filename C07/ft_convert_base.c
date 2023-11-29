#include <stdlib.h>

int	ft_strlen_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		j = 0;
		while (str[j])
		{
			if (str[i] == str[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_recursive_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_pow(nb, power - 1));
}

int	ft_atoi_base(char *nbr, char *base, int lb, int i)
{
	int	res;
	int	j;

	res = 0;
	while (nbr[i])
	{
		j = 0;
		while (nbr[i] != base[j])
			j++;
		res += j * ft_recursive_pow(lb, i);
		i++;
	}
	return (res);
}

char  *ft_create_base(int nbr, int lb, char *str)
{
  int i;
  int l;
  int sign;
  int n;

  l = 0;
  sign = 1;
  if (nbr < 0)
  {
    nbr = -nbr;
    l++;
    sign = -1;
  }
  n = nbr;
  while (n != 0)
  {
    n = n / lb;
    l++;
  }
  str = (char *)malloc(sizeof(char) * l);
  if (!(str))
    return (0);
  return (str);
}

char	*ft_putnbr_base(int nbr, char *base, int lb, char *str)
{
	int	l;
	int	n;
	int	i;
	int	sign;

	i = 0;
	if (nbr < 0)
  {
    str[i] = '-';
    nbr = -nbr;
    i++;
  }
	while (nbr / lb != 0)
	{
		nbr = nbr / lb;
		str[i] = nbr % lb;
		i++;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		nb;
	int		sign;
	char	*res;

	i = 0;
	if (ft_strlen_check(base_from) <= 1 || ft_strlen_check(base_to) <= 1)
		return (NULL);
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sign = 1;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}
	nb = ft_atoi_base(nbr, base_from, ft_strlen_check(base_from), i);
	res = ft_putnbr_base(nb * sign, base_to, ft_strlen_check(base_to), res);
	return (res);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s", ft_convert_base(av[1], av[2], av[3]));
	}
	return (0);
}