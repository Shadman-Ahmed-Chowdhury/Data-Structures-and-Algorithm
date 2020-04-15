#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void print_list(Node *n)
{
    cout << "\nPrinting the list: " << endl;
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}


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
    delete_node_at_pos(&head, 1);
    print_list(head);


    return 0;
}



