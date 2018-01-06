#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

class HumanA {
	private:
		void meleeAttack(std::string const & target);
		void rangeAttack(std::string const & target);
		void intimidatingShout(std::string const &target);

	public:
		void action(std::string const &action_name, std::string const &target);
};

#endif