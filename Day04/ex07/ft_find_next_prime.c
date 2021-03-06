int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
		if (nb % i++ == 0)
			return (0);
	return ((nb == 0 || nb == 1) ? 0 : 1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 1 || !ft_is_prime(nb))
		nb++;
	return (nb);
}
