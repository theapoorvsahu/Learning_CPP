#include <bits/stdc++.h>
using namespace std;

struct node
{
    int datai;
    node *next;
};

class LinkedList
{
public:
    node *head = nullptr;
    
    // Create a new node
    node *newnode()
    {
        node *temp = new node;
        temp->datai = 0;
        temp->next = nullptr;
        return temp;
    }

    // Insert element in Linked List
    void insert(int data)
    {
        node *temp = newnode();
        temp->datai = data;
        if (head == nullptr)
        {
            head = temp;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }

    // Delete in the Linked List
    void delete_list()
    {
        node *ptr = head;
        node *ptr2 = head;
        while (ptr != nullptr)
        {
            ptr2 = ptr2->next;
            delete (ptr);
            ptr = ptr2;
        }
    }

    // Display the Linked List
    void display()
    {
        node *ptr = head;
        while (ptr != nullptr)
        {
            cout << ptr->datai << " ";
            if ( (ptr->next) != nullptr )
                cout << "--> ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    // Count number of elements in the Linked List
    int count()
    {
        int count = 0;
        node *ptr = head;
        while (ptr != nullptr)
        {
            count++;
            ptr = ptr->next;
        }
        return count;
    }

};