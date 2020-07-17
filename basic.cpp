#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dayOfTheWeek;
	int apples, oranges, fruits;
	
	cout << "What day of the week is it?\n";
	cin >> dayOfTheWeek;
	cout << "How many apples do you have?\n";
	cin >> apples;
	cout << "How many oranges do you have?\n";
	cin >> oranges;

	fruits = apples + oranges;

	cout << "Today is " << dayOfTheWeek << " and you have " << fruits << " fruits!\n";

	double rate = 0.05, time, price = 10.0;
	double altSyntaxRate(0.07), TIME, altSyntaxPrice(4.0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(8);

	cout << "\n\nThe total cost is $" << (price + (price * rate)) << endl;

	cout << "c:\\files\\\n";
	cout << "Or in C++ 11 and higher, raw string literals: " << R"(c:\files\)" << endl;

	return 0;
}
