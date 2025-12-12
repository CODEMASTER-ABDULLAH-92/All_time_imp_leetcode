#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // unordered_set:
    // - Stores only unique elements (duplicates not allowed)
    // - Elements are stored in an unordered manner
    // - Internally implemented using a hash table

    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(40);
    uset.insert(30);
    uset.insert(20);

    cout << "Elements are unsorted: ";
    for (auto it : uset) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
