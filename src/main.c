/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppepperm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:52:33 by ppepperm          #+#    #+#             */
/*   Updated: 2020/08/04 12:52:35 by ppepperm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rt.h"

int main(void)
{
	t_sdl_sequence sq;

	init_sdl_sequence(&sq);
	while (!(SDL_PollEvent(&(sq.event)) && sq.event.type == SDL_QUIT));
	end_sdl(sq);
}