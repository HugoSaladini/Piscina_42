/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:20:44 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:53:32 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_str_is_uppercase("ABC"));
// 	printf("%d\n", ft_str_is_uppercase("ABc"));
// 	printf("%d\n", ft_str_is_uppercase("123"));
// 	printf("%d\n", ft_str_is_uppercase("Ab1"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// }