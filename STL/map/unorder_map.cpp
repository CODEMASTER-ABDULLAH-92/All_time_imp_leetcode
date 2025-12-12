#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // unordered_map:
    // - Stores key-value pairs
    // - Keys are unique (duplicates are overwritten)
    // - Keys are unordered (no sorting)
    // - Values can be duplicated

    unordered_map<int, string> um = {{3, "A"}, {2, "B"}, {1, "C"}};

    // Iterating over unordered_map
    for (auto it = um.begin(); it != um.end(); it++) {
        cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
