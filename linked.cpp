// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
// };
// void printlist(node*n){
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// };

// node* insertathead(node* head, int data){
//     node* newnode = new node();
//     newnode->data = data;
//     newnode->next = head;
//     return newnode;
// }

// node* insertattail(node* head, int data){
//     node* newnode = new node();
//     newnode->data = data;
//     newnode->next = NULL;
//     if(head == NULL){
//         return newnode;
//     }
//     node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     return head;
// }

#include <iostream>
using namespace std;
struct Node{
    public:
    int data;
    int new_data;
    struct Node* next;
};
struct Node* head = NULL;
    void insert(int new_data)
     {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = new_data;
    newNode->next = head;
    head = newNode;
    }
void display() {
    struct Node* ptr;
    ptr = head;
    while(ptr != NULL) {
        cout << ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout << "Linked List: ";
    display();
    cout << "NULL" << endl;
    return 0;
}
