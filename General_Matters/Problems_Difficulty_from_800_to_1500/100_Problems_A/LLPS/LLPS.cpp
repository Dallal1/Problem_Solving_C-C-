#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	if (!(cin >> s)) return 0;

	char mx = 'a';
	for (char c : s) mx = max(mx, c);

	for (char c : s) if (c == mx) cout << c;
	cout << '\n';
	return 0;
}
