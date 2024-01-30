//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            // vector<string>v;
            // v.push_back(A);
            // v.push_back(B);
            // v.push_back(C);
            // sort(v.begin(),v.end());
            // int n=v.size();
            // string first=v[0],last=v[2];
            // int a=min(first.size(),last.size());
            // int c=0;
            // for(int i=0;i<a;i++){
            //     if(first[i]==last[i]){
            //         c++;
            //     }
            //     else{
            //         break;
            //     }
            // }
            // return c;
            
            std::vector<std::vector<std::vector<int>>> dp(n1 + 1, std::vector<std::vector<int>>(n2 + 1, std::vector<int>(n3 + 1, 0)));

    for (int i = 1; i <= n1; ++i) {
        for (int j = 1; j <= n2; ++j) {
            for (int k = 1; k <= n3; ++k) {
                if (A[i - 1] == B[j - 1] && A[i - 1] == C[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = std::max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
            }
        }
    }

    return dp[n1][n2][n3];
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends