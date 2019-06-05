#include <iostream>
#include <math.h>


using namespace std;

int fib(int n);

int main()
{
	cout << "Tell me how far you want to fib?" << endl;
	int choice;
	cin >> choice;

	cout << fib(choice + 1) << endl;

	//TODO:Print out nth fibonacci number
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
