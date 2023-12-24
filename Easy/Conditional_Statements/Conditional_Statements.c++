#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Input your number: ";
	cin >> num;

	if (num == 1)
		cout << "On";
	else if (num == 2)
		cout << "Tow";
	else if (num == 3)
		cout << "Thre";
	else if (num == 4)
		cout << "Fore";
	else if (num == 5)
		cout << "Five";
	else if (num == 6)
		cout << "Sexe";
	else if (num == 7)
		cout << "Seven";
	else if (num == 8)
		cout << "eigth";
	else if (num == 9)
		cout << "Nene";
	else if (num > 9)
		cout << "Greater than 9";
	else if (num < 0)
		cout << "Smolle then 0";
		

	return (0);
}
