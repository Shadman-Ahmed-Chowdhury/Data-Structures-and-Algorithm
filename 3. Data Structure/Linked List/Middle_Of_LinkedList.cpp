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

void printMiddle(Node *head)
{
    Node *fast_ptr = head;
    Node *slow_ptr = head;

    if(head != NULL) {
        while(fast_ptr != NULL && fast_ptr->next != NULL) {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("\nThe middle of linked list is [%d]\n", slow_ptr->data);
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


    append(head, 4);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    print_list(head);

    printMiddle(head);
    return 0;
}

