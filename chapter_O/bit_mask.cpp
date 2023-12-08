#include <bitset>
#include <cstdint>
#include <iostream>

int bitMask()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    myArticleFlags |= option_viewed;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

	std::cout << "is deleted: " << static_cast<bool>(myArticleFlags & option_deleted) << '\n';

	myArticleFlags &= static_cast<std::uint8_t>(~option_favorited);
	std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
