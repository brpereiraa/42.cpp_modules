#include <iostream>

class Fixed {
	private:
		static const int	fbits = 8;
		int			value;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &fixed);
		Fixed& operator=(const Fixed &f);

		int	getRawBits();
		void	setRawBits(int value);
};
