//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long long int find_fact(int n)
		{
		    // Code here.
		    long long p=1;
		    for(int i=2;i<=n;i++){
		        p*=i;
		    }
		    return p;
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
    	long long int ans = ob.find_fact(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends