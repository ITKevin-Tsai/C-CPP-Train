#include <iostream>
#include <iomanip> // must be included while using setw(), std::right, std::left


int main()
{
	std::cout << std::left << std::setw(5) << "1" << std::endl;
	std::cout << std::left << std::setw(5) << "10" << std::endl;
	std::cout << std::left << std::setw(5) << "100" << std::endl;
	std::cout << std::right << std::setw(5) << "1" << std::endl;
	return 0;
}


/*
Output
1
10
100
    1
*/
