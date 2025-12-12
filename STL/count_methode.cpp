#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    // ===============================================================
    // 1. SET
    // ===============================================================
    // - set stores unique elements in sorted order
    // - count(x) returns 1 if x exists, 0 if it does not
    set<int> s = {1, 1, 2, 3, 4, 5, 6, 6, 6}; // duplicates automatically removed

    cout << "SET:" << endl;
    cout << "Count of 6 in set: " << s.count(6) << endl;  // 1
    cout << "Count of 10 in set: " << s.count(10) << endl; // 0

    // ===============================================================
    // 2. MULTISET
    // ===============================================================
    // - multiset stores elements in sorted order
    // - allows duplicates
    // - count(x) returns the number of occurrences
    multiset<int> ms = {1, 1, 2, 3, 4, 5, 6, 6, 6};

    cout << "\nMULTISET:" << endl;
    cout << "Count of 6 in multiset: " << ms.count(6) << endl; // 3
    cout << "Count of 1 in multiset: " << ms.count(1) << endl; // 2

    // ===============================================================
    // 3. UNORDERED_SET
    // ===============================================================
    // - unordered_set stores unique elements
    // - elements are NOT sorted
    // - count(x) returns 1 if exists, 0 if not
    unordered_set<int> us = {1, 1, 2, 3, 4, 5, 6, 6, 6};

    cout << "\nUNORDERED_SET:" << endl;
    cout << "Count of 6 in unordered_set: " << us.count(6) << endl;  // 1
    cout << "Count of 10 in unordered_set: " << us.count(10) << endl; // 0

    // ===============================================================
    // 4. UNORDERED_MULTISET
    // ===============================================================
    // - unordered_multiset stores elements in arbitrary order
    // - allows duplicates
    // - count(x) returns the number of occurrences
    unordered_multiset<int> ums = {1, 1, 2, 3, 4, 5, 6, 6, 6};

    cout << "\nUNORDERED_MULTISET:" << endl;
    cout << "Count of 6 in unordered_multiset: " << ums.count(6) << endl; // 3
    cout << "Count of 1 in unordered_multiset: " << ums.count(1) << endl; // 2

    // ===============================================================
    // 5. MAP
    // ===============================================================
    // - map stores key-value pairs
    // - keys are unique and sorted
    // - count(key) returns 1 if key exists, 0 if not
    map<int, string> m;
    m[1] = "A";
    m[2] = "B";
    m[3] = "C";

    cout << "\nMAP:" << endl;
    cout << "Count of key 2 in map: " << m.count(2) << endl; // 1
    cout << "Count of key 5 in map: " << m.count(5) << endl; // 0
    
    // ===============================================================
    // 6. MULTIMAP
    // ===============================================================
    // - multimap stores key-value pairs
    // - keys can be duplicated
    // - keys are sorted
    // - count(key) returns number of occurrences of key
    multimap<int, string> mm;
    mm.insert({1, "A"});
    mm.insert({1, "B"});
    mm.insert({2, "C"});

    cout << "\nMULTIMAP:" << endl;
    cout << "Count of key 1 in multimap: " << mm.count(1) << endl; // 2
    cout << "Count of key 2 in multimap: " << mm.count(2) << endl; // 1

    // ===============================================================
    // 7. UNORDERED_MAP
    // ===============================================================
    // - unordered_map stores key-value pairs
    // - keys are unique, NOT sorted
    // - count(key) returns 1 if key exists, 0 if not
    unordered_map<int, string> um;
    um[1] = "A";
    um[2] = "B";
    um[3] = "C";

    cout << "\nUNORDERED_MAP:" << endl;
    cout << "Count of key 2 in unordered_map: " << um.count(2) << endl; // 1
    cout << "Count of key 5 in unordered_map: " << um.count(5) << endl; // 0

    // ===============================================================
    // 8. UNORDERED_MULTIMAP
    // ===============================================================
    // - unordered_multimap stores key-value pairs
    // - keys can be duplicated
    // - keys are NOT sorted
    // - count(key) returns number of occurrences of key
    unordered_multimap<int, string> umm;
    umm.insert({1, "A"});
    umm.insert({1, "B"});
    umm.insert({2, "C"});

    cout << "\nUNORDERED_MULTIMAP:" << endl;
    cout << "Count of key 1 in unordered_multimap: " << umm.count(1) << endl; // 2
    cout << "Count of key 2 in unordered_multimap: " << umm.count(2) << endl; // 1

    // ===============================================================
    // Summary:
    // - set / unordered_set      : unique values, count returns 0 or 1
    // - multiset / unordered_multiset : allows duplicates, count returns frequency
    // - map / unordered_map      : unique keys, count returns 0 or 1
    // - multimap / unordered_multimap : allows duplicate keys, count returns number of occurrences
    // ===============================================================

    return 0;
}
