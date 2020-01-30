#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class Solution{
public:
Node* insert(Node *head,int data)
{
    Node *temp = new Node(data); //temporary node ; has to be pointer,don't know exactly why
    Node *current = head; //position of current pointer
    if (current != 0) //if current position is not empty
    {
        //while next position to current is not empty
        //move current position to next
        while (current->next != 0)
        {
            current = current->next;
        }
        //once next position is empty get out of while loop
        //and fill next position with temp node
        current->next = temp;
    }
    else //if current positiion is null add temp to first element
    {head = temp;}
    return head;
}
void display(Node *head)
{
    Node *start=head;
    while(start)
    {
        cout<<start->data<<" ";
        start=start->next;
    }
}
};
int main()
{
    Node* head=NULL;
    Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    mylist.display(head);
    
}
