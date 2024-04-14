//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void printArr(int n, int arr[]) {
        // Your code for printing array here
        // int n=sizeof(arr);
        for(int i=0;i<=n-1;i++){
            cout<<arr[i]<<" ";
        }
        // cout<<arr[n];
        cout << endl;
    }

    void setToZero(int n, int arr[]) {
        // Use memset to set arr to zero
        // int n=sizeof(arr);
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
    }

    void xor1ToN(int n, int arr[]) {
        // Xor arr[i]^i
        // int n=sizeof(arr);
        for(int i=0;i<n;i++){
            int temp=arr[i];
            arr[i]=temp^i;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.xor1ToN(n, arr);
        obj.printArr(n, arr);
        obj.setToZero(n, arr);
        obj.printArr(n, arr);
    }
    return 0;
}

// } Driver Code Ends