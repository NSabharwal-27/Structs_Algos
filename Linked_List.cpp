// Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;

struct node {
    int data;
    struct node* next;
};

class Linked_List {
private:
    node* head, * tail;
public:
    Linked_List() {
        head = NULL;
        tail = NULL;
    }
    
    void addNode(int n) {
        
        node* tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if (head == NULL) {
            head = tmp;
            tail = tmp;
        }
        else {
            tail->next = tmp;
            tail = tail->next;
        }

    }


    void traverse() {
        node* tmp;
        tmp = head;
            while (tmp != NULL) {
                cout << tmp->data << endl;
                tmp = tmp->next;
            }
    }
};
int main()
{
   cout << "Hello World!\n";
   cout << "Creating a linked list now...\n";
   
   Linked_List foo;
    
   cout << "Linked List object foo has been created..\n";

   for (int i = 0; i < 32; i++) {
       foo.addNode(i);
   }

   cout << "Linked List has been populated!\n";

   foo.traverse();

    return 0;
}

