/*
 * problem1.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: chennadi
 */
#include <iostream>
#include <fstream>
#include "cmpe_180_92_assignment7a/Pair.h"

using namespace std;

void fun()
{
   Pair pair1(1, 2);
   pair1.show();
   cout << "Expected: (1, 2) 2 boxes" << endl;
   Pair pair2 = pair1;
   pair2.show();
   cout << "Expected: (1, 2) 4 boxes" << endl;
   pair2.inc();
   pair1 = pair2;
   pair1.show();
   cout << "Expected: (2, 3) 4 boxes" << endl;
   pair1.inc();
   pair2.show();
   cout << "Expected: (2, 3) 4 boxes" << endl;
}

int main()
{
   fun();
   Pair pair3(0, 1);
   pair3.show();
   cout << "Expected: (0, 1) 2 boxes" << endl;

   return 0;
}

