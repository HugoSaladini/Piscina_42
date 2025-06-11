/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:47:49 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/03 13:03:34 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	char letra[] = "k  lk  l";
// 	int tamanho = ft_strlen(letra);

// 	printf("Tamanho: %d\n", tamanho);
// }
