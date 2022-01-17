#include <iostream>
using namespace std;

void doSomething(double[]);
void printArray(double[]);

int main()
{
	int x = 10;
	int* ptr;

	double numbers[] = { 10, 20, 30, 40, 50 };

	printArray(numbers);

	cout << endl << endl << endl;

	doSomething(numbers);

	printArray(numbers);

	//cout << &numbers[0] << endl;
	//cout << &numbers[1] << endl;
	//cout << &numbers[2] << endl;
	//cout << &numbers[3] << endl;
	//cout << &numbers[4] << endl;

	//cout << ptr << endl;

	return 0;
}

void doSomething(double nums[])
{
	for (int i = 0; i < 5; i++)
	{
		nums[i] *= 2;
	}
}

void printArray(const double nums[]) // The same as passing a double* numbers
{
	for (int i = 0; i < 5; i++)
	{
		cout << nums[i] << endl;
	}
}