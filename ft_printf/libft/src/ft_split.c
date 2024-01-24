/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:30:14 by edegraev          #+#    #+#             */
/*   Updated: 2023/11/14 13:30:31 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nwords(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			n++;
		i++;
	}
	return (n);
}

static int	split_words(char **str, char const *s, char c, int word)
{
	int		start;
	int		end;

	start = 0;
	end = 0;
	while (s[end])
	{
		if (s[end] == c || s[end] == 0)
			start = end + 1;
		if (s[end] != c && (s[end + 1] == c || s[end + 1] == 0))
		{
			str[word] = malloc(sizeof(char) * (end - start + 2));
			if (!str[word])
			{
				while (word++)
					free(str[word]);
				return (0);
			}
			ft_strlcpy(str[word], (s + start), end - start + 2);
			word++;
		}
		end++;
	}
	str[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (nwords(s, c) + 1));
	if (!str)
		return (NULL);
	if (split_words(str, s, c, 0) == 0)
		return (NULL);
	return (str);
}

// int	main(void)
// {
// 	char	*str = "---Hello-Wolrd-How--";
// 	char	charset = '-';
// 	char	**out;
// 	int		i;
// 	int		j;

// 	out = ft_split(str, charset);

// 	// print all words
// 	i = 0;
// 	while (out[i])
// 	{
// 		j = 0;
// 		while (out[i][j])
// 		{
// 			write(1, &out[i][j], 1);
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// 	return (0);
// }
