#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	int Age;
	double Weight;
	string FirstName, LastName;

	cout << "Enter the following data..." << endl;

	cout << "First Name: ";
	cin >> FirstName;

	cout << "Last Name: ";
	cin >> LastName;

	cout << "Age: ";
	cin >> Age;

	cout << "Weight: ";
	cin >> Weight;

	cout << FirstName << " " << LastName << " " << Age << " years old " << Weight << " pounds" << endl;

	getch();
	return 0;
}
