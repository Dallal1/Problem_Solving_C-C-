#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int count = 0;
	int a, b, z;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> z;
		if (a + b + z >= 2)
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
