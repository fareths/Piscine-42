/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlevieux <mlevieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 15:45:12 by mlevieux          #+#    #+#             */
/*   Updated: 2015/08/16 15:57:19 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		arg_values(char **argv)
{
	int i;
	int j;

	j = 0;
	i = -1;
	while (++j < 10)
	{
		while (++i < 9)
			if ((argv[j][i] <= '1' && argv[j][i] >= '9') && argv[j][i] != '.')
				return (1);
	}
	return (0);
}
