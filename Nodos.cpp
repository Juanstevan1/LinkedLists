#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct node {
    int data;
    node* next;
};


void Insert_Node(node* &head, int data)
{
   node* newnode = new node;
   newnode->data=data;
   newnode->next=NULL;

   if(head == NULL)
   {
        head=newnode;
   }
   else
   {
        node* last=head;
        while(last->next != NULL) last=last->next;
        last->next = newnode;
   }
}

void print(node* head) //Imprime la lista de nodos.
{
    node* curr = head;
  cout<<" "<<endl;
    while (curr != NULL) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
  cout<<" "<<endl;
}

bool search(node *head, int number){ //Buscamos el elemento y retornamos verdadero si lo encuentra.
    node *actual = new node();
    actual = head;
    bool control = false;
    while((actual != NULL) && (actual->data <= number)){
        if(actual->data == number){
            control = true;
        }
        actual = actual->next;
    }
    return control;
  }

void deleteNode(node** head_ref, int number)
{

    node* list = *head_ref;
    node* prev = NULL;

    if (list != NULL && list->data == number)
    {
        *head_ref = list->next;
        return;
    }
      else
    {
    while (list != NULL && list->data != number)
    {
        prev = list;
        list = list->next;
    }
    if (list == NULL)
        return;
    prev->next = list->next;
    delete list;
    }
}

void average_SumPar(node *head){
  node *actual = new node();
  actual = head;
  int addition = 0, counter = 0;
  while(actual != NULL){
    if(actual->data %2 ==0){
      addition = addition + actual ->data;
      counter++;
    }
    actual = actual->next;
  }
  int avarage = addition/counter;
  cout<<avarage<<endl;
}

void avarage_sumImpar(node *head){
  node *actual = new node();
  actual = head;
  int addition = 0, counter = 0;
  while(actual != NULL){
    if(actual->data %2 !=0){
      addition = addition + actual ->data;
      counter++;
    }
    actual = actual->next;
  }
  int avarage = addition/counter;
  cout<<avarage<<endl;
}

void minor_number(node *head){
  node *actual = new node();
  actual = head;
  int minor = actual->data;
  while(actual !=NULL){
    if(actual->data < minor){
      minor = actual ->data;
    }
    actual = actual->next;
  }
  cout<<"El numero menor de la lista es: "<<minor<<endl;
}

void max_number(node *head){
  node *actual = new node();
  actual = head;
  int max = actual->data;
  while(actual !=NULL){
    if(actual->data > max){
      max = actual ->data;
    }
    actual = actual->next;
  }
  cout<<"El numero menor de la lista es: "<<max<<endl;
}

void repeatNode(node* head)
{
    while (head->next != NULL) {
        node *lista = head->next;
        while (lista != NULL) {
            if (head->data == lista->data) {
                cout<<lista->data<<" -> ";
                break;
            }
            lista = lista->next;
        }
        head = head->next;
    }
}

void deleteRepeatNode(node *&lista) {
  node *actual = new node();
  actual = lista;
  node *siguiente = new node();
  siguiente = actual->next;
  while (actual != NULL) {
    while (siguiente != NULL) {
      if (actual->data == siguiente->data) {
        deleteNode(&lista, siguiente->data);
      }
      siguiente = siguiente->next;
    }
    actual = actual->next;
    siguiente = actual->next;
  }
}

void reverse(node **head_ref) {
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = (*head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

int getCount(node* head)
{
    int count = 0; // Initialize count
    node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


void sorting(node *head){
        node* cur1 = head;
        node* cur2 = head;

       for (int i = 0; i < getCount(head); i++) {
        for (int j = 0; j < getCount(head) - 1; j++) {
            if (cur1->data < cur2->data) {
                int temp = cur1->data;
                cur1->data = cur2->data;
                cur2->data = temp;

            }
            cur2 = cur2->next;
        }
         cur2 = head;
         cur1 = head->next;
         for (int k = 0; k < i; k++) {
                cur1 = cur1->next;
         }
    }
}
