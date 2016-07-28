/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 12:39:54 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/24 16:45:03 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	t_list	*begin_list;
	int		i;
	char	*str;
	int		line;
	int		col;

	begin_list = NULL;
	read_to_list(&begin_list);
	i = ft_list_size(begin_list);
	str = ft_fill_tab(begin_list, i);
	line = check_line(str);
	col = check_col(str);
	print_results(check_result(col, line, str), line, col);
	return (0);
}
