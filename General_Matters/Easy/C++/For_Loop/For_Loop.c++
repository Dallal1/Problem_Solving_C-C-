#include <iostream>

using namespace std;
int main()
{
	int num;

	cout << "Inter The Number: ";
	cin >> num;

	for (int i = 0; i <= num; i++)
	{
		switch (i)
		{
		case 1:
			cout << "One" << endl;
		break;
		case 2:
			cout << "Tow" << endl;
		break;
		case 3:
			cout << "Thre" << endl;
		break;
		case 4:
			cout << "Fore" << endl;
		break;
		case 5:
			cout << "Five" << endl;
		break;
		case 6:
			cout << "Sexe" << endl;
		break;
		case 7:
			cout << "Seven" << endl;
		break;
		case 8:
			cout << "eight" << endl;
		break;
		case 9:
			cout << "nine" << endl;
		break;
		}
		if (i >= 10)
		{
			if (i % 2 == 0)
				cout << "even" << endl;
			else
				cout << "odd" << endl;
		}	
	}

	return (0);
}
