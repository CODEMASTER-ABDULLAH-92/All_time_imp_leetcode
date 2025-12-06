// 🚀 What is list in C++ STL?
// list is a doubly linked list provided by STL.

// This means:
// Each element stores:
//  - its value
//  - pointer to next node
//  - pointer to previous node

#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> li;
    //------------------
    // 📌 Insert Elements
    //------------------
    li.push_front(1);
    li.push_back(2);

    //------------------
    // 📌 Insert Elements at any where
    //------------------
    auto it = li.begin();
    advance(it, 2);
    li.insert(it, 50, 4);

    // advance(it, 2);
    // - advance(iterator, n) moves the iterator forward by n steps.
    // - Lists cannot use random access like arrays (li[2] is invalid).
    // - So advance is used to reach the position you want.

    // 📌 Delete Elements
    li.pop_front();
    li.pop_back();

    auto it = li.begin();
    advance(it,2);
    li.erase(it);

    for (auto it = li.begin(); it != li.end(); it++){
        cout<<*it<<" ";
    }

    for (auto it:li){
        cout<<it<<" ";
    }
    return 0;
}
