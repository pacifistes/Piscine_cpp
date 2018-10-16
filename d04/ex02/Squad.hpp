#ifndef SQUAD_CLASS_H
# define SQUAD_CLASS_H

#include "ISquad.hpp"

class Squad : public ISquad {

	public :
		Squad(void);
		~Squad(void);
		Squad(Squad const &squad);
		Squad & operator=(Squad const &squad);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*) ;
	private :
		int _nbrSquad;
		ISpaceMarine** _tabSquad;
};
#endif