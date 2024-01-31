#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  https://hackingcpp.com/cpp/tools/testing_frameworks.html
 */

#include "doctest.h"
#include "linked_list.h"


int zero_linked_list_elts = 0;
struct node * zero_linked_list_elts_null_node = NULL;

int one_element_linked_list = 1;
int data_value_of_initial_linked_list_elt = 1;
struct node * linked_list_one_elt = build_new_linked_list(one_element_linked_list);

int two_element_linked_list = 2;
int data_value_of_second_elt = 2;
struct node * linked_list_two_elts = build_new_linked_list(two_element_linked_list);





TEST_CASE("linked_list testing") {

    
    SUBCASE("delete_linked_list"){
        struct node * LL1= build_new_linked_list (0);
        delete_linked_list(&LL1);
        CHECK_EQ(LL1, nullptr);
        struct node * LL2= build_new_linked_list (1);
        delete_linked_list(&LL2);
        CHECK_EQ(LL2, nullptr);
        struct node * LL3= build_new_linked_list (3);
        delete_linked_list(&LL3);
        CHECK_EQ(LL3, nullptr);
        struct node * LL4= build_new_linked_list (5);
        delete_linked_list(&LL4);
        CHECK_EQ(LL4, nullptr);
        struct node * LL5= build_new_linked_list (10);
        delete_linked_list(&LL5);
        CHECK_EQ(LL5, nullptr);
    }
}