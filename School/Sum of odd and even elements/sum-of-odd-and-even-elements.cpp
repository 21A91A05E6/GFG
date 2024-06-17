//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    // Code here
		    int o=0,e=0;
		    vector<int>v;
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    e+=i;
                }
                else{
                    o+=i;
                }
            }
            v.push_back(o);
            v.push_back(e);
            return v;
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
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
// } Driver Code Ends