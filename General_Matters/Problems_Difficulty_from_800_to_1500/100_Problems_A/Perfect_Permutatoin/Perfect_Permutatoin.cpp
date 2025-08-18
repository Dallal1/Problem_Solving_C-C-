#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int pi = 1;

	if (n % 2 == 0)
	{
 		for (int i = 2; i <= n;)
		{
			cout << i << " "  << pi << " " ;
			pi += 2;
			i += 2;
		}
	} else 
		cout << -1 << " ";

	return 0;

}
	
