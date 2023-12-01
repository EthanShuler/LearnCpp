#include <iostream>
#include <string_view>

constexpr std::string_view getQuantityPhrase(int numberOfApples)
{
    if (numberOfApples == 0)
        return "no";
    else if (numberOfApples == 1)
        return "a single";
    else if (numberOfApples == 2)
        return "a couple of";
    else if (numberOfApples == 3)
        return "a few";
    else
        return "many";
}

constexpr std::string_view getApplesPluralized(int numberOfApples)
{
    return numberOfApples != 1 ? "apples" : "apple";
}

int applesMain()
{
    std::cout << "Mary has " << getQuantityPhrase(3) << " " << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";

    return 0;
}
