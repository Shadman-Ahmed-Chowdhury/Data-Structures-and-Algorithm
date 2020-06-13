#include <bits/stdc++.h>

using namespace std;


//Structure of a node
class Node {
public:
    int data;
    Node *next;
};


//Inserting node at the beginning of a linked list
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;

    //Make the next of new node point to the head
    new_node->next = (*head_ref);

    //Move the head to point to the new node
    (*head_ref) = new_node;
}


//Inserting node at the end of an array
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

//Inserting Node after a specific node
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

//Length of the linked list
int number_of_nodes(Node *n) {
    int cnt = 0;
    while(n != NULL) {
        cnt++;
        n = n->next;
    }
    return cnt;
}

//Delete a node at a specific position
void delete_node_at_pos(Node **head_ref, int position) {
    if(*head_ref == NULL)
        return;

    Node *temp = *head_ref;

    if(position == 0) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for(int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL)
        return;

    Node *next = temp->next->next;

    temp->next = next;


}


//Delete a node from a linked with a given key
void deleteNode(Node **head_ref, int key) {
    Node *temp = *head_ref, *prev;

    if(temp != NULL && temp ->data == key) {
        *head_ref = temp->next;
        return;
    }
    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
        return;
    prev->next = temp->next;
}

//Search an element from a linked list
bool search(Node *n, int key)
{
    while(n != NULL) {
        if(n->data == key)
            return true;
        n = n->next;
    }
    return false;
}


//Print the values of the linked list
void print_list(Node *n)
{
    cout << "\nPrinting the list: " << endl;
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}


//Print the value of the middle node of the linked list
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

    print_list(head);
    push(&head, 11);//Reference to the head;
    print_list(head);
    append(head, 4);
    print_list(head);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    insertAfter(third, 3);
    print_list(head);

    cout << "\nNumber of nodes now: " << number_of_nodes(head);

    deleteNode(&head, 4);
    print_list(head);

    delete_node_at_pos(&head, 5);
    print_list(head);

    if(search(head, 4)) {
        cout << "\n4 is present" << endl;
    }
    else {
        cout << "\n4 is not present" << endl;
    }

    return 0;
}

