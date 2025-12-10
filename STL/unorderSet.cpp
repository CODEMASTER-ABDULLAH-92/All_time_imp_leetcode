// 1️⃣ set / map:
        // - Underlying structure: Balanced BST (usually Red-Black Tree)
        // - Order: Automatically sorted by key (or value in set)
        // - Why sorted: BST keeps elements in order while inserting
        // - Complexity: insert, erase, find → O(log n)

// 2️⃣ unordered_set / unordered_map: 
        // - Underlying structure: Hash table
        // - Order: Unsorted, elements appear in arbitrary order
        // - Why unsorted: Hashing places elements in buckets based on the hash of the key
        // - Complexity: insert, erase, find → O(1) average, worst-case O(n)


// 🚀 What is unordered_set?

//     - It’s an STL container that stores unique elements.
//     - Uses a hash table internally → fast operations.
//     - Elements are unsorted → no guaranteed order when iterating.
//     - No indexing → must use iterators.


#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(40);
    uset.insert(30);
    uset.insert(20);

    cout << "Elements are unsorted: ";
    for (auto it : uset) {
        cout << it << " ";
    }
    
    return 0;
}
