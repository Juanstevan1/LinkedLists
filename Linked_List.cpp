#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Nodos.h"
using namespace std;

class Linked_List{
  private:
    node *head =NULL;
    int element_toSearch;
    int option;
  public:
    void showMenu();
    void chooseMenu();
};


void Linked_List:: showMenu(){
  cout<<"------Bienvenido al LinkedList de Juan-------"<<endl;
  cout<<"1.Insertar elementos a la lista\n2.Mostrar elementos de la lista\n3.Buscar elementos en la lista\n4.Eliminar elementos de la lista\n5.Calcular suma promedio números pares\n6.Calcular suma promedio números impares\n7.Calcular numero menor de la lista\n8.Calcular número mayor de la lista\n9.Mostrar elementos repetidos de la lista\n10.Eliminar elementosduplicados de la lista\n11.Salir\n---------------------------------------------"<<endl;
}
void Linked_List:: chooseMenu(){

  bool control = true;
  while(control){
    showMenu();
    cout<<"Digite la operacion a realizar: ";
    cin>>option;
    if (option < 1 || option > 14) {
        cout << "Ingresa una opcion del 1 al 11" << endl;
      continue;
      }
    switch(option){

      case 1:
        {
        int new_Data;
        bool control2 = true;
        string answer_new_Data;
        while(control2){
          cout<<"Escirbe el numero que quieras ingresar: ";
            cin>>new_Data;
          Insert_Node(head, new_Data);
          cout<<"¿Quieres volver a ingresar otro dato? Si o No"<<endl;
            cin>>answer_new_Data;
          if(answer_new_Data == "si" || answer_new_Data == "SI"){
              continue;
          }
          else{
            control2 = false;
          }
        }
          }
      break;

      case 2:
        {
        cout<<"Elementos de la lista"<<endl;
          print(head);
          cout<<" "<<endl;
          }
        break;

      case 3:
        {
        cout<<"***************************"<<endl;
        cout<<"Buscar elemento en la lista"<<endl;
        cout<<"***************************"<<endl;
        cout<<"Digita el elemento que quieras buscar: ";
          cin>>element_toSearch;
        if(search(head,element_toSearch) == true){
          cout<<"***************************"<<endl;
          cout<<"Se ha encontrado el elemento: "<<element_toSearch<<endl;
          cout<<"***************************"<<endl;
        }
        else{
          cout<<"***************************"<<endl;
          cout<<"No se ha encontrado el elemento "<<element_toSearch<<endl;
          cout<<"***************************"<<endl;
        }
          }
      break;

      case 4:
        {
          int delete_element;
        cout<<"Digita el elemento que quiera eliminar: ";
          cin>>delete_element;
          deleteNode(&head,delete_element);
          cout<<"**********************************************"<<endl;
          cout<<"Se ha eliminado el elemento sastifactoriamente"<<endl;
          cout<<"**********************************************"<<endl;
          }
        break;

      case 5:
        {
        cout<<"***************************"<<endl;
        cout<<"Suma promedio números pares"<<endl;
          average_SumPar(head);
        cout<<"***************************"<<endl;
          }
        break;

      case 6:
        {
        cout<<"*****************************"<<endl;
        cout<<"suma promedio números impares"<<endl;
          avarage_sumImpar(head);
        cout<<"*****************************"<<endl;
          }
        break;

      case 7:
            {
        cout<<"************************"<<endl;
        cout<<"Numero menor de la lista"<<endl;
          minor_number(head);
        cout<<"************************"<<endl;
              }
          break;

      case 8:
        {
        cout<<"************************"<<endl;
        cout<<"Numero mayor de la lista"<<endl;
          max_number(head);
        cout<<"************************"<<endl;
          }
        break;

      case 9:
        {
        cout<<"*****************************"<<endl;
        cout<<"Los elementos repetidos son: "<<endl;
        repeatNode(head);
        cout<<"*****************************"<<endl;
          }
        break;

      case 10:
        {
        cout<<"****************************************"<<endl;
        cout<<"Se han removido los elementos duplicados"<<endl;
          deleteRepeatNode(head);
        cout<<"****************************************"<<endl;
          }
      break;

      case 11:
        {
        cout<<"************************"<<endl;
        cout<<"Se ha revertido la lista"<<endl;
        cout<<"************************"<<endl;
        reverse(&head);
          }
        break;
      case 12:
        {
        cout<<"**********************************************"<<endl;
        cout<<"Se ha organizado la lista de forma decreciente"<<endl;
        cout<<"**********************************************"<<endl;
          sorting(head);
          reverse(&head);
        }
        break;
      case 13:
        {
          cout<<"Se ha terminado el programa"<<endl;
          cout<<"Vuelva pronto :)"<<endl;
        control = false;
        }
        break;

    }
  }
}

