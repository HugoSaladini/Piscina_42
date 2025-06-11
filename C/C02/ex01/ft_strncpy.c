/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:13:10 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 18:18:19 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main()
{

	char	entrada[] = {"coca cola"};
	int	n = 6;
	char saida[n];
	printf ("entrada: \n%s\n", entrada);

	ft_strncpy (saida, entrada, n);

	printf("Saida:\n%s\n", saida);
}