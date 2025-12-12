#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // unordered_multiset:
    // - Duplicates are allowed
    // - Elements are unordered (unsorted)

    unordered_multiset<int> ums = {8, 5, 34, 7, 2, 1};

    // Iterate and print all elements
    for (auto it = ums.begin(); it != ums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
