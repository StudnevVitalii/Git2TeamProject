//main.cpp
#include <iostream>
#include "function.h"

using namespace std;

int main()
{
   char znack;
   double number1, number2;
   cout << "Enter first number :";
   cin >> number1;
   cout << "vvedite znak :";
   cin >> znack;
   cout << "Enter second number :";
   cin >> number2;
   switch (znack)
   {
       case '+': cout << slojenie(number1, number2);
        break;
       case '-': cout << vichitanie(number1, number2);
        break;
       case '*': cout << umnozhenie(number1, number2);
        break;
       case '/': cout << delenie(number1, number2);
        break;
       default: cout << "error";
        break;
   }
   cout << endl;
   system("pause");
   return 0;
}
