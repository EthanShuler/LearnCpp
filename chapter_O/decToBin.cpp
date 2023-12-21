#include <iostream>
#include <cstdint>

int greaterThanPowerOfTwo(int num, int powOf2)
{
	if (num >= powOf2)
	{
		std::cout << 1;
		return num - powOf2;
	}
	else
		std::cout << 0;
	return num;
}

int decToBin()
{
	std::cout << "input a num between 0 and 255";
	int x {};
	std::cin>> x;

	std::cout << "You input (in binary):\n";
	x = greaterThanPowerOfTwo(x, 128);
	x = greaterThanPowerOfTwo(x, 64);
	x = greaterThanPowerOfTwo(x, 32);
	x = greaterThanPowerOfTwo(x, 16);
	std::cout << ' ';
	x = greaterThanPowerOfTwo(x, 8);
	x = greaterThanPowerOfTwo(x, 4);
	x = greaterThanPowerOfTwo(x, 2);
	greaterThanPowerOfTwo(x, 1);

	std::cout << '\n';
	return 0;
}
