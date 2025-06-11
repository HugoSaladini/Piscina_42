/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:01:18 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:54:11 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
			i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "convErt";
// 	printf("string convertida:%s", ft_strupcase(str));
// 	return(0);
// }