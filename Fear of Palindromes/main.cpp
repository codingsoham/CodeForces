#include <iostream>
#include <vector>
#include <string>
using namespace std;

int max_palindromic_subsequence_length(const string& S1, const string& S2) {
    int n = S1.size();
    int m = S2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (S1[i - 1] == S2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 2;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m];
}

int main() {
    int T;
    cin >> T; 
    cin.ignore(); 

    while (T--) {
        string S1, S2;
        getline(cin, S1);
        getline(cin, S2); 

        int result = max_palindromic_subsequence_length(S1, S2);
        cout << result << endl;
    }

    return 0;
}