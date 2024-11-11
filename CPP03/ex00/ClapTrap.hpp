#include <iostream>

class ClapTrap {
	private:
		std::string	name;
		int		hpoints;
		int		epoints;
		int		adamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &ct);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	get_name(void) const;
		int		get_hp(void) const;
		int		get_ep(void) const;
		int		get_ad(void) const;
		
		void	set_name(std::string name);
		void	set_hp(int hp);
		void	set_ep(int ep);
		void	set_ad(int ad);

		void	info();
};
