//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int m;
    stack<int> s;
    stack<int>ms;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty()){
               return -1;
           }
           return m;
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty()){
               return -1;
           }
           int a=s.top();
           s.pop();
           if(a==m){
            //   if(!ms.empty()){
            //       m=ms.top();
            //       ms.pop();
            //   }
            //   else{
            //   m=INT_MAX;
        //   }
        ms.pop(); // Remove the popped element from the minStack
        if (!ms.empty()) {
            m = ms.top(); // Update m to the new minimum element
        } else {
            m = INT_MAX; // If minStack is empty, set m to INT_MAX
        }
           }
           
           return a;
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
           if(ms.empty() ||x<=m){
               ms.push(x);
            //   m=x;
           }
           m = ms.top();
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends