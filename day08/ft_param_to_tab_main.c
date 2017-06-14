	while (bonjour < ac)
	{
		printf("%d\n", param_struct[bonjour].size_param);
		printf("%s\n", param_struct[bonjour].str);
		printf("%s\n", param_struct[bonjour].copy);
		printf("%s\n", param_struct[bonjour].tab[1]);
		bonjour++;
	}
	return (param_struct);
}

int		main(int ac, char **av)
{
	ft_param_to_tab(ac, av);
	return (0);
}
