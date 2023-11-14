//main.cpp
#include <iostream>

using namespace std;

int main()
{
   char znack = '+';
   switch (znack)
   {
       case '+': cout << '+';
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
}

