/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:26:02 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/12 10:47:09 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index_d;
	int	index_p;

	index_d = 0;
	index_p = 0;
	while (dest[index_d])
		index_d++;
	while (src[index_p])
	{
		dest[index_d] = src[index_p];
		index_d++;
		index_p++;
	}
	dest[index_d] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main() {
//     char str1[20] = "Hello, ";
//     char str2[] = "World!";

//     ft_strcat(str1, str2);

//     printf("%s\n", str1);  // Saída: Hello, World!
//     return 0;
// }