#include <iostream>
using namespace std;

class node{
public:
    int data ;
    node* next ;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

 node* push(node* head, int size)
{
    int data ;
    while(size!=0)
    {
        if(head==NULL)
        {
            cin>>data ;
            node* NewNode = new node(data) ;
            head=NewNode ;
            size-- ;
        }
        
        else
        {
          cin>>data ;
          node* NewNode = new node(data) ;
          NewNode->next=head ;
          head=NewNode ;
          size--;
        }
        
    }
    return head ;
}

void display(node* head)
{
    node* temp = head ;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" " ;
        
        temp=temp->next ;
    }
    return ;
}

    node* hatao(node* head, int q)
{
      node* temp=head ;
      node* ahead = head->next ;
    
    if(q==0)
    {
        head=head->next ;
       // delete(temp) ;
        return head ;
    }
    
    for(int i=0; i<q; i++)
    {
      temp=temp->next ;
      ahead=ahead->next ;
    }
    
    temp->next=ahead->next ;
   // delete(ahead) ;  
    return head ;
    
    
}

int main() 
{
  int n , q , query;
  node * head=NULL ;

 cin>>q;
 cin>>n ;
 
 head=push(head,n) ;
 
 while(q!=0)
 {
    cin>>query ;
    head=hatao(head,query) ;
    display(head) ;
    q-- ;
 }
 
 return 0;
}
