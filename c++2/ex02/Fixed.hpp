
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPoint;
        static const int fracBits;
    public:
        Fixed(void);
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed &copy);
        Fixed& operator= (const Fixed &rhs);
        bool operator> (const Fixed &rhs) const;
        bool operator< (const Fixed &rhs) const;
        bool operator>= (const Fixed &rhs) const;
        bool operator<= (const Fixed &rhs) const;
        bool operator== (const Fixed &rhs) const;
        bool operator!= (const Fixed &rhs) const;
        Fixed operator+ (const Fixed &rhs) const;
        Fixed operator- (const Fixed &rhs) const;
        Fixed operator* (const Fixed &rhs) const;
        Fixed operator/ (const Fixed &rhs) const;
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &rhs);

#endif