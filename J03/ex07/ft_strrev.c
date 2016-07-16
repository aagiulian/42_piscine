/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:03:34 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/15 16:09:37 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int deb;
	int end;
	char swap;
	
	end = 0;
	deb = 0;
	while (str[end])
		end++;
	end -= 1;
	while (deb < end)
	{
		swap = str[deb];
		str[deb] = str[end];
		str[end] = swap;
		deb++;
		end--;
	}
	return (str);
}
