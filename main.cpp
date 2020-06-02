#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string name;
	string customname;
	string password;
	string custompassword;
	string buddy;
	string details;
	string testing = "hello world";
	string nothing;
	int loop = 1;
	int loop2;
	int add = 1;

	// A bit of setup to customise the "hacks"
	cout << "Welcome to the setup screen for Fake Hacks. \n";
	cout << "DISCLAIMER: THIS IS ONLY TO BE USED FOR ENTERTAINMENT PURPOSES. THE DEVELOPERS ARE NOT RESONSIBLE FOR ANY ACTIONS CAUSED BY THIS OR ANY OTHER SOFTWARE. AS WITH ANY SOFTWARE, USE IT RESPONSIBLY. \n If you cannot do that, well you really should not be on the internet. \n \n \n";
	cout << "Here is how it works. \n";
	cout << "All you need to do is fill out a bit of information on this screen and then we will \n";
	cout << "remove this screen and make it look like you are hacking to your friend. Good luck! \n \n \n";
	cout << "#1. What would you like your username to be? \n";
	cin >> customname;
	cout << "#2. What would you like your password to be? \n";
	cin >> custompassword;
	cout << "#3. How many times do you want the fake decoding text to appear? Setting this to a very high number is a good idea! \n";
	cin >> loop2;
	cout << "#4. What is the name of your friend? \n";
	cin >> buddy;
	cout << "Done! Press the 'a' key to start the 'hacks'. \n";
	cin >> nothing;

	// The program starts here:
	cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n";
	cout << "OK    ";
	cout << "Waiting for connection to server... Please wait... \n";
	cout << "Connection was successful and a 200 was returned. \n";
	cout << "Please log into to the database.  ";
	while (loop == 1) {
		cout << "Please enter your username. \n";
		cin >> name;
		if (name == customname) {
			cout << "Please enter your password. \n";
			cin >> password;
			if (password == custompassword) {
				cout << "Hacked into the database. Please wait. \n";
				while (add < loop2) {
					cout << "#$#%###$#%##$#%#$##%$##%##%#$#% \n";
					add = add + 1;
				}
				cout << "Success. We hacked into the database! Press the a key to view all records. \n";
				cin >> nothing;
				cout << "'1' record(s) returned. This is the output. \n";
				cout << buddy << "'s record was found. Press the a key to read the report. \n \n";
				cin >> nothing;
				cout << "The report states this: \n";
				cout << "You just fell for a very fine prank. Give yourself a pat on the back. \n Press the a key to end the program.";
				cin >> nothing;
				return 0;
			}
			else {
				cout << "Wrong Password. Please enter in your username your username again.";
			}
		}
		else {
			cout << "ERROR. User not found. This has been logged. \n \n";
		}
	}
	return 0;
}
