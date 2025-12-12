#include <iostream>
#include <set>
using namespace std;

int main() {
    // ---------------------------------------------------------------
    // multiset example
    // ---------------------------------------------------------------
    // A multiset allows duplicate values and stores them in sorted order.
    // The count() method returns the number of occurrences of a given value.

    multiset<int> ms = {1, 1, 2, 3, 4, 5, 6, 6, 6};

    // Internally, the multiset stores:
    // {1, 1, 2, 3, 4, 5, 6, 6, 6}
    // Count of 6 will reflect the actual frequency (3 in this case).

    cout << "Elements in multiset: ";
    for (auto x : ms) {
        cout << x << " ";
    }
    cout << endl;

    int count6 = ms.count(6);  // number of times 6 appears
    cout << "Count of 6 in multiset: " << count6 << endl; // Output: 3

    int count1 = ms.count(1);  // number of times 1 appears
    cout << "Count of 1 in multiset: " << count1 << endl; // Output: 2

    // ---------------------------------------------------------------
    // Summary:
    // multiset -> sorted, allows duplicates, count() shows actual frequency
    // ---------------------------------------------------------------

    return 0;
}
