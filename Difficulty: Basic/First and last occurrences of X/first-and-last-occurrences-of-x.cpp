//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        // vector<int>v;
        // int mid=n/2;
        // for(int i=0;i<mid;i++){
        //     if(arr[i]==x){
        //         v.push_back(i);
        //         break;
        //     }
        // }
        // for(int i=n-1;i>=mid;i--){
        //     if(arr[i]==x){
        //         v.push_back(i);
        //         break;
        //     }
        // }
        // if(v.size()==0){
        //     v.push_back(-1);
        // }
        // return v;
        
        vector<int> result;
        
        // Find the first occurrence of x
        int first = findFirstOccurrence(arr, n, x);
        if (first == -1) {
            result.push_back(-1);
            return result;
        }
        
        // Find the last occurrence of x
        int last = findLastOccurrence(arr, n, x);
        
        result.push_back(first);
        result.push_back(last);
        return result;
    }
    private:
    int findFirstOccurrence(vector<int> &arr, int n, int x) {
        int low = 0, high = n - 1, first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                first = mid;
                high = mid - 1; // Move left to find the first occurrence
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return first;
    }
    
    int findLastOccurrence(vector<int> &arr, int n, int x) {
        int low = 0, high = n - 1, last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                last = mid;
                low = mid + 1; // Move right to find the last occurrence
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return last;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends