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

node *reversell(node *head)
{
    if (head == NULL)
    {
        return head;
    }

    if (head->next == nullptr)
    {
        return head;
    }

    node *front;
    node *prev;
    node *temp = head;
    while (temp != NULL)
    {
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

void printll(node *head)
{
    node *i;
    for (i = head; i != nullptr; i = i->next)
    {
        cout << i->data;
    }
}

void chkpaindrome(node *head)
{
    node *i;
    int number = 0,new_num = 0;
    for (i = head; i != NULL; i = i->next)
    {
        number = (number * 10) + i->data;
    }
    cout << number;

    int temp = number;
    while(number)
    {
        int last = number % 10;
        new_num = (new_num * 10) + last;
        number = number / 10;
    }
    if(temp == new_num)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "not";
    }
}

int main()
{
    vector<int> arr = {1, 2, 1,2,1};
    node *head = convertarr2ll(arr);
    chkpaindrome(head);
}