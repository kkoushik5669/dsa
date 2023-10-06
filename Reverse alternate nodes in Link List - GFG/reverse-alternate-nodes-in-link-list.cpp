//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        if (odd == NULL || odd->next == NULL || odd->next->next == NULL)
        return;
 
    // even points to the beginning of even list
    Node* even = odd->next;
 
    // Remove the first even node
    odd->next = odd->next->next;
 
    // odd points to next node in odd list
    odd = odd->next;
 
    // Set terminator for even list
    even->next = NULL;
 
    // Traverse the list
    while (odd->next) {
        // Store the next node in odd list
        Node* temp = odd->next->next;
 
        // Link the next even node at
        // the beginning of even list
        odd->next->next = even;
        even = odd->next;
 
        // Remove the even node from middle
        odd->next = temp;
 
        // Move odd to the next odd node
        if (temp != NULL)
            odd = temp;
    }
 
    // Append the even list at the end of odd list
    odd->next = even;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends