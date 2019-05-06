#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char a;

	cout << "Enter a letter: "; cin >> a;
	switch (a)
	{
		case 'A':
			cout << "You're adorable!";
			break;
		case 'B':
			cout << "You're so beautiful!";
			break;
		case 'C':
			cout << "You're so cute & full of charm!";
			break;
		case 'D':
			cout << "Charot.";
			break;
	}
	getch();
	return 0;
}