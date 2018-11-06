/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:40:24 by mkopiika          #+#    #+#             */
/*   Updated: 2018/10/26 18:06:45 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
