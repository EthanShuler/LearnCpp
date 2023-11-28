#include <iostream>

const double GRAVITY {9.8};

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    return height;
}

double calculateBallHeight(double seconds, double height)
{
    return height - ((GRAVITY * (seconds * seconds)) / 2.0);
}

void dropBall(double height)
{
    double ballHeight{height};
    double seconds{0.0};
    
    while (ballHeight >= 0.0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters" << '\n';
        seconds += 1.0;
        ballHeight = calculateBallHeight(seconds, height);
    }
    std::cout << "At " << seconds << " seconds, the ball is on the ground" << '\n';
}

int balldrop()
{
    double height { getHeight() };
    dropBall(height);
    return 0;
}
