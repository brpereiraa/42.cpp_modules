#include <iostream>

class Fixed {
	private:
		static const int	fbits = 8;
		int			          value;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &fixed);
		Fixed& operator=(const Fixed &f);
    Fixed(const int nbr);
    Fixed(const float nbr);

		int   getRawBits();
		void  setRawBits(int value);

    float toFloat(void) const;
    int   toInt(void) const;
};
