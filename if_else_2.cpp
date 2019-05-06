#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	cout << "Number of units completed: "; cin >> a;
	if (a < 32)
		cout << "The college student is a Freshmen.\n";
	else if (a >= 32 && a <= 63)
		cout << "The college student is a Sophomore.\n";
	else if (a >= 64 && a <= 95)
		cout << "The college student is a Junior.\n";
	else if (a >= 96 && a <= 120)
		cout << "The college student is a Senior.\n";
	else
		cout << "Invalid.\n";

	getch();
	return 0;
}
