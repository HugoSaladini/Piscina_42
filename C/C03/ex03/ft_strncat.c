/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:10:28 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/16 14:36:17 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index_d;
	unsigned int	index_o;

	index_d = 0;
	index_o = 0;
	while (dest[index_d])
	{
		index_d++;
	}
	while (src[index_o] && index_o < nb)
	{
		dest[index_d] = src[index_o];
		index_d++;
		index_o++;
	}
	dest[index_d] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "Olá, ";
//     char src[] = "mundo!";
//     ft_strncat(dest, src, 3);
//     printf("%s\n", dest);
//     return 0;
// }