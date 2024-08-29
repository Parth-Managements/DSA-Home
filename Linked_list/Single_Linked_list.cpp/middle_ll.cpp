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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5,7};
    node *head = convertarr2ll(arr);
    middle(head);
}