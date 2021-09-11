#include <iostream>
using namespace std;

int swap(int a, int b)
{
	//a=10 b =5
	a= a+b; //a=15
	b= a-b; //b=10
	a= a-b; //a=5
	cout<<"A is now "<<a<<endl;
	cout<<"B is now "<<b<<endl;
	return 0;
}
