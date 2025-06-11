/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:17:31 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/10 11:53:16 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main()
// {
// 	char entrada [] = "Hugo Saladini";
// 	char saida [20];

// 	printf("Antiga String\n%s\n", entrada);
// 	ft_strcpy(saida, entrada);
// 	printf("Nova String \n%s", saida);
// }