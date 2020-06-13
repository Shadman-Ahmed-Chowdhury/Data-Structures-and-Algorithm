#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;

    //Make the next of new node point to the head
    new_node->next = (*head_ref);

    //Move the head to point to the new node
    (*head_ref) = new_node;
}

void print_list(Node *n)
{
    cout << "\nPrinting the list: " << endl;
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_list(head);
    push(&head, 11);//Reference to the head;
    print_list(head);

    return 0;
}
