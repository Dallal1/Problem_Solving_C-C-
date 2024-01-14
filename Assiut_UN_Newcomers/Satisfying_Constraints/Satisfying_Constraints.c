#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> constraints;

        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;
            constraints.push_back({a, x});
        }

        sort(constraints.begin(), constraints.end());

        int min_val = 1, max_val = 1e9;

        for (auto& constraint : constraints) {
            int a = constraint.first, x = constraint.second;

            if (a == 1) {
                min_val = max(min_val, x);
            } else if (a == 2) {
                max_val = min(max_val, x - 1);
            } else {
                // Handle not equal constraints if needed
            }
        }

        int count = max(0, max_val - min_val + 1);

        cout << count << endl;
    }

    return 0;
}
