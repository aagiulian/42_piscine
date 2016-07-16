/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 18:13:35 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/15 14:12:39 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (tofind[len])
		len++;
	if (len == 0)
		return (str);
	while (str[j])
	{
		while (tofind[i] == str[j + i])
		{
			if (i == len - 1)
				return (str + j);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
