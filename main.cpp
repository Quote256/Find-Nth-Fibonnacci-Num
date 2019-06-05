#include <iostream>
#include <math.h>


using namespace std;

int fib(int n);

int main()
{
	cout << "Tell me how far you want to fib?" << endl;
	int choice;
	cin >> choice;

	cout << "The "<< choice << "th fibonacci number is " << fib(choice + 1) << endl;

	system("PAUSE");
	return 0;
}

int fib(int n)
{
	if ((n == 1) || (n == 2))
		return n - 1;

	else
		return fib(n - 1) + fib(n - 2);
}

