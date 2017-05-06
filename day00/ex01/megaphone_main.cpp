#include "Contact.class.hpp"



void	search_function(Contact *contact)
{
	int i;
	int nb_contact;
	std::string	first_name;
	std::string last_name;
	std::string nickname;

	i = 0;
	nb_contact = Contact::getNbContact();
	std::cout << "|index     |first_name|last_name |nickname  |";
	while (i < nb_contact)
	{
		std::cout << "|" << i + 1 << "         |";
		first_name = contact[i].get_first_name();
		last_name = contact[i].get_last_name();
		nickname = contact[i].get_nickname();
		if (first_name.size() <= 10)
			std::cout << first_name << std::string(10 - first_name.size(), ' ') << "|";
		else
			std::cout << first_name.substr(0, 9) << ".|";
		if (last_name.size() <= 10)
			std::cout << last_name << std::string(10 - last_name.size(), ' ') << "|";
		else
			std::cout << last_name.substr(0, 9) << ".|";
		if (nickname.size() <= 10)
			std::cout << nickname << std::string(10 - nickname.size(), ' ') << "|" << std::endl;
		else
			std::cout << nickname.substr(0, 9) << ".|" << std::endl;
		i++;
	}
}

int main()
{
	std::string str;
	Contact contact[8];
	int 	index;

	while (str != "EXIT")
	{
		std::cout << "Command : ";
		std::cin >> str;
		if (str == "ADD")
		{
			index = Contact::getNbContact();
			if (index < 9)
				contact[index].add_contact();
			else
				std::cout << "Too lot of contact for add another " << std::endl;
		}
		else if (str == "SEARCH")
		{
			if ((index = Contact::getNbContact()) == 0)
				std::cout << "No contact add" << std::endl;
			else
			{
				search_function(contact);
				std::cout << "choose contact's index : ";
				std::cin >> str;
				if (str.size() == 1 && (index = str.at(0)) >= 49 && index <= 48 + Contact::getNbContact()) 
					contact[index - 49].print_contact();
				else
					std::cout << "this is not a valid index" << std::endl;
			}
		}
		else if (str != "EXIT")
			std::cout << "Command accept are 'EXIT' , 'ADD' and 'SEARCH'" << std::endl;; 
	}
	return 0;
}