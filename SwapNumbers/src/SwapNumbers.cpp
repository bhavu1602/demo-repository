//============================================================================
// Name        : SwapNumbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// main.cpp
#include <iostream>
#include "swapfunction.h"
using namespace std;
int swap(int a, int b);
int main()
{
 int a,b;
 cout<<"Enter two numbers"<<endl;
 cin>>a>>b;
 swap(a,b);
 return 0;
}
