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

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--; // use 0 indeed numbers
        }

        vector<int> diff(n);
        for (int i = 0; i < n; i++) {
            diff[i] = p[i] - i;
        }

        int max_diff = *max_element(diff.begin(), diff.end()) - *min_element(diff.begin(), diff.end());
        cout << max_diff << endl;
    }

    return 0;
}