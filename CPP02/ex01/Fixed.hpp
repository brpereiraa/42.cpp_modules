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

        float   toFloat(void) const;
        int     toInt(void) const;    
        int     getRawBits(void) const;
        void    setRawBits(int nbr);
};
        
std::ostream &operator<<(std::ostream &out, const Fixed &cp);

#endif