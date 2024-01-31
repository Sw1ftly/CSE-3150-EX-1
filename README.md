# CSE-3150-EX-1



NOTES:

-function was initially simple to right, however testing was hard
-with the given functions there was no way to use any doctest CHECK_EQUAL to check if a deleted list was really deleted
-I ended up modifying delete_linked_list : i made it take the address of a struct * Node -> so now it takes struct **node
REASONING: This way I could change the start node pointer if i wanted. After deleting the linked list, its original start pointer turns to a nullptr
Only by using this method could I use a CHECK_EQUAL to make the function get unit tested properly.

The original function used to be this (BEFORE I MODIFIED TO MAKE IT BE ABLE TO GET UNIT TESTED) : 
 
void delete_linked_list(struct node * start){

    struct node* current = start;
    struct node* next_node = NULL;
    
    while (current != NULL) {
        next_node = current->next;
        delete current; 
        current = next_node;
    }
    start = nullptr;
}

-hopefully the tests make sense

HOW TO COMPILE:

-download and transfer all files in same directory
-run:  g++ unit_test_linked_list.cpp linked_list.cpp
-let that compile
-input: ./a.out
-EXPECTED OUTPUT: 1 test case with 5 assertions all pass
