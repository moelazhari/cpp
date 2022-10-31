
#include <iostream>

class Fixed
{
private:
    int fixedPoint;
    static const int fracBits = 8;
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator= (const Fixed &rhs);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
