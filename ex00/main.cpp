#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

int main()
{
	// BURECURAT a(7,"reda");
	// std::cout << a <<std::endl;
    	BURECURAT a(2, "reda");
	try
	{
		a.increment();
	}
	catch(const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
}