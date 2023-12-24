#include <iostream>

using namespace std;

//Functions
int bigNum()
{
	int num1, num2, num3, num4, num5;

	cout << "Input your nambers:" << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
		cout << num1;
	else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
		cout << num2;
	else if (num3 > num1 && num3 > num2 && num3 >> num4 && num3 > num5)
		cout << num3;
	else if (num4 > num1 && num4 >  num2 && num4 > num3 && num4 > num5)
		cout << num4;
	else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
		cout << num5;
	return (0);
}

int main()
{
	bigNum();
	return (0);
}
