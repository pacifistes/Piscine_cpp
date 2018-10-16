/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:30:46 by bbrunell          #+#    #+#             */
/*   Updated: 2018/01/14 18:38:20 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

int main() {
	Game *game = new Game();

	if (game->init() == true) {
		game->play();
		delete game;
	}
	else
		std::cout << "Problem during the initialisation." << std::endl;
	return 0;
}
