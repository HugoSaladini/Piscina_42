/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:40:06 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/16 14:55:27 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	if (n == 0)
		return (0);
	index = 0;
	while ((s1[index] || s2[index]) && index < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

//#include <stdio.h>

// int main() {
//     char str1[] = "abcrt";
//     char str2[] = "abcrs p";

//     int resultado = ft_strncmp(str1, str2, 5);
//     printf("Resultado: %d\n", resultado);
//     return 0;
// }