#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }
    bool f = true;
    Node *i = head, *j = head1;
    while (i != NULL && j != NULL)
    {
        if (i->val != j->val)
        {
            f = false;
            break;
        }
        i = i->next;
        j = j->next;
    }
    if (i != NULL || j != NULL)
    {
        f = false;
    }
    if (f == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}