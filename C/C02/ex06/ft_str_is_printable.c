/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:35:26 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:53:37 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_str_is_printable("Abc "));
// 	printf("%d\n", ft_str_is_printable(" Texto com nova linha:\n "));
// 	printf("%d\n", ft_str_is_printable("Texto com tabulação:\t"));
// 	printf("%d\n", ft_str_is_printable("abcd_1234"));
// 	printf("%d\n", ft_str_is_printable(""));
// }