//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s1)
        {
            //code here.
            int l = 0, u = 0, s = 0, n = 0;
            vector<int>v;
            for (char c : s1) {
                if (islower(c)) {
                    l++;
                } else if (isupper(c)) {
                    u++;
                } else if (isdigit(c)) {
                    n++;
                } else {
                    s++;
                }
            }
            v.push_back(u);
            v.push_back(l);
            v.push_back(n);
            v.push_back(s);
            return v;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends