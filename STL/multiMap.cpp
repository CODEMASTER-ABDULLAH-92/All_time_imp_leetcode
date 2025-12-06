#include <iostream>
#include <map>
using namespace std;

int main() {
    // =========================
    // 1️⃣ MAP
    // =========================
    // A map stores key-value pairs.
    // Keys are UNIQUE.
    // Values can be duplicated.
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Apple";   // value duplicated, key unique

    cout << "Map elements:\n";
    for (auto &p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    // =========================
    // 2️⃣ MULTIMAP
    // =========================
    // A multimap stores key-value pairs.
    // Keys CAN be duplicated.
    // Values can also be duplicated.
    multimap<int, string> mm;

    mm.insert({1, "Apple"});
    mm.insert({1, "Banana"});  // duplicate key allowed
    mm.insert({2, "Cherry"});

    cout << "\nMultimap elements:\n";
    for (auto &p : mm) {
        cout << p.first << " -> " << p.second << endl;
    }

    // =========================
    // Accessing all values of a duplicate key in multimap
    // =========================
    cout << "\nValues for key 1 in multimap: ";
    auto range = mm.equal_range(1);  // returns pair of iterators (first, second)
    for (auto it = range.first; it != range.second; it++) {
        cout << it->second << " ";    // prints all values for key 1
    }

    cout << endl;

    // =========================
    // Notes:
    // Map: keys unique, values can duplicate
    // Multimap: keys can duplicate, values can duplicate
    // Main difference -> duplicate keys
    // =========================

    return 0;
}
