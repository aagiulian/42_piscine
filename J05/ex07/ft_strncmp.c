/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 22:49:52 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/12 12:32:03 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *a1, char *a2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n && (a1[i] || a2[i]))
	{
		if ((unsigned char)a1[i] != (unsigned char)a2[i])
			return ((unsigned char)a1[i] - (unsigned char)a2[i]);
		i++;
	}
	return (0);
}
