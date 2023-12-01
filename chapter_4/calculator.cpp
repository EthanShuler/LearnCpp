#include <iostream>

double getUserNumber()
{
   double num{};
   std::cout << "Enter a double value: ";
   std::cin >> num;
   return num;
}

char getOperation()
{
   char operation{};
   std::cout << "Ente rone of hte following: +, -, *, or /: ";
   std::cin >> operation;
   return operation;
}

double calculate(double lOperator, double rOperator, char operation)
{
   if (operation == '+')
   {
      return lOperator + rOperator;
   }
   else if (operation == '-')
   {
      return lOperator - rOperator;
   }
   else if (operation == '*')
   {
      return lOperator * rOperator;
   }
   else if (operation == '/')
   {
      return lOperator / rOperator;
   }
   return -1.0;
}

void printResults(double lOperator, double rOperator, char operation, double result)
{
   std::cout << lOperator << ' ' << operation << ' ' << rOperator << " is " << result << '\n';
}

int calculator()
{
   double x{ getUserNumber() };
   double y{ getUserNumber() };
   char operation{ getOperation() };
   double result = calculate(x, y, operation);
   printResults(x, y, operation, result);
   return 0;
}
