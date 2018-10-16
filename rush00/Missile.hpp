/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:31:00 by bbrunell          #+#    #+#             */
/*   Updated: 2018/01/13 12:31:39 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_CLASS_H
# define MISSILE_CLASS_H

#include "AGameEntity.hpp"

class Missile : public AGameEntity {

	public :
		Missile(void);
		~Missile(void);
		Missile(Missile const &missile);
		Missile & operator=(Missile const &missile);

		char	getClassCharacter() const;
		unsigned int		getPositionX() const;
		unsigned int		getPositionY() const;
		void				setPositionX(unsigned int x);
		void				setPositionY(unsigned int y);
};
#endif
