#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl_version1(std::bitset<4> bits)
{
	const bool leftBit = bits.test(3);
	bits <<= 1;
	if (leftBit)
		bits.set(0);
	return bits;
}

std::bitset<4> rotl(std::bitset<4> bits)
{
	return (bits << 1) | (bits >> 3);
}

int binaryRotate()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';
	std::cout << rotl_version1(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';
	std::cout << rotl_version1(bits2) << '\n';

	return 0;
}
