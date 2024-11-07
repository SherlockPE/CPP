#ifndef _COLORS
# define _COLORS
# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"
#endif // !_COLORS

// MutantStack declaration --------------------------------------------------------

#ifndef _MUTANTSTACK_HPP
# define _MUTANTSTACK_HPP
# include <stack>
# include <deque>


template <typename Type, typename Cont = std::deque<Type> >
class MutantStack : public std::stack<Type, Cont>
{
	public:
		// METHODS AND MEMBER FUNCTIONS---------------------------------------------

		typedef typename  Cont::iterator iterator;
		iterator begin(void)
		{
			return (this->c.begin());
		};
		iterator end(void)
		{
			return (this->c.end());
		};
		iterator rbegin(void)
		{
			return (this->c.rbegin());
		};
		iterator rend(void)
		{
			return (this->c.rend());
		};
};

#endif // !_MUTANTSTACK_HPP
