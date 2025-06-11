/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:25:48 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:53:29 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_str_is_lowercase("abc"));
// 	printf("%d\n", ft_str_is_lowercase("ABc"));
// 	printf("%d\n", ft_str_is_lowercase("123"));
// 	printf("%d\n", ft_str_is_lowercase("Ab1"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// }