/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mukaplan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:57:33 by mukaplan          #+#    #+#             */
/*   Updated: 2024/11/11 21:57:33 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] & i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
