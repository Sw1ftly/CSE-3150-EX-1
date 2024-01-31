#include <iostream>

#include "linked_list.h"

using namespace std;

int main() {

    struct node * myList = build_new_linked_list(5);
    print_linked_list(myList,5);
    delete_linked_list(myList);
    print_linked_list(myList, 5);
    return 0;
}