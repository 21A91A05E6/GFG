//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long long int sum(int N)
		{
		    // Code here
		    auto sum_of_multiples_of = [](int k, int N) -> long long {
                long long m = (N - 1) / k;
                return k * m * (m + 1) / 2;
            };
            
            // Calculate the sum of multiples of 3, 7 and 21 (LCM of 3 and 7)
            long long sum_3 = sum_of_multiples_of(3, N);
            long long sum_7 = sum_of_multiples_of(7, N);
            long long sum_21 = sum_of_multiples_of(21, N);
            
            // Apply the inclusion-exclusion principle to avoid double counting
            return sum_3 + sum_7 - sum_21;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.sum(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends