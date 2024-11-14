#include <iostream>
#include <include/myAdd.h>

using namespace std;

int main()
{
	int a = 5;
	int b = 4;
	int c;
	c = myAdd(a, b);
	
	std::cout << "a + b = " << c << std::endl;
	
	return 0;
}