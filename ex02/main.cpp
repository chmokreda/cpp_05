#include "Bureaucrat.hpp"

#include "AForm.hpp"

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
	AForm b("reda", 8,9);
	std::cout << b;
}