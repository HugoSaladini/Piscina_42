/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:52:08 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:53:26 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_str_is_numeric("123"));
//     printf("%d\n", ft_str_is_numeric("i23a"));
//     printf("%d\n", ft_str_is_numeric(""));
//     printf("%d\n", ft_str_is_numeric("!!"));
// }