#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node *Next;
};
int sum=0;
Node *creating_linked_list(Node *current)
{
   
int Process;
cout<<"Enter the Number of nodes you want to create";
cin>>Process;
  int p=1;
    do
    { 
        int Data;
        cout << "Enter the value of the node : ";
        cin >> Data;
         Node *NewNode= new Node;
        NewNode->value = Data;
        NewNode->Next = NULL;
        current->Next = NewNode;
        current = NewNode; // Move the current pointer to the new node
        p=p+1;
    } while (p<=Process);
    return current; // Return the current pointer
};
void Display(Node *head)
{ 
    Node *current = head;
    cout << "[ ";
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->Next;
    };
    cout << " ]" << endl;
}
int Sum(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {   int p=current->value;
        sum = sum +p ;
        current = current->Next;
    };
    return sum;
}
void delete_Node(Node *current)
{
    Node *temp = current->Next;
    current->Next = current->Next->Next;
    delete temp;
}

int main()
{
    Node *Head;
    Head = new Node;
    Head->value = 100;
    Head->Next = NULL;
    Node *current;
    current = Head;
    int x;
    int Target;
    cout << " Enter the action 1.Add list 2. Show list 3.Delete Node from list 4. Exit : "<<endl;
    cin >> x;
    do
    {
        switch (x)
        {
        case 1:
            creating_linked_list(current);
            break;
        case 2:
            Display(Head);
            break;
        case 3:
            current = Head;
            cout << "'Enter the Node you want to delete'";
            cin>>Target;
            for (int i = 1; i <Target; i++)
            {
                 current=current->Next;
            }
            
            cout << "Deleted " << (current->Next)->value << endl;
            delete_Node(current);
            break;
        case 4:
            cout << "The sum of the whole list is : ";
            Sum(Head);
            cout << sum<<endl;
        default:

            break;
        }
        cout << " Do u want to Continue. ";
        cout << " 1.Add list 2. Show list 3.Delete Node from list 4.Get the sum of the whole expression 5. Exit  ";
        cin >> x;

    } while (x != 5);
    cout << "Thank you for using this programme";
}