#include <iostream>

int swap()
{
	int smaller {};
	int larger{};

	std::cout << "Enter an integer: ";
	std::cin >> smaller;
	 
	std::cout << "Enter a larger integer: ";
	std::cin >> larger;

	if (larger < smaller)
	{
		int temp {smaller};
		smaller = larger;
		larger = temp;
	} // temp dies here

	std::cout << "Swapping the values\n";
	std::cout << "The smaller value is " << smaller << '\n'; 
	std::cout << "The larger value is " << larger << '\n' ; 

    return 0;
} // larger and smaller die here
