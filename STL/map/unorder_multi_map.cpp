#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // unordered_multimap:
    // - Stores key-value pairs
    // - Keys can be duplicated
    // - Keys are unordered (not sorted)
    // - Values can also be duplicated

    unordered_multimap<int, string> umm = {{2, "B"}, {2, "C"}, {1, "A"}};

    // Iterate and print all key-value pairs
    for (auto it = umm.begin(); it != umm.end(); it++) {
        cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
