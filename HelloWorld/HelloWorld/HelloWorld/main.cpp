#include <iostream>

// functions error if theres no return values in debug only
int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	std::cout << a * b << std::endl;
}

/* dont make too many functions,
	hard to maintain, make program slower
	the compiler generates a call instruction

	it creates the entire stack frame for the function
		compiler pushes the paramters, return address and have to
		jump to a different part of binary to call the func
		and return that value back
		jumping around memory is slow

		unless you use inline!

		prevent cope duplication
 */

// main function is special, returns 0 if theres no return
int main()
{

	int result = Multiply(3, 2);

	std::cout << "Hello World!" << std::endl;

	std::cin.get();

	return 0;
}