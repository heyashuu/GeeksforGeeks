//{ Driver Code Starts
#include<iostream>
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

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    int k = 0 ; 
    Node*temp1 = head1 ;
    Node*temp2 = head2 ;
    if(temp1->data < temp2->data){
        k = temp1->data; 
        temp1=temp1->next ;
    }
    else{
        k = temp2->data; 
        temp2=temp2->next; 
    }
    Node* header = new Node(k);
     
    Node*temp3 = header ;
    while(temp1!=NULL&&temp2!=NULL){
        
        if(temp1->data < temp2->data){
            Node* temp = new Node(temp1->data) ; 
            temp3->next = temp ;
            temp3 = temp3->next ;             
            temp1=temp1->next;
             
        }
        else{
            Node* temp = new Node(temp2->data) ; 
            temp3->next = temp ;
            temp3 = temp3->next; 
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL ){ 
            Node* temp = new Node(temp1->data) ; 
            temp3->next = temp ;
            temp3 = temp3->next ;             
            temp1=temp1->next;
    }
    while(temp2!=NULL ){
            Node* temp = new Node(temp2->data) ; 
            temp3->next = temp ;
            temp3 = temp3->next; 
            temp2=temp2->next;
    }
    return header ;
    
    
}  
