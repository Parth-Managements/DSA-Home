#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *back;

    node(int data, node *next, node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

node *convertarr2dll(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

node *deleteatbeg(node *head)
{
    if (head == NULL)
        return NULL;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *deleteatend(node *head)
{
    if (head == NULL)
        return NULL;
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->next == nullptr)
        {
            break;
        }
    }
    if (i->back == nullptr)
    {
        delete i;
        return NULL;
    }
    else
    {
        i->back->next = nullptr;
        delete i;
        return head;
    }
}

node *deleteany(int data1, node *head)
{
    if (data1 == head->data)
    {
        head = deleteatbeg(head);
        return head;
    }
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->next->data == data1)
        {
            break;
        }
    }
    node *temp = i->next;
    node *front = i->next->next;
    node *prev = i;
    if (front == nullptr)
    {
        head = deleteatend(head);
        return head;
    }
    front->back = prev;
    prev->next = front;
    delete temp;
    return head;
}

node *insertatbeg(int data, node *head)
{
    node *temp = new node(data, head, nullptr);
    head->back = temp;
    head = temp;
    return head;
}
node *insertbeforeend(int data, node *head)
{
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->next->next == nullptr)
        {
            break;
        }
    }
    node *temp = new node(data, i->next, i);
    i->next->back = temp;
    i->next = temp;
    return head;
}
node *insertatend(int data, node *head)
{
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->next->next == nullptr)
        {
            break;
        }
    }
    node *temp = new node(data, nullptr, i->next);
    i->next->next = temp;
    return head;
}
node *insertany(int data, int src, node *head)
{
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == src)
        {
            break;
        }
    }
    if (i->next == nullptr)
    {
        node *temp = new node(data, i->next, i);
        i->next = temp;
        return head;
    }
    else
    {
        node *temp = new node(data, i->next, i);
        i->next->back = temp;
        i->next = temp;
        return head;
    }
}
node *reversedll(node *head)
{
    if (head == NULL)
    {
        return head;
    }

    if (head->next == nullptr)
    {
        return head;
    }
    node *last = NULL;
    node *current = head;
    while (current != NULL)
    {
        last = current->back;
        current->back = current->next;
        current->next = last;
        current = current->back;
    }
    return last->back;
}
void printdl(node *head)
{
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
}
void printreversedl(node *head)
{
    node *i;
    for (i = head; i != nullptr; i = i->next)
    {
        if (i->next->next == nullptr)
        {
            break;
        }
    }
    node *temp = i->next;
    while (temp != head)
    {
        cout << temp->data;
        temp = temp->back;
    }
    cout << temp->data;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convertarr2dll(arr);
    head = reversedll(head);
    printdl(head);
}