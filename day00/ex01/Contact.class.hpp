#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact
{
public:
	Contact( void );
	~Contact( void );

	static int 	getNbContact( void );
	static void	increment_nb(void);

	void	add_contact( void );
	void	print_contact(void);

	std::string	get_first_name( void );
	std::string	get_last_name( void );
	std::string	get_nickname( void );
	std::string	get_login( void );
	std::string	get_post_address( void );
	std::string	get_phone_number( void );
	std::string	get_birthday_date( void );
	std::string	get_favorite_meal( void );
	std::string	get_underwear_color( void );
	std::string	get_darkest_secret( void );

	void		set_first_name( std::string str );
	void		set_last_name( std::string str );
	void		set_nickname( std::string str );
	void		set_login( std::string str );
	void		set_post_address( std::string str );
	void		set_phone_number( std::string str );
	void		set_birthday_date( std::string str );
	void		set_favorite_meal( std::string str );
	void		set_underwear_color( std::string str );
	void		set_darkest_secret( std::string str );

	
private:
	std::string	_first_name;
	std::string _last_name;
	std::string _nickname;//surnom
	std::string _login;
	std::string _post_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

	static int	_nbContact;
};

#endif