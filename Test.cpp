#include "doctest.h"
#include "BinaryTree.hpp"

using namespace ariel;
using namespace std;

BinaryTree<int> int_tree;
//BinaryTree<string> string_tree;



TEST_CASE("root test") {
    CHECK_NOTHROW(int_tree.add_root(111));
    CHECK_NOTHROW(int_tree.add_root(8));
    for(int i=0;i<5;i++){
        CHECK_NOTHROW(int_tree.add_root(i));
    }
    CHECK_NOTHROW(int_tree.add_root(5));
}

TEST_CASE("add_left test") {
    
CHECK_NOTHROW(int_tree.add_left(5,1));
CHECK_NOTHROW(int_tree.add_left(1,8));
CHECK_NOTHROW(int_tree.add_left(8,4));
CHECK_NOTHROW(int_tree.add_left(4,12));
CHECK_NOTHROW(int_tree.add_left(4,12));
CHECK_THROWS(int_tree.add_left(15,12));
CHECK_THROWS(int_tree.add_left(20,3));
CHECK_THROWS(int_tree.add_left(2,8));
CHECK_NOTHROW(int_tree.add_left(5,2));
CHECK_NOTHROW(int_tree.add_left(5,3));
CHECK_THROWS(int_tree.add_left(2,5));
CHECK_NOTHROW(int_tree.add_root(111));
CHECK_NOTHROW(int_tree.add_left(111,45));
CHECK_THROWS(int_tree.add_left(46,45));
CHECK_THROWS(int_tree.add_left(46,111));
CHECK_NOTHROW(int_tree.add_root(5));




}

TEST_CASE("add_right test") {
    
CHECK_NOTHROW(int_tree.add_right(5,3));
CHECK_NOTHROW(int_tree.add_right(1,3));
CHECK_NOTHROW(int_tree.add_right(8,8));
CHECK_NOTHROW(int_tree.add_right(3,50));
CHECK_THROWS(int_tree.add_left(15,12));
CHECK_THROWS(int_tree.add_left(20,3));
CHECK_THROWS(int_tree.add_left(111,222));
CHECK_NOTHROW(int_tree.add_right(5,5));
CHECK_NOTHROW(int_tree.add_root(111));
CHECK_NOTHROW(int_tree.add_right(111,222));
CHECK_NOTHROW(int_tree.add_right(222,333));
CHECK_THROWS(int_tree.add_left(5,3));
CHECK_THROWS(int_tree.add_left(5,111));
CHECK_THROWS(int_tree.add_left(444,222));
CHECK_THROWS(int_tree.add_left(165,284));

}

