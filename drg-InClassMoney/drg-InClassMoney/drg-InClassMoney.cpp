// drg-InClassMoney.cpp : Defines the entry point for the console application.
// By: David Garza
// Date: 20200227
// Description: Give an amount of money to see how many dollars and cents you have. 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   float fltMoney = 0.00f;
  
   std::cout << "\nPlease enter an amount of money to see what bills and cents you have: $";
   std::cin >> fltMoney;
  
   int intDollars = (int)(fltMoney / 1.0f);
   int intCents = (int)((fltMoney - (float)intDollars) * 100.0f);

   int intRemainingDollars = intDollars;

   int int100s = (intRemainingDollars / 100);
   intRemainingDollars = intRemainingDollars % 100;
   int int50s = (intRemainingDollars / 50);
   intRemainingDollars = intRemainingDollars % 50;
   int int20s = (intRemainingDollars / 20);
   intRemainingDollars = intRemainingDollars % 20;
   int int10s = (intRemainingDollars / 10);
   intRemainingDollars = intRemainingDollars % 10;
   int int5s = (intRemainingDollars / 5);
   intRemainingDollars = intRemainingDollars % 5;
   int int1s = (intRemainingDollars / 1);
   intRemainingDollars = intRemainingDollars % 1;
   
   int intRemainingCents = intCents;

   int intQuarters = (intRemainingCents / 25);
   intRemainingCents = intRemainingCents % 25;
   int intDimes = (intRemainingCents / 10);
   intRemainingCents = intRemainingCents % 10;
   int intNickels = (intRemainingCents / 5);
   intRemainingCents = intRemainingCents % 5;
   int intPennies = (intRemainingCents / 1);
   intRemainingCents = intRemainingCents % 1;
   
  
   cout << "Number of $100s: " << int100s << endl;
   cout << "Number of $50s: " << int50s << endl;
   cout << "Number of $20s: " << int20s << endl;
   cout << "Number of $10s: " << int10s << endl;
   cout << "Number of $5s: " << int5s << endl;
   cout << "Number of $1s: " << int1s << endl;
   cout << "Number of Quarters(.25): " << intQuarters << endl;
   cout << "Number of Dimes(.10): " << intDimes << endl;
   cout << "Number of Nickels(.05): " << intNickels << endl;
   cout << "Number of Pennies(.01): " << intPennies << endl;
   
}

