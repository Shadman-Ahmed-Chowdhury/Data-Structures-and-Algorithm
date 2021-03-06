#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void insertAfter(Node *prev_node, int new_data)
{
    if(prev_node == NULL) {
        printf("Previous Node can't be NULL\n");
        return;
    }
    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
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

    insertAfter(second, 4);
    print_list(head);

    return 0;
}

