#include <iostream>
#include <string>
#include <vector>
#include <numeric>    // Not strictly needed for this problem, but good practice
#include <algorithm>  // Not strictly needed for this problem, but good practice

// Function to solve a single test case
void solve() {
    int n;
    // Read the length of the string
    std::cin >> n;
    std::string s;
    // Read the binary string
    std::cin >> s;

    // Calculate the cost of typing the string without any reversal.
    // The cost is the sum of press operations (always n) and move operations.

    // Initialize total cost with 'n' for the press operations.
    long long current_cost = n; 
    
    // Count the number of alternations (where adjacent characters are different).
    // This helps determine the number of move operations needed.
    int num_alternations = 0;
    
    // Check the first character. The finger starts on button '0'.
    // If the first character s[0] is '1', we need an initial move operation.
    if (s[0] == '1') {
        current_cost++; // Add cost for the initial move operation
    }

    // Iterate through the string starting from the second character (index 1).
    // Count alternations and add the cost for the necessary move operations.
    for (int i = 1; i < n; ++i) {
        // If the current character s[i] is different from the previous character s[i-1],
        // a move operation was required before pressing s[i].
        if (s[i] != s[i - 1]) {
             num_alternations++;
             current_cost++; // Add cost for the move operation
        }
    }

    // Determine the minimum possible cost by considering at most one substring reversal.
    // The key insight is that the maximum possible cost reduction achievable through
    // one reversal depends solely on the number of alternations in the original string.

    // Start with the cost of the original string as the potential minimum.
    long long min_cost = current_cost; 

    // Case 1: If there are 2 or more alternations (e.g., 010, 101, 01...10, 01...01, etc.).
    // It can be shown that we can always find a substring reversal that reduces the
    // number of required moves by exactly 2. This happens when we reverse a segment
    // between two identical alternating pairs (like between two "01"s or two "10"s),
    // effectively turning `...01...01...` into `...00...11...` or
    // `...10...10...` into `...11...00...`.
    if (num_alternations >= 2) {
        min_cost = current_cost - 2;
    } 
    // Case 2: If there is exactly 1 alternation.
    // The string must be of the form 0...01...1 or 1...10...0.
    else if (num_alternations == 1) {
        // Subcase 2a: The pattern is 1...10...0.
        // Reversing the entire string changes it to 0...01...1.
        // The original string required an initial move (since s[0]=='1'), but the
        // reversed string does not. The number of internal alternations remains 1.
        // Thus, the total number of moves decreases by 1.
        if (s[0] == '1') { 
            // Note: If s[0] == '1' and num_alternations == 1, the string *must* end in '0'.
            // The condition s[n-1] == '0' is implied.
            min_cost = current_cost - 1;
        }
        // Subcase 2b: The pattern is 0...01...1.
        // Reversing any substring either keeps the pattern or increases alternations.
        // No reversal can decrease the cost. The minimum cost is the original cost.
        // min_cost remains current_cost in this subcase.
    }
    // Case 3: If there are 0 alternations.
    // The string is either all '0's or all '1's (e.g., "000", "111").
    // Reversing any substring results in the same string (all '0's or all '1's).
    // The cost cannot be reduced.
    // min_cost remains current_cost in this case.
    
    // Output the calculated minimum cost.
    std::cout << min_cost << "\n";
}

int main() {
    // Optimize C++ standard streams for faster input/output.
    std::ios_base::sync_with_stdio(false); // Untie C++ standard streams from C stdio
    std::cin.tie(NULL);                   // Untie cin from cout
    // std::cout.tie(NULL); // Usually not needed unless mixing cin/cout heavily or in interactive problems

    int t;
    // Read the number of test cases.
    std::cin >> t;
    // Process each test case.
    while (t--) {
        solve();
    }
    return 0;
}