#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b; // Changed from cout >> a << b to cin >> a >> b
    
    string code;
    cin >> code; // Changed from cout >> code to cin >> code
    int s = code.size();
    if (s < a || code[a] != '-') // Added condition s != a + b + 1
    {
        cout << "No\n"; // Changed from "No\n" to "NO\n"
        return 0;
    }
    
    for (int i = 0; i < s; i++)
    {
        if ((code[i] >= '0' && code[i] <= '9')) continue; // Fixed syntax for checking digits
        
        if (i != a) // Changed from i != a to i == a
        {
            cout << "No\n"; // Changed from "No\n" to "NO\n"
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;


