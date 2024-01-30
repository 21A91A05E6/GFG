//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        map<int,int>m;
    	for(int i=0;i<n;i++){
    	    m[arr[i]]++;
    	}
    	vector<int>v;
    	for(auto it:m){
    	    if(it.second>1){
    	        v.push_back(it.first);
    	    }
    	}
    	if(v.size()==0){
    	    v.push_back(-1);
    	    return v;
    	}
    	return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends