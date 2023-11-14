//main.cpp
#include <iostream>
#include "function.h"

using namespace std;

int main()
{
   char znack = '+';
   double number1, number2;
   cout << "Enter first number :";
   cin >> number1;
   cout << "Enter second number :";
   cin >> number2;
   switch (znack)
   {
       case '+': cout << slojenie(number1, number2);
        break;
       case '-': cout << '-';
        break;
       case '*': cout << '*';
        break;
       case '/': cout << '/';
        break;
       default: cout << "error";
        break;
   }
   system("pause");
   return 0;
}

