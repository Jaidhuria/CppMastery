#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head = NULL;
void insert(int newdata) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newdata;
    newNode->next = head;
    newNode->prev = NULL;
    
    if (head != NULL) {
        head->prev = newNode;
    }
    
    head = newNode;
}
void display(){
    struct node*ptr;
    ptr = head;
    while(ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    cout << "Doubly Linked List: ";
    display();
    return 0;
}