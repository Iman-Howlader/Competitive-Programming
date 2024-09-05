#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void duplicate(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i != NULL; i = i->next)
    {
        for (Node *j = i->next, *prev = i; j != NULL;)
        {
            if (i->val == j->val)
            {
                Node *deleteNode = j;
                prev->next = j->next;
                j = j->next;
                delete deleteNode;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
    }
    print_linked_list(head);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n1, v1;
    while (true)
    {
        cin >> v1;
        if (v1 == -1)
            break;
        insert_tail(head, tail, v1);
    }
    duplicate(head);
    return 0;
}