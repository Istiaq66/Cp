///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
struct Node
{
    int data;
    struct Node *link;
} *head;

void create(int a[], int n)
{
    struct Node *t, *last;
    head = new Node;
    head->data = a[0];
    head->link = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->link = NULL;
        last->link = t;
        last = t;
    }
}

void display(struct Node *p)
{

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->link;
    }
}

void reverse(struct Node *head)
{

    struct Node *prev = NULL, *next = NULL;

    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
}

int main()
{

    int a[5] = {1, 2, 3, 4, 5};

    create(a, 5);
    display(head);
}