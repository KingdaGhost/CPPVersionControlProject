#include<iostream>

void greet()
{
	// Printing a message
	std::cout << "Welcome\n\n\n";
}

int main()
{
	//this will result in conflict
	greet();
	//end of function
}
