#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *insert_b(struct node *head, int key)
{
    struct node *temp = new node;
    temp->data = key;
    if (head == NULL)
    {
        temp->next = NULL;
        head = temp;
    }
    else if (head != NULL)
    {
        temp->next = head;
        head = temp;
    }

    return head;
}
struct node *insert_e(struct node *head, int key)
{
    struct node *temp = new node;
    struct node *temp2 = head;
    temp->data = key;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->next = NULL;
    return head;
}

struct node* enterRandomPlace(struct node* head, int key, int postion){
    struct node* temp = new node;
    //stroting the address of head in temp2, not creating a new node
    struct node* temp2 = head;
    temp->data = key;
    temp2->next = temp;
    
    
}

void printi(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int n_count = 0;
int count(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        n_count = n_count + 1;
        temp = temp->next;
    }
    return n_count;
}
int main()
{
    struct node *head = NULL;
    head = insert_b(head, 5);
    insert_e(head, 7);
    insert_e(head, 9);
    insert_e(head, 13);
    insert_e(head, 44);
    head = insert_b(head, 3);
}
    