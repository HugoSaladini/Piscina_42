/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:23:50 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:53:23 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_str_is_alpha("teste"));
// 	printf("%d\n", ft_str_is_alpha("tes1e"));
// 	printf("%d\n", ft_str_is_alpha(""));
// 	printf("%d\n", ft_str_is_alpha("teste!"));
// 	return (0);
// }