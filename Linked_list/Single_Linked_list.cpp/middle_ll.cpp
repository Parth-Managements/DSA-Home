#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

node *convertarr2ll(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void middle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}

void printll(node *head)
{
    node *i;
    for (i = head; i != nullptr; i = i->next)
    {
        cout << i->data;
    }
}

node *removeany(node *head, int pos)
{
    if (head == NULL || head->next == nullptr)
        return head;

    if(pos == 1)
    {
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node *i;
    node *prev = NULL;
    int cnt = 0;
    for (i = head; i != NULL; i = i->next)
    {
        cnt++;
        if (cnt == pos)
        {
            prev->next = prev->next->next;
        }
        prev = i;
    }

    return head;
}

node *removeNthFromEnd(node *head, int k)
{
    int cnt = 0;
    node *i;
    for (i = head; i != NULL; i = i->next)
    {
        cnt++;
    }
    head = removeany(head, (cnt - k) + 1);
    return head;
}

int main()
{
    vector<int> arr = {1, 2};
    node *head = convertarr2ll(arr);
    // middle(head);
    head = removeNthFromEnd(head, 1);
    printll(head);
}