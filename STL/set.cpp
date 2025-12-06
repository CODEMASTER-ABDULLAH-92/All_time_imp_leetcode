// 🚀 What is a set?
//     - A set is an associative container in STL.
//     - It stores unique elements in sorted order (ascending by default).
//     - No duplicate values are allowed.

// ✅ Key properties:
//     - Unique elements only
//     - Automatically sorted
//     - Fast search, insert, delete — O(log n)


// 🔹 When to use a set?
// Use set when:
//     - You need unique elements
//     - You need automatic sorting
//     - You want fast search (find())


// Not Exist these functions:  
            // - push_back()
            // - push_front()
            // - pop_back()
            // - pop_front()

// What is a set in STL?
    // - set is NOT like array, vector, or list.
    // - It stores unique elements in sorted order.
    // - The data is stored in a tree structure, specifically a balanced binary search tree (BST) — usually a Red-Black Tree in most STL implementations.
    // - So, unlike vector or array:
    // - You cannot access elements by index
    // - You cannot insert at a specific position
    // - The order is determined by value, not insertion

#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(20);
    s.insert(10);
    s.insert(5);
    s.insert(20);   // ignored, duplicate
    // - adds element in sorted order
    // - Duplicates are ignored automatically

    for (auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
    // Output:=>  5 10 20

    // s.erase(20);
    
    if(s.find(20) != s.end()){
        cout<<"20 found:";
    }else
    {
        cout<<"20 Not found:";
    }
     return 0;
}