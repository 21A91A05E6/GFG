//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

vector<int> take(int n){
    vector<int> ans(n);
    for(int i=0;i<n;i++) cin>>ans[i];
    return ans;
}

Node* inputList(int size, vector<int> v)
{
    if(size==0) return NULL;
    
    int val = v[0];
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        val = v[i+1];
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    srand(time(0));
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        int p = rand()%3;
        
        vector<int> v1 = take(n1);
        vector<int> v2 = take(n2);
        vector<int> v3 = take(n3);
        
        
        Node* head1 = NULL;
        Node* head2 = NULL;
        Node* common = NULL;
        
        if(p==0){
            common = inputList(n3, v3);
            head1 = inputList(n1, v1);
            head2 = inputList(n2, v2);
        }
        else if(p==1){
            
            head1 = inputList(n1, v1);
            common = inputList(n3, v3);
            head2 = inputList(n2, v2);
        }
         else{
            
            head1 = inputList(n1, v1);
            head2 = inputList(n2, v2);
            common = inputList(n3, v3);
        }
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int col(Node *t1,Node *t2,int d){
    while(d){
        d--;
        t2=t2->next;
    }
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;
    }
    if(t1==NULL){
        return -1;
    }
    return t1->data;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    // map<Node *,int>m;
    // Node *temp=head1;
    // while(temp!=NULL){
    //     m[temp]=1;
    //     temp=temp->next;
    // }
    // temp=head2;
    // while(temp!=NULL){
    //     if(m.find(temp)!=m.end()){
    //         return temp->data;
    //     }
    //     temp=temp->next;
    // }
    // return -1;
    Node *t1=head1;
    Node *t2=head2;
    int n1=0,n2=0;
    while(t1!=NULL){
        n1++;
        t1=t1->next;
        
    }
    while(t2!=NULL){
        n2++;
        t2=t2->next;
    }
    int a=-1;
    if(n1<n2){
        a=col(head1,head2,n2-n1);
    }
    else{
        a=col(head2,head1,n1-n2);
    }
    return a;
}
