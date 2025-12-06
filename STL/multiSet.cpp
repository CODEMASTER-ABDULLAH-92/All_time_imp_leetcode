// Exactly! ✅ That’s the core idea:

// * **`set`** → stores **only unique elements**. No duplicates allowed.
// * **`multiset`** → stores **duplicates too**. You can have multiple occurrences of the same value.

// Everything else — like **automatic sorting** and **balanced BST structure** — works the same way for both.

// It’s really just about whether duplicates are allowed or not.


#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(20);
    ms.insert(10);   // duplicate allowed

    cout << "Multiset elements: ";
    for (int x : ms) cout << x << " ";  // Output: 5 10 10 20

    cout << "\nCount of 10: " << ms.count(10); // Output: 2

    ms.erase(ms.find(10));   // erase one occurrence of 10

    cout << "\nAfter erasing one 10: ";
    for (int x : ms) cout << x << " ";  // Output: 5 10 20

    return 0;
}
