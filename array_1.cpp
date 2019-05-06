#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>

using namespace std;

char header[] = "\n *** C Strings *** \n\n";

int main()
{
	char hello[30] = "Hello ", name[20], message[80];

	cout << header << "Your first name: ";
	// Enter a word
	cin >> setw(20) >> name;
	
	// Append the name.
	strcat(hello, name);
	cout << hello << endl;

	// No previous input.
	cin.sync();

	cout << "\nWhat is the message for today?" << endl;

	// Enter a line with a max of 79 characters.
	cin.getline(message, 80);

	// If string length is longer than 0.
	if (strlen (message) > 0)

	{
		for (int i = 0; message[i] != '\0'; ++i)

		// Output with white spaces.
		cout << message[i] << ' '; 
		cout << endl;
	}
	
	getch ();
	return 0;
}