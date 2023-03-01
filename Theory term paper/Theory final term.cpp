#include <iostream>

using namespace std;

class Node
{
public:
    float value;           // The floating point number to store in the node
    char character;        // The character to store in the node
    Node* next;            // A pointer to the next node in the list
    Node* next_to_next;    // A pointer to the node after the next node

    // Constructor to initialize the node with a value, a character, and pointers to the next and next-to-next nodes
    Node(float val, char ch)
    {
        value = val;
        character = ch;
        next = NULL;
        next_to_next = NULL;
    }
};

class LinkedList
{
public:
    LinkedList()
    {
        head = nullptr;
    }

    // Function to add a node to the end of the linked list
    void addNode(float val, char ch)
    {
        Node* newNode = new Node(val, ch);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to print the values of each node in the linked list
    void printList()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << "(" << current->value << ", " << current->character << ") -> "<<endl;
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

private:
    Node* head;   // Pointer to the head node of the linked list
};

int main()
{
    LinkedList list;

    list.addNode(3.14, 'A');
    list.addNode(2.71, 'B');
    list.addNode(1.62, 'C');

    list.printList();

    return 0;
}
