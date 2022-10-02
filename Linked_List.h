#include "Nodos.h"
#include <string>
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
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

#endif
