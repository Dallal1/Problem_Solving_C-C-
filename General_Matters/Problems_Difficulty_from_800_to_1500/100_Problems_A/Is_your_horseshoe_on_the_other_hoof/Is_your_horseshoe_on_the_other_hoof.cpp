#include <iostream>
#include <set>

using namespace std;

int main ()
{
	int count = 0;
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	
	set<int> colors;
	
	colors.insert(a);
	colors.insert(b);
	colors.insert(c);
	colors.insert(d);
	
	cout << 4 - colors.size() << endl; 
	
	
	
	return 0;
}
