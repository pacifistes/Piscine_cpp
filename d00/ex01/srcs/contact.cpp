#include "contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact (void) {
	return;
}

int	Contact::getNbContact(void) {
	return Contact::_nbContact;
}

void	Contact::increment_nb(void) {
	Contact::_nbContact += 1;
}

void	Contact::print_contact(void) const {
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "login : " << this->get_login() << std::endl;
	std::cout << "post address : " << this->get_post_address() << std::endl;
	std::cout << "phone number : " << this->get_phone_number() << std::endl;
	std::cout << "birthday date : " << this->get_birthday_date() << std::endl;
	std::cout << "favorite meal : " << this->get_favorite_meal() << std::endl;
	std::cout << "underwear color : " << this->get_underwear_color() << std::endl;
	std::cout << "darkest secret : " << this->get_darkest_secret() << std::endl; 
}

void	Contact::add_contact(void) {
	Contact::increment_nb();
	std::string information;

	std::cout << "first name : ";
	std::getline(std::cin, information);
	this->set_first_name(information);

	std::cout << "last name : ";
	std::getline(std::cin, information);
	this->set_last_name(information);

	std::cout << "nickname : ";
	std::getline(std::cin, information);
	this->set_nickname(information);

	std::cout << "login : ";
	std::getline(std::cin, information);
	this->set_login(information);

	std::cout << "post address : ";
	std::getline(std::cin, information);
	this->set_post_address(information);

	std::cout << "phone number : ";
	std::getline(std::cin, information);
	this->set_phone_number(information);

	std::cout << "birthday date : ";
	std::getline(std::cin, information);
	this->set_birthday_date(information);

	std::cout << "favorite meal : ";
	std::getline(std::cin, information);
	this->set_favorite_meal(information);

	std::cout << "underwear color : ";
	std::getline(std::cin, information);
	this->set_underwear_color(information);
	
	std::cout << "darkest secret : ";
	std::getline(std::cin, information);
	this->set_darkest_secret(information);
}


std::string	Contact::get_first_name(void) const {
	return this->_first_name;
}

std::string	Contact::get_last_name(void) const {
	return this->_last_name;
}

std::string	Contact::get_nickname(void) const {
	return this->_nickname;
}

std::string	Contact::get_login(void) const {
	return this->_login;
}

std::string	Contact::get_post_address(void) const {
	return this->_post_address;
}

std::string	Contact::get_phone_number(void) const {
	return this->_phone_number;
}

std::string	Contact::get_birthday_date(void) const {
	return this->_birthday_date;
}

std::string	Contact::get_favorite_meal(void) const {
	return this->_favorite_meal;
}

std::string	Contact::get_underwear_color(void) const {
	return this->_underwear_color;
}

std::string	Contact::get_darkest_secret(void) const {
	return this->_darkest_secret;
}

void	Contact::set_first_name(std::string str) {
	this->_first_name = str;
}

void	Contact::set_last_name(std::string str) {
	this->_last_name = str;
}

void	Contact::set_nickname(std::string str) {
	this->_nickname = str;
}

void	Contact::set_login(std::string str) {
	this->_login = str;
}

void	Contact::set_post_address(std::string str) {
	this->_post_address = str;
}

void	Contact::set_phone_number(std::string str) {
	this->_phone_number = str;
}

void	Contact::set_birthday_date(std::string str) {
	this->_birthday_date = str;
}

void	Contact::set_favorite_meal(std::string str) {
	this->_favorite_meal = str;
}

void	Contact::set_underwear_color(std::string str) {
	this->_underwear_color = str;
}

void	Contact::set_darkest_secret(std::string str) {
	this->_darkest_secret = str;
}

int Contact::_nbContact = 0;