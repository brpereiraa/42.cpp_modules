#ifndef FIXED
# define FIXED

#include "iostream"
#include "string"

class Fixed {
    private:
        int fvalue;
        static const int bits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed &cp);
        Fixed &operator=(const Fixed &cp);

        int getRawBits(void) const;
        void setRawBits(int nbr);
};

#endif