#ifndef NODOS_H
#define NODOS_H
struct node {
    int data;
    node* next;
};
void Insert_Node(node* &head, int data);
void print(node* head);
bool search(node *head, int number);
void deleteNode(node** head_ref, int number);
void average_SumPar(node *head);
void avarage_sumImpar(node *head);
void minor_number(node *head);
void max_number(node *head);
void repeatNode(node* head);
void deleteRepeatNode(node *&lista);
void reverse(node **head_ref);
void sorting(node *head);

#endif
