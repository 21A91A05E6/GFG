//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int k) {
        // complete the function here
        int l=0,n=arr.size();
        int h=n-1;
        int m=0;
        while(l<=h){
            m=(l+h)/2;
            if(arr[m]==k){
                return m;
            }
            if(arr[l]<=arr[m]){
                if(arr[l]<=k && arr[m]>=k){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(arr[m]<=k && arr[h]>=k){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends