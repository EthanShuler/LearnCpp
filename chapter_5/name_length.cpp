#include <iostream>
#include <string>

int getNameLength()
{
    std::cout << "Enter your full name: ";
    std::string fullName {};
    std::getline(std::cin >> std::ws, fullName);
    return static_cast<int>(fullName.length());
}

int getAge()
{
    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;
    return age;
}

int nameAgeLength()
{
    int nameLength = getNameLength();
    int age = getAge();
    std::cout << "Your age + length of name is: " << nameLength + age << '\n';

    return 0;
}
