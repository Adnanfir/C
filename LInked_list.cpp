#include <iostream>
using namespace std;

// Define the structure for a node in the linked list
struct Node
{
    int value;      // Data value of the node
    Node *Next;     // Pointer to the next node in the list
};

// Function to output all elements in the linked list
void output_list(Node *head)
{
    Node *current = head; // Start from the head node
    cout << "[";
    while (current != NULL) // Traverse until the end of the list
    {
        cout << current->value << " "; // Print current node's value
        current = current->Next;       // Move to the next node
    }
    cout << "]" << endl;
}

// Function to create a new node and link it to the current node
Node *current_node(Node *current, int New_Node_value)
{
    Node *n = new Node;        // Allocate memory for new node
    n->value = New_Node_value; // Set the value for the new node
    n->Next = NULL;            // New node points to NULL (end of list)
    current->Next = n;         // Link current node to the new node
    return n;                  // Return pointer to the new node
};

int main()
{
    Node *head;            // Pointer to the first node (head) of the list
    head = new Node;       // Allocate memory for head node
    (*head).value = 2;     // Set value of head node (can also use head->value)
    head->Next = NULL;     // Head node points to NULL initially (no next node)

    Node *current = head;  // Pointer to keep track of the last node in the list

    // Add new nodes to the list and update 'current' each time
    current = current_node(current, 27);
    current = current_node(current, 22);
    current = current_node(current, 23);
    current = current_node(current, 25);

    output_list(head);     // Print all values in the linked list
}
