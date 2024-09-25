//{ Driver Code Starts
//Initial Template for C++


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

*/
vector<int> displayList(Node *head)
{
    if(head==NULL)
        return {};
    vector<int>res;
    Node *curr=head;
    while(curr!=NULL)
    {
        res.push_back(curr->data);
        curr=curr->next;
    }
    return res;
    
    
}

//{ Driver Code Starts.



int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    
	    vector<int> list = displayList(head);
	    
	    for(int x : list){
	        cout<<x<<" ";
	    }
	    cout<<endl;
        
        for(int i = list.size()-1;i>=0;i--)
            cout<<list[i]<<" ";
            
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends