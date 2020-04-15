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

int number_of_nodes(Node *n) {
    int cnt = 0;
    while(n != NULL) {
        cnt++;
        n = n->next;
    }
    return cnt;
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

    cout << "\nNumber of nodes now: " << number_of_nodes(head);

    return 0;
}


