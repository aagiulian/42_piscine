/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 17:27:29 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 21:50:17 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_grep_bis(char *str, char *ctab, int *index)
{
	ctab[0] = str[index[0] - 3];
	ctab[1] = str[index[0] - 2];
	ctab[2] = str[index[0] - 1];
	ctab[3] = index[1] + '0';
	while (index[2] < index[1])
	{
		ctab[4 + index[2]] = str[index[2]];
		index[2]++;
	}
	ctab[4 + index[2]] = '\0';
	if ((ctab[0] < 33 || ctab[1] < 33 || ctab[2] < 33) || (!(ctab[0] \
					!= ctab[1] && ctab[0] != ctab[2] && ctab[1] != ctab[2])))
		return (NULL);
	return (ctab);
}

char	*ft_grep_char(char *str, char *ctab)
{
	int		index[3];

	index[0] = 0;
	index[1] = 0;
	index[2] = 0;
	while (str[index[0]] != '\n' && str[index[0]])
		index[0]++;
	if ((index[0] - 4) < 0)
	{
		ft_putstre("map error\n");
		return (NULL);
	}
	while (index[1] < (index[0] - 3))
		index[1]++;
	ctab = ft_malloc(ctab, (index[0] + 1));
	if (ft_grep_bis(str, ctab, index) == NULL)
	{
		ft_putstre("map error\n");
		return (NULL);
	}
	return (ctab);
}

int		line_compare(char *ctab, int *pos)
{
	int result;
	int i;

	result = 0;
	i = 4;
	while (ctab[i])
	{
		result = (result * 10) + (ctab[i] - '0');
		i++;
	}
	if (result != pos[0] || result == 0)
		return (0);
	return (1);
}

int		check_col(char *str, int *pos)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	pos[1] = i;
	while (str[j])
	{
		if (k > i)
			return (0);
		if (str[j] == '\n' && k < i)
			return (0);
		if (str[j] == '\n')
			k = -1;
		j++;
		k++;
	}
	return (1);
}

int		*checkcollin(char *str, char *ctab, int *pos, int count)
{
	int index[3];

	count = 0;
	index[0] = 0;
	index[1] = 1;
	pos[0] = 0;
	index[2] = 0;
	while (str[index[0]])
	{
		if (str[index[0]] == '\n')
		{
			pos[0]++;
			count++;
		}
		if (str[index[0]] == ctab[2] || (str[index[0]] != ctab[0] && \
					str[index[0]] != ctab[1] && str[index[0]] != '\n'))
			return (NULL);
		if (str[index[0]] == ctab[0] || str[index[0]] == ctab[1])
			index[2]++;
		index[0]++;
	}
	if (!(line_compare(ctab, pos)) || (!(check_col(str, pos))) || (count \
				== (index[0] - 1) || index[2] == 0))
		return (NULL);
	return (pos);
}
