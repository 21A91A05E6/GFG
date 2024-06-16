//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        const int MOD = 1000000007;
        if (n == 1 || n == 2)
            return 1;
        
        // Initialize an array to store Fibonacci numbers
        vector<int> fib(n + 1);
        
        // Base cases
        fib[1] = 1;
        fib[2] = 1;
        
        // Compute Fibonacci numbers from 3 to n
        for (int i = 3; i <= n; ++i) {
            fib[i] = (fib[i-1] + fib[i-2]) % MOD;
        }
        
        // Return the nth Fibonacci number
        return fib[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends