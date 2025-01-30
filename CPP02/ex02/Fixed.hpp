#ifndef FIXED
# define FIXED

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private:
        int fvalue;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &cp);
        Fixed(const int nbr);
        Fixed(const float nbr);
        ~Fixed();

        Fixed &operator=(const Fixed &cp);
        
        bool operator>(const Fixed &cp) const;
        bool operator<(const Fixed &cp) const;
        bool operator>=(const Fixed &cp) const;
        bool operator<=(const Fixed &cp) const;
        bool operator==(const Fixed &cp) const;
        bool operator!=(const Fixed &cp) const;

        Fixed operator+(const Fixed &cp) const;
        Fixed operator-(const Fixed &cp) const;
        Fixed operator*(const Fixed &cp) const;
        Fixed operator/(const Fixed &cp) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        float   toFloat(void) const;
        int     toInt(void) const;    
        int     getRawBits(void) const;
        void    setRawBits(int nbr);
};
        
std::ostream &operator<<(std::ostream &out, const Fixed &cp);

#endif