/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:30:49 by bbrunell          #+#    #+#             */
/*   Updated: 2018/01/14 19:14:47 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_H
# define MAP_CLASS_H

# include <curses.h>
# include <cstring>
# include "AGameEntity.hpp"


class Map {

	public :
		Map(unsigned int nbrLine, unsigned int nbrColumn);
		~Map(void);
		Map(Map const &map);
		Map & operator=(Map const &map);

		unsigned int	getMaxY() const;
		unsigned int	getMaxX() const;
		unsigned int*	getBG() const;
		AGameEntity***	getMap() const;
		void			initBackground();
	private :
		Map(void);
		unsigned int	_maxLine;
		unsigned int	_maxColumn;
		AGameEntity***	_tab;
		unsigned int*	_bg;
};
#endif
