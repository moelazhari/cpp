#!/usr/bin/env bash

echo "#include \"${1}.hpp\"
${1}::${1}(void)
{
	return ;
}
${1}::${1}(${1} const &src)
{
	*this = src;
	return ;
}
${1}::~${1}(void)
{
	return ;
}
${1}	&${1}::operator=(${1} const &rhs)
{
	return *this;
}
/*std::ostream    &operator<<(std::ostream &o, ${1} const &rhs)
{
	return o;
}*/" > $1.cpp

echo -n "#ifndef " > $1.hpp
echo "${1}_HPP" | tr '[a-z]' '[A-Z]' >> $1.hpp
echo -n "# define " >> $1.hpp
echo "${1}_HPP" | tr '[a-z]' '[A-Z]' >> $1.hpp

echo "
# include <iostream>
class	${1}
{
	private:
	public:
		${1}(void);
		${1}(${1} const &src);
		~${1}(void);
		${1} &operator=(${1} const &rhs);
};
//std::ostream    &operator<<(std::ostream &o, ${1} const &rhs);
#endif" >> $1.hpp