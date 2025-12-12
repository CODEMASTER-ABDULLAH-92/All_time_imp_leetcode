#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Vector must be sorted for binary_search
    vector<int> vec = {2, 5, 7, 10, 14, 18, 56};

    int target = 11;

    // binary_search returns true if element exists, false otherwise
    if (binary_search(vec.begin(), vec.end(), target)) {
        cout << target << " is present in the vector." << endl;
    } else {
        cout << target << " is not present in the vector." << endl;
    }

    return 0;
}
