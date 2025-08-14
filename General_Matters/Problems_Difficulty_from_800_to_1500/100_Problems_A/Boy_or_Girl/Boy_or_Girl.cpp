#include <iostream>
#include <string>
#include <set>
using namespace std;

int main ()
{
	string text;
	cin >> text;
	
	set<char> distinct;
	
	for (char c : text) 
		distinct.insert(c);
	
	if (distinct.size() % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;

	return 0;
}
