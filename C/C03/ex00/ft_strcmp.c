/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:41:59 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/16 14:43:24 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

// #include <stdio.h>

// int main() {
//     char str1[] = "abc";
//     char str2[] = "abe";
// 	char str3[] = "abc";

//     int resultado = ft_strcmp(str1, str2);
//     printf("Strings diferetnes: %d\n", resultado);
// 	int resultado1 = ft_strcmp(str1, str3);
// 	printf("Strings iguais: %d\n", resultado1);
//     return 0;
// }