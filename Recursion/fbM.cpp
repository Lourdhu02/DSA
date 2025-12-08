#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int> &dp) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    if(dp[n] != -1) return dp[n];  // return already calculated value

    dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);  // store result
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);  // initialize memoization array
    int result = fibonacci(n, dp);
    cout << result << endl;
}
