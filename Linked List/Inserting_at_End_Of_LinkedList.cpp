#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};


void append(Node *n, int new_data)
{
    Node *new_node = new Node();
    //Assigning new value to the new_node
    new_node->data = new_data;
    new_node->next = NULL;

    //Traversing to the end of the list
    while(n->next != NULL) {
        n = n->next;
    }
    n->next = new_node;

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
    append(head, 4);
    print_list(head);

    return 0;
}

