#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_position(Node *&head, Node *&tail, int val, int pos)
{
    Node *newNode = new Node(val);

    if (pos == 0)
    {
        insert_head(head,tail,val);
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next = newNode;
        if (newNode->next != NULL)
        {
            newNode->next->prev = newNode;
        }
        else
        {
            tail = newNode; 
        }
    }
}

void print_normal(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < Q; i++)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos > i)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_position(head, tail, val, pos);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}